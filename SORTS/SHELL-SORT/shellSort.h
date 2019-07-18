// Created by felix on 7/16/2019.
#ifndef SHELL_SORT_SHELLSORT_H
#define SHELL_SORT_SHELLSORT_H

#include <iostream>
#include <vector>

template <typename T>
std::vector<T> shellSortAscending(std::vector<T> vec){
    for (int gap = vec.size() / 2  ; gap > 0; gap /= 2) {
        for (int j = gap; j < vec.size(); ++j) {
            for (int k = j; k >= gap; k -= gap) {
                if ((vec[k-gap] > vec[k])) {
                    std::swap(vec[k], vec[k - gap]);
                }
            }
        }
    }
    return vec;
}


template <typename T>
std::vector<T> shellSortDescending(std::vector<T> vec){
    for (int gap = vec.size() / 2  ; gap > 0; gap /= 2) {
        for (int j = gap; j < vec.size(); ++j) {
            for (int k = j; k >= gap  && (vec[k-gap] < vec[k]); k -= gap) {
                std::swap(vec[k], vec[k-gap]);
            }
        }
    }
    return vec;
}

//for(int gap=size/2;gap>0;gap/=2){
//  for(int i=gap;i<size;i++){
//      compare(elements,i,gap);
//  }
//}

template<typename T>
void printVector(std::vector<T> vec){
    for (auto && item : vec) {
        std::cout << item << " ";
    } std::cout << std::endl;
}


#endif //SHELL_SORT_SHELLSORT_H
