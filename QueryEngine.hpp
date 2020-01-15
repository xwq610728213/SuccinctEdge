//
// Created by weiqin xu on 16/11/2019.
//

#ifndef TRIPLE_STORE_QUERYENGINE_HPP
#define TRIPLE_STORE_QUERYENGINE_HPP

#include "JoinTable.hpp"
#include "RDFStorage.hpp"


class QueryEngine {
private:
    JoinTable join_table;

public:
    QueryEngine();

};


#endif //TRIPLE_STORE_QUERYENGINE_HPP
