//
// Created by weiqin xu on 11/11/2019.
//

#ifndef TRIPLE_STORE_JOINLINE_HPP
#define TRIPLE_STORE_JOINLINE_HPP

#include <iostream>
#include <vector>
#include "Constant.hpp"

using namespace std;

class JoinLine {
private:
    //vector<string> variables_instances;
    vector<ID_TYPE> instances;

    //vector<string> variables_properties;
    vector<ID_TYPE> properties;

    //vector<string> variables_concepts;
    vector<ID_TYPE> concepts;

    // Reserved parts
    //vector<string> variables_strings;
    //vector<string> string_datas;

    //vector<string> variables_nums;
    //vector<NUM_DATA_TYPE> num_datas;

public:
    JoinLine();
    //JoinLine(vector<ID_TYPE> &);
    ~JoinLine();
    void add(ID_TYPE id, VariableType var_type);
    // void add(VariableType var_type, string str);
    // void add(VariableType var_type, double num);

    void operator=(const JoinLine &line2){
        instances = line2.get_vector_of_id(INS);
        properties = line2.get_vector_of_id(PRO);
        concepts = line2.get_vector_of_id(CON);
    }

    vector<ID_TYPE> get_vector_of_id(VariableType var_type) const;

    ID_TYPE get_id(VariableType &var_type, long &index){
        switch(var_type){
            case INS:
                return instances[index];
            case PRO:
                return properties[index];
            case CON:
                return concepts[index];
        }
    }


    void merge_simple(JoinLine &line2);
    void merge_complexe(JoinLine &line2, vector<tuple<VariableType, long>> &index_list);
    void print_all(){
        for(auto i: instances)
            cout << i << " ";

        for(auto i: properties)
            cout << i << " ";

        for(auto i: concepts)
            cout << i << " ";

        cout << endl;
    }
};


#endif //TRIPLE_STORE_JOINLINE_HPP
