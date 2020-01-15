//
// Created by weiqin xu on 11/11/2019.
//

#include "JoinLine.hpp"

JoinLine::JoinLine(){}

JoinLine::~JoinLine() {
    instances.clear();
    properties.clear();
    concepts.clear();
}


void JoinLine::add(ID_TYPE id, VariableType var_type) {
    switch(var_type){
        case INS:
            instances.push_back(id);
            break;
        case PRO:
            properties.push_back(id);
            break;
        case CON:
            concepts.push_back(id);
            break;
        default:
            cerr << "Wrong variable type!" << endl;
    }
}

vector<ID_TYPE> JoinLine::get_vector_of_id(VariableType var_type) const {
    switch(var_type){
        case INS:
            return instances;
        case PRO:
            return properties;
        case CON:
            return concepts;
        default:
            cerr << "Wrong variable type!" << endl;

    }
}


void JoinLine::merge_simple(JoinLine &line2) {
    for(auto id: line2.get_vector_of_id(INS)){
        this->instances.push_back(id);
    }
    for(auto id: line2.get_vector_of_id(PRO)){
        this->properties.push_back(id);
    }
    for(auto id: line2.get_vector_of_id(CON)){
        this->concepts.push_back(id);
    }
}

void JoinLine::merge_complexe(JoinLine &line2, vector<tuple<VariableType, long>> &index_list) {
    cerr << "Not implemented!" << endl;
}