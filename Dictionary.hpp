//
// Created by weiqin xu on 26/08/2019.
//

#ifndef TRIPLE_STORE_DICTIONARY_HPP
#define TRIPLE_STORE_DICTIONARY_HPP

#include <map>
#include <string>
#include <vector>
#include "Constant.hpp"

using namespace std;

class Dictionary {
private:
    map<string, ID_TYPE> instance2id;
    map<ID_TYPE, string> id2instance;
public:
    Dictionary();
    ID_TYPE look_up_instance(string instance);
    string look_up_id(ID_TYPE id);
    void store_to_disk(const string &path, const string &file_name);
    void back_up_from_disk(const string &path, const string &file_name);
    void add(string instance, ID_TYPE id);
    void remove(string instance);
    void remove(ID_TYPE id);
    void printAll();
};


#endif //TRIPLE_STORE_DICTIONARY_HPP
