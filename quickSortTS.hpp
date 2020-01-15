//
// Created by weiqin xu on 28/08/2019.
//

#ifndef TRIPLE_STORE_QUICKSORTTS_HPP
#define TRIPLE_STORE_QUICKSORTTS_HPP

#include "RankBaseElement.hpp"
#include <vector>

unsigned long partition(std::vector<RankBaseElement<3>> &v, unsigned long begin, unsigned long end)
{
    unsigned long m = begin + (end - begin)/2;
    RankBaseElement<3> pivot = v[m];
    v[m] = v[begin];
    v[begin] = pivot;
    unsigned long left = begin + 1;
    unsigned long right = end;
    while(true){
        while(left < right && v[right] >= pivot)
            right--;
        while(left < right && v[left] < pivot)
            left++;
        if(left == right)
            break;
        RankBaseElement<3> tmp = v[left];
        v[left] = v[right];
        v[right] = tmp;
    }
    if(v[left] >= pivot)
        return begin;
    v[begin] = v[left];
    v[left] = pivot;
    return left;
}



void quickSortTS(std::vector<RankBaseElement<3>> &v, unsigned long begin, unsigned long end)
{
    if(begin >= end)
        return;
    unsigned long boundary = partition(v, begin, end);
    if(boundary > begin){
        quickSortTS(v, begin, boundary - 1);
    }
    if(boundary < end){
        quickSortTS(v, boundary + 1, end);
    }

}


#endif //TRIPLE_STORE_QUICKSORTTS_HPP
