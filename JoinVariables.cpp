//
// Created by weiqin xu on 12/11/2019.
//

#include "JoinVariables.hpp"

JoinVariables::JoinVariables() {
    max_index_instance = -1;
    max_index_property = -1;
    max_index_concept = -1;
    max_index_string_data = -1;
    max_index_num_data = -1;
}

JoinVariables::~JoinVariables() {
    var_map.clear();
    var_instances.clear();
    var_properties.clear();
    var_concepts.clear();
    var_str_datas.clear();
    var_num_datas.clear();
}


long JoinVariables::add(string &var, VariableType var_type) {
    if(var_map.count(var) == 0){
        switch(var_type){
            case INS:
                var_map[var] = make_pair(var_type, ++max_index_instance);
                var_instances.push_back(var);
                return max_index_instance;
            case PRO:
                var_map[var] = make_pair(var_type, ++max_index_property);
                var_properties.push_back(var);
                return max_index_property;
            case CON:
                var_map[var] = make_pair(var_type, ++max_index_concept);
                var_concepts.push_back(var);
                return max_index_concept;
            case STR_DATA:
                var_map[var] = make_pair(var_type, ++max_index_string_data);
                var_str_datas.push_back(var);
                return max_index_string_data;
            case NUM_DATA:
                var_map[var] = make_pair(var_type, ++max_index_num_data);
                var_num_datas.push_back(var);
                return max_index_num_data;
            default:
                cerr << "Variable type error!" << endl;
                return -1;
        }
    }else{
        cerr << "Variable exists!" << endl;
        return -1;
    }
}

tuple<VariableType, long> JoinVariables::get_index_from_var(string var) {
    return var_map[var];
}

void JoinVariables::clear() {
    var_map.clear();
}

void JoinVariables::merge(const JoinVariables &var_table_2) {
    cerr << "Not implemented!" << endl;
}

bool JoinVariables::contains(string &var) {
    if(var_map.count(var) > 0){
        return true;
    }else{
        return false;
    }
}