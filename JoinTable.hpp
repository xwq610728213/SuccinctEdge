//
// Created by weiqin xu on 16/11/2019.
//

#ifndef TRIPLE_STORE_JOINTABLE_HPP
#define TRIPLE_STORE_JOINTABLE_HPP

#include "JoinLine.hpp"
#include "JoinVariables.hpp"
#include "RDFStorage.hpp"
#include <vector>
#include <list>

class JoinTable {
private:
    JoinVariables variable_table;
    list<JoinLine> data_table;
public:
    JoinTable();
    void join(RDFStorage &rdf_store, vector<string> &triple_pattern);
};


#endif //TRIPLE_STORE_JOINTABLE_HPP
