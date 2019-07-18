// Created by felix on 7/13/2019.
#ifndef MERGE_SORT_FUNCIONES_H
#define MERGE_SORT_FUNCIONES_H

#include <vector>
#include <algorithm>

//----------------------------START-BOOK-INTRODUCTION-TO-ALGORITHMS-IMPLEMENTATION--------------------------------------
//------------------------------------------MERGE-SORT-ASCENDING--------------------------------------------------------
template <typename T>
void mergeAscending(T* a, int p, int q, int r){
    int n1 = q - p + 1; int n2 = r - q;
    T left[n1]; T right[n2];
    left[n1] = 123456789; right[n2] = 123456789;
    for (int i = 0; i < n1; ++i){
        left[i] = a[p + i];
    }
    for (int j = 0; j < n2; ++j){
        right[j] = a[q + j + 1];
    }
    int i = 0, j = 0;
    for (int k = p; k <= r; ++k) {
        if (left[i] < right[j]) {
            a[k] = left[i];
            i = i + 1;
        } else{
            a[k] = right[j];
            j = j + 1;
        }
    }
}

template <typename T>
void mergeSortAsc(T* a, int p, int r){
    int q = 0;
    if (p < r){
        q = (p + r)/2;
        mergeSortAsc(a, p, q);
        mergeSortAsc(a, q + 1, r);
        mergeAscending(a, p, q, r);
    }
}
//----------------------------------------------------------------------------------------------------------------------

//------------------------------------------MERGE-SORT-DESCENDING-------------------------------------------------------
template <typename T>
void mergeDescending(T* a, int p, int q, int r){
    int n1 = q - p + 1; int n2 = r - q;
    T left[n1]; T right[n2];
    left[n1] = -123456789.0; right[n2] = -123456789.0;
    for (int i = 0; i < n1; ++i){
        left[i] = a[p + i];
    }
    for (int j = 0; j < n2; ++j){
        right[j] = a[q + j + 1];
    }
    int i = 0, j = 0;
    for (int k = p; k <= r; ++k) {
        if (left[i] > right[j]) {
            a[k] = left[i];
            i = i + 1;
        } else{
            a[k] = right[j];
            j = j + 1;
        }
    }
}
template <typename T>
void mergeSortDesc(T* a, int p, int r){
    int q = 0;
    if (p < r){
        q = (p + r)/2;
        mergeSortDesc(a, p, q);
        mergeSortDesc(a, q + 1, r);
        mergeDescending(a, p, q, r);
    }
}
//----------------------------------------------------------------------------------------------------------------------
//------------------------------------------PRINT-ARRAY-----------------------------------------------------------------
template <typename T>
void print(T a, int size){
    for (int i = 0; i < size; ++i) {
        std::cout << a[i] << " ";
    } std::cout << std::endl;
}
//----------------------------------------------------------------------------------------------------------------------
//----------------------------END-BOOK-INTRODUCTION-TO-ALGORITHMS-IMPLEMENTATION----------------------------------------



//void MergeSort::Execute(std::vector<int> data) {
//    DoMerge(data.begin(),data.end());
//    //for (auto item: data){std::cout<<item<<"  ";}std::cout<<"\n";
//}
//template <class Iter>
//void MergeSort::DoMerge(Iter first, Iter last) {
//    Iter middle;
//    if(last-first>1){
//        middle=first+(last-first)/2;
//        DoMerge(first, middle);
//        DoMerge(middle, last);
//        std::inplace_merge(first,middle,last);
//    }
//}


#endif //MERGE_SORT_FUNCIONES_H
