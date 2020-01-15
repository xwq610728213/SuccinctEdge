//
// Created by weiqin xu on 11/09/2019.
//

#ifndef TRIPLE_STORE_TRIPLEPATTERN_HPP
#define TRIPLE_STORE_TRIPLEPATTERN_HPP

#include <vector>
#include <string>

using namespace std;

class TriplePattern {
private:
    vector<string> triple_pattern;
public:
    TriplePattern();
    TriplePattern(vector<string> tp): triple_pattern(tp){};
    TriplePattern(string line);

    bool operator>(const TriplePattern& other){

    }
    vector<string> get_triple_pattern_vector(){
        return triple_pattern;
    }
};


#endif //TRIPLE_STORE_TRIPLEPATTERN_HPP
