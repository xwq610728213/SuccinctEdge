//
// Created by weiqin xu on 16/11/2019.
//

#include "JoinTable.hpp"

/*
void JoinTable::join(RDFStorage &rdf_store, vector<string> &triple_pattern) {
    if(variable_table.is_empty()){
        vector<JoinLine> temp;
        tie(variable_table, temp) = rdf_store.query_triple_pattern(triple_pattern[0], triple_pattern[1], triple_pattern[2]);
        data_table.assign(temp.begin(), temp.end());
    }else{
        vector<int> tp_join_variable_index;
        for(auto i = 0; i < triple_pattern.size(); ++i){
            if(variable_table.contains(triple_pattern[i])){
                tp_join_variable_index.push_back(i);
            }
        }

        // Indicate if variables_table has been updated.
        bool trig = false;

        for(auto iter = data_table.begin(); iter != data_table.end(); ++iter ){
            JoinVariables var2;
            vector<JoinLine> temp;
            vector<string> query_join_tp = triple_pattern;
            for(auto i: tp_join_variable_index){
                if(i == 1){
                    query_join_tp[i] =
                }

            }
            tie(var2, temp) = rdf_store.query_triple_pattern(triple_pattern[0], triple_pattern[1], triple_pattern[2]);

        }
    }
}

*/