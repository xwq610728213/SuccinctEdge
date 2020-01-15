//
// Created by weiqin xu on 12/11/2019.
//

#ifndef TRIPLE_STORE_JOINVARIABLES_HPP
#define TRIPLE_STORE_JOINVARIABLES_HPP

#include <map>
#include <string>
#include "Constant.hpp"
#include <iostream>
#include <vector>


#define INSTANCE_NUM 0
#define PROPERTY_NUM 1
#define CONCEPT_NUM 2
#define STRING_DATA_NUM 3
#define NUM_DATA_NUM 4

using namespace std;


class JoinVariables {
private:
    map<string,pair<VariableType, long>> var_map;
    vector<string> var_instances;
    vector<string> var_properties;
    vector<string> var_concepts;
    vector<string> var_str_datas;
    vector<string> var_num_datas;
    long max_index_instance;
    long max_index_property;
    long max_index_concept;
    long max_index_string_data;
    long max_index_num_data;
public:
    JoinVariables();
    ~JoinVariables();

    bool is_empty(){
        if(max_index_instance >= 0 || max_index_property >= 0 || max_index_concept >= 0 || max_index_string_data >= 0 || max_index_num_data >= 0 )
            return false;
        else
            return true;
    }

    void operator=(const JoinVariables &var2){
        var_map = var2.get_var_map();
        var_instances = var2.get_var_vector(INS);
        var_properties = var2.get_var_vector(PRO);
        var_concepts = var2.get_var_vector(CON);
        var_str_datas = var2.get_var_vector(STR_DATA);
        var_num_datas = var2.get_var_vector(NUM_DATA);
        max_index_instance = var2.get_max_var_index(INS);
        max_index_property = var2.get_max_var_index(PRO);
        max_index_concept = var2.get_max_var_index(CON);
        max_index_string_data = var2.get_max_var_index(STR_DATA);
        max_index_num_data = var2.get_max_var_index(NUM_DATA);
    }

    map<string, pair<VariableType, long>> get_var_map() const{
        return var_map;
    }

    vector<string> get_var_vector(VariableType var_type) const{
        switch(var_type){
            case INS:
                return var_instances;
            case PRO:
                return var_properties;
            case CON:
                return var_concepts;
            case STR_DATA:
                return var_str_datas;
            case NUM_DATA:
                return var_num_datas;
            default:
                cerr << "No correponding variable type!" << endl;
                vector<string> tmp;
                return tmp;
        }
    }

    long get_max_var_index(VariableType var_type) const{
        switch(var_type){
            case INS:
                return max_index_instance;
            case PRO:
                return max_index_property;
            case CON:
                return max_index_concept;
            case STR_DATA:
                return max_index_string_data;
            case NUM_DATA:
                return max_index_num_data;
            default:
                cerr << "No correponding variable type!" << endl;
                return -1;
        }
    }

    long add(string &var, VariableType var_type);
    bool contains(string &var);
    tuple<VariableType, long> get_index_from_var(string var);
    VariableType get_first_variable_type(){
        VariableType type;
        long index;
        tie(type, index) = (var_map.begin()->second);
        return type;
    }
    void clear();
    void merge(const JoinVariables &var_table_2);
    void print_all(){
        for(auto i: var_instances)
            cout << i << " ";

        for(auto i: var_properties)
            cout << i << " ";

        for(auto i: var_concepts)
            cout << i << " ";

        for(auto i: var_num_datas)
            cout << i << " ";

        for(auto i: var_str_datas)
            cout << i << " ";

        cout << endl << endl;
    }
};


#endif //TRIPLE_STORE_JOINVARIABLES_HPP
