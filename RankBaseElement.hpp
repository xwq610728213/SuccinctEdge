//
// Created by weiqin xu on 27/08/2019.
//

#ifndef TRIPLE_STORE_RANKBASEELEMENT_HPP
#define TRIPLE_STORE_RANKBASEELEMENT_HPP

#include <iostream>

using namespace std;

typedef long ID_TYPE;

template <int SIZE>
class RankBaseElement {
private:
    ID_TYPE ele[SIZE];
public:
    RankBaseElement(ID_TYPE e[]){
        for(int i = 0; i < SIZE; ++i){
            ele[i] = e[i];
        }
    }

    bool operator<(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] > other.ele[i]){
                return false;
            }
            if(ele[i] < other.ele[i]){
                return true;
            }
            if(i == SIZE - 1 && ele[i] == other.ele[i]){
                return false;
            }
        }
        return false;
    }

    bool operator>(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] < other.ele[i]){
                return false;
            }
            if(ele[i] > other.ele[i]){
                return true;
            }
            if(i == SIZE - 1 && ele[i] == other.ele[i]){
                return false;
            }
        }
        return false;
    }

    bool operator<=(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] > other.ele[i]){
                return false;
            }
            if(ele[i] < other.ele[i]){
                return true;
            }
            if(i == SIZE - 1 && ele[i] == other.ele[i]){
                return true;
            }
        }
        return true;
    }

    bool operator>=(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] < other.ele[i]){
                return false;
            }
            if(ele[i] > other.ele[i]){
                return true;
            }
            if(i == SIZE - 1 && ele[i] == other.ele[i]){
                return true;
            }
        }
        return true;
    }

    bool operator==(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] != other.ele[i]){
                return false;
            }
        }
        return true;
    }

    bool operator!=(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            if(ele[i] != other.ele[i]){
                return true;
            }
        }
        return false;
    }

    void operator=(const RankBaseElement& other){
        for(int i = 0; i < SIZE; ++i){
            ele[i] = other.ele[i];
        }
    }

    ID_TYPE& operator[](int i){
        if(i >= SIZE){
            cout << "Out of index\n";
            return ele[0];
        }else{
            return ele[i];
        }
    }
};


#endif //TRIPLE_STORE_RANKBASEELEMENT_HPP
