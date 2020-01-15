//
// Created by weiqin xu on 09/11/2019.
//

#include "LiteMatDictionary.hpp"
#include <iostream>
#include "Util.hpp"
#include <fstream>
#include <sstream>
#include <string>

LiteMatDictionary::LiteMatDictionary() {}

void LiteMatDictionary::add(string instance, ID_TYPE id, ID_TYPE length_encoding_local, ID_TYPE last_bit_encoding) {
    instance2id[instance].push_back(id);
    instance2id[instance].push_back(length_encoding_local);
    instance2id[instance].push_back(last_bit_encoding);
    id2instance[id] = instance;
}

ID_TYPE LiteMatDictionary::look_up_instance(string instance) {
    if(instance2id.count(instance) > 0){
        return instance2id[instance][ID];
    }else{
        throw DictException("Research instance doesn't exist!");
    }
}

ID_TYPE LiteMatDictionary::look_up_local_encoding_length(string instance) {
    if(instance2id.count(instance) > 0){
        return instance2id[instance][LEN_LOCAL];
    }else{
        throw DictException("Research instance doesn't exist!");
    }
}

ID_TYPE LiteMatDictionary::look_up_last_bit_encoding(string instance) {
    if(instance2id.count(instance) > 0){
        return instance2id[instance][LAST_BIT];
    }else{
        throw DictException("Research instance doesn't exist!");
    }
}

ID_TYPE LiteMatDictionary::look_up_local_encoding_length(ID_TYPE id) {
    if(id2instance.count(id) > 0){
        return instance2id[id2instance[id]][LEN_LOCAL];
    }else{
        throw DictException("Research id doesn't exist!");
    }
}

ID_TYPE LiteMatDictionary::look_up_last_bit_encoding(ID_TYPE id) {
    if(id2instance.count(id) > 0){
        return instance2id[id2instance[id]][LAST_BIT];
    }else{
        throw DictException("Research id doesn't exist!");
    }
}

string LiteMatDictionary::look_up_id(ID_TYPE id) {
    if(id2instance.count(id) > 0){
        return id2instance[id];
    }else{
        throw DictException("Research id doesn't exist!");
    }
}

void LiteMatDictionary::update_total_encoding_length(ID_TYPE length) {
    total_encoding_length = length;
}

ID_TYPE LiteMatDictionary::look_up_total_encoding_length() {
    return total_encoding_length;
}

tuple<ID_TYPE, ID_TYPE> LiteMatDictionary::look_up_instance_range(string instance) {
    ID_TYPE c_begin, c_end;
    if(instance2id.count(instance) > 0){
        c_begin = instance2id[instance][ID];
        c_end = c_begin + (1 << (total_encoding_length - this->look_up_last_bit_encoding(instance)));
        return make_tuple(c_begin, c_end);
    }else{
        throw DictException("Research instance doesn't exist!");
    }
}

void LiteMatDictionary::back_up_from_disk(const string &path, const string &file_name) {
    ifstream file;
    string full_file_path = path[path.size() - 1] == '/'? path + file_name: path + "/" + file_name;
    file.open(full_file_path);
    string line;
    total_encoding_length = 0;
    while(getline(file, line, '\n')){
        istringstream is(line);
        string ins;
        ID_TYPE id, local_length, last_bit_encoding;
        is >> ins >> id >> local_length >> last_bit_encoding;
        this->add(ins, id, local_length, last_bit_encoding);
        if(last_bit_encoding > total_encoding_length)
            total_encoding_length = last_bit_encoding;
    }
    cout << instance2id.size() << " elements!" << endl;
}

void LiteMatDictionary::store_to_disk(const string &path, const string &file_name) {
    string file_path;

    if(path[path.length() - 1] == '/'){
        file_path = path + file_name + ".dict";
    }else{
        file_path = path + "/" + file_name + ".dict";
    }

    ofstream out(file_path);

    for(auto line: instance2id){
        out << line.first << " " << (line.second)[0] << " " << (line.second)[1] << " " << (line.second)[2] << endl;
    }
}