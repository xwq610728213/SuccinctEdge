//
// Created by weiqin xu on 28/08/2019.
//

#include "RDFTypeStore.hpp"
#include "Util.hpp"
#include <fstream>

RDFTypeStore::RDFTypeStore(){}

void RDFTypeStore::add(ID_TYPE s, ID_TYPE concept, bool force){
    if(s2concept.count(s) == 0 || concept2s.count(concept) == 0){
        s2concept[s].push_back(concept);
        concept2s[concept].push_back(s);
    }else{
        for(auto c: s2concept[s]){
            if(c == concept){
                std::cerr << "Triple already exists!" << endl;
                return;
            }
        }
        s2concept[s].push_back(concept);
        concept2s[concept].push_back(s);
    }
}

void RDFTypeStore::remove(ID_TYPE s, ID_TYPE concept){
    std::cerr << "Not implemented yet!" << endl;
}

bool RDFTypeStore::contains(ID_TYPE s, ID_TYPE concept){
    if(s2concept.count(s) == 0){
        return false;
    }else{
        for(auto c: s2concept[s]){
            if(c == concept)
                return true;
        }
        return false;
    }
}

vector<JoinLine> RDFTypeStore::look_up_concept(ID_TYPE concept) {
    if(concept2s.count(concept) == 0){
        throw RDFTypeException("Research concept doesn't have registrations!");
    }else{
        vector<JoinLine> res;
        for(ID_TYPE id:concept2s[concept]){
            JoinLine tmp;
            tmp.add(id, INS);
            res.push_back(tmp);
        }
        return res;
    }
}

vector<JoinLine> RDFTypeStore::look_up_subject(ID_TYPE subject) {
    if(s2concept.count(subject) == 0){
        throw RDFTypeException("Research subject doesn't match any concept!");
    }else{
        vector<JoinLine> res;
        for(ID_TYPE id:s2concept[subject]){
            JoinLine tmp;
            tmp.add(id, CON);
            res.push_back(tmp);
        }
        return res;
    }
}

vector<JoinLine> RDFTypeStore::look_up_concept_with_reason(ID_TYPE concept_begin, ID_TYPE concept_end) {
    vector<JoinLine> results;
    for(auto iter = concept2s.begin(); iter != concept2s.end(); ++iter){
        if(iter->first >= concept_begin && iter->first < concept_end){
            for(ID_TYPE id: iter->second){
                JoinLine tmp;
                tmp.add(id, INS);
                results.push_back(tmp);
            }
        }
    }
    return results;
}

void RDFTypeStore::store_to_disk(const string &path) {
    string file_path;

    if(path[path.length() - 1] == '/'){
        file_path = path + "RDFTypeStore.st";
    }else{
        file_path = path + "/" + "RDFTypeStore.st";
    }

    ofstream out(file_path);

    for(auto line: concept2s){
        out << line.first;
        for(auto id: line.second){
            out << " " << id;
        }
        out << endl;
    }
}