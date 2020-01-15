//
// Created by weiqin xu on 28/08/2019.
//

#ifndef TRIPLE_STORE_RDFTYPESTORE_HPP
#define TRIPLE_STORE_RDFTYPESTORE_HPP

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include "Constant.hpp"
#include "JoinLine.hpp"

using namespace std;

class RDFTypeStore {
private:
    map<ID_TYPE,vector<ID_TYPE>> s2concept;
    map<ID_TYPE,vector<ID_TYPE>> concept2s;
public:
    RDFTypeStore();
    void add(ID_TYPE s, ID_TYPE concept, bool force = false);
    void remove(ID_TYPE s, ID_TYPE concept);
    bool contains(ID_TYPE s, ID_TYPE concept);
    vector<JoinLine> look_up_subject(ID_TYPE subject);
    vector<JoinLine> look_up_concept(ID_TYPE concept);
    vector<JoinLine> look_up_concept_with_reason(ID_TYPE concept_begin, ID_TYPE concept_end);
    vector<tuple<ID_TYPE,ID_TYPE>> look_up_subject_concept();
    void store_to_disk(const string &path);
};


#endif //TRIPLE_STORE_RDFTYPESTORE_HPP
