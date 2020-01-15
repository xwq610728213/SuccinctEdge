//
// Created by weiqin xu on 26/08/2019.
//

#ifndef TRIPLE_STORE_RDFSTORAGE_HPP
#define TRIPLE_STORE_RDFSTORAGE_HPP

#include "TripleStore.hpp"
#include "Dictionary.hpp"
#include "RDFTypeStore.hpp"
#include "LiteMatDictionary.hpp"
#include "JoinLine.hpp"
#include "JoinVariables.hpp"
#include <iostream>
#include <fstream>
#include "Constant.hpp"
#include <math.h>

using namespace std;


class RDFStorage {
private:
    bool reason = false;
    bool show_results = false;
    TripleStore triple_store;
    // Storage for: s rdf:type concept
    RDFTypeStore type_store;
    Dictionary dict_instances;
    LiteMatDictionary dict_properties;   // Can be optimized with LiteMat
    LiteMatDictionary dict_concepts;  // Can be optimized with LiteMat


    unsigned long long num_predicate_triples(string predicate);
    tuple<string,string,string> triple_string_parser(string &str);
    bool more_selective(vector<string>& first, vector<string>& second);
    vector<string> find_first_triple_pattern(vector<vector<string>>& query_table);
    vector<string> find_next_triple_pattern(JoinVariables& variables, vector<vector<string>>& query_table);
    void join(JoinVariables& variables, list<JoinLine>& table_a, vector<string> &triple_pattern);
    //void merge_join(JoinVariables& variables, list<JoinLine>& table_a, vector<string> &triple_pattern);
    bool has_binding(JoinVariables& variables, vector<string>& tp);
    int selectivity(vector<string>& t);
    bool merge_join_condition(const vector<string>& variables, const vector<string>& triple_pattern);
public:
    RDFStorage();
    RDFStorage(string &tbox_path, ifstream& abox_file, TripleStoreType triple_store_type);
    RDFStorage(ifstream& abox_file, TripleStoreType triple_store_type);
    TripleStoreType get_triple_store_type(){
        return triple_store.get_ts_type();
    }

    void set_reason(bool set_var){
        reason = set_var;
    }

    void set_show_results(bool sr){
        show_results = sr;
    }

    void store_to_disk(const string &path);
    void back_up_from_disk(const string &path);
    void load_facts(ifstream& abox_file, TripleStoreType triple_store_type);
    void load_concepts(ifstream& concepts_file);
    tuple<JoinVariables, vector<JoinLine>> query_triple_pattern(string s, string p, string o);
    tuple<JoinVariables, list<JoinLine>> query_graph_pattern(vector<string> triple_string_vector);
    string look_up_id_instance(ID_TYPE id){
        return dict_instances.look_up_id(id);
    }

    string look_up_id_property(ID_TYPE id){
        return dict_properties.look_up_id(id);
    }

    string look_up_id_concept(ID_TYPE id){
        return dict_concepts.look_up_id(id);
    }
};


#endif //TRIPLE_STORE_RDFSTORAGE_HPP
