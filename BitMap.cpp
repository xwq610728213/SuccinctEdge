//
// Created by weiqin xu on 29/12/2019.
//

#include "BitMap.hpp"


BitMap::BitMap(bit_vector &v):v_rrr(v),v_rank(&v_rrr),v_select(&v_rrr) {}

unsigned long long BitMap::rank(unsigned long long index, int num) {
    return v_rank(index);
}

unsigned long long BitMap::select(unsigned long long i, int num) {
    return v_select(i);
}

void BitMap::store_to_disk(const string &path) {
    store_to_file(v_rrr, path);
}