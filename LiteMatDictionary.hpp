//
// Created by weiqin xu on 09/11/2019.
//

#ifndef TRIPLE_STORE_LITEMATDICTIONARY_HPP
#define TRIPLE_STORE_LITEMATDICTIONARY_HPP

#include <map>
#include <string>
#include <vector>
#include "Constant.hpp"

#define ID 0
#define LEN_LOCAL 1
#define LAST_BIT 2

using namespace std;

class LiteMatDictionary {
private:
    ID_TYPE total_encoding_length;

    // in the format of (key, id, length_encoding_local, last_bit_encoding)
    map<string, vector<ID_TYPE>> instance2id;

    // in the format of (id, key)
    map<ID_TYPE, string> id2instance;
public:
    LiteMatDictionary();
    void update_total_encoding_length(ID_TYPE length);
    ID_TYPE look_up_total_encoding_length();
    ID_TYPE look_up_instance(string instance);
    tuple<ID_TYPE, ID_TYPE> look_up_instance_range(string instance);
    ID_TYPE look_up_local_encoding_length(string instance);
    ID_TYPE look_up_last_bit_encoding(string instance);
    ID_TYPE look_up_local_encoding_length(ID_TYPE id);
    ID_TYPE look_up_last_bit_encoding(ID_TYPE id);
    string look_up_id(ID_TYPE id);
    void store_to_disk(const string &path, const string &file_name);
    void back_up_from_disk(const string &path, const string &file_name);
    void add(string instance, ID_TYPE id, ID_TYPE length_encoding_local, ID_TYPE last_bit_encoding);
    //void remove(string instance);
    //void remove(ID_TYPE id);
    //void printAll();
};


#endif //TRIPLE_STORE_LITEMATDICTIONARY_HPP
