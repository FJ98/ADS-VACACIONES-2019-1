// Created by felix on 7/13/2019.
#ifndef MERGE_SORT_FUNCIONES3_H
#define MERGE_SORT_FUNCIONES3_H

#include <vector>
#include <algorithm>

namespace myOwnImplementation {
    template<typename Iterator>
    void merge_sort(Iterator first, Iterator last){
        if (last - first > 1) {
            Iterator middle = first + (last - first) / 2;
            merge_sort(first, middle);
            merge_sort(middle, last);
            std::inplace_merge(first, middle, last);
        }
    }
//-----------------------------------START-MY-OWN-GENERIC-IMPLEMENTATION-NO-FUNCIONO-:(---------------------------------
//------------------------------------------MERGE-SORT-ASCENDING--------------------------------------------------------
    template <typename T>
    void mergeAscending(T array, int start, int middle, int end){
        int k=0; int i = start; int j = middle + 1; int tam = end - start + 1;
        T temp;
        while (i <= middle && j <= end) {
            if (std::includes(array.begin(), array.begin() + middle, array.begin() + middle + 1, array.end(), std::less<>())) {
                std::copy(array.begin(),array.begin() + middle, std::back_inserter(temp));
                i++; k++;
            }else{
                std::copy(array.begin() + middle + 1, array.end(), std::back_inserter(temp));
                j++; k++;
            }
        }
        while (i <= middle) {
            std::copy(array.begin(),array.begin() + middle, std::back_inserter(temp));
            i++; k++;
        }
        while (j <= end) {
            std::copy(array.begin() + middle + 1, array.end(), std::back_inserter(temp));
            j++; k++;
        }
        std::copy(temp.begin(), temp.end(), std::back_inserter(array));
        for (int l = 0; l < tam; ++l) {
            array[start + l] = temp[l];
        }
    }

    template <typename T>
    void mergeSortAsc(T array, int start, int end){
        int middle;
        if (start < end) {
            middle = start + (end - start) / 2;
            mergeSortAsc(array, start, middle);
            mergeSortAsc(array, middle + 1, end);
            mergeAscending(array, start, middle, end);
        }
    }
//----------------------------------------------------------------------------------------------------------------------

//------------------------------------------MERGE-SORT-DESCENDING-------------------------------------------------------
    template <typename T>
    void mergeDescending(T array, int start, int middle, int end){
        int k =0; int i = start; int j = middle + 1; int tam = end - start + 1;
        int* temp = new int[tam];
        while (i <= middle && j <= end){
            if (array[i] > array[j]) {
                temp[k] = array[i];
                i++; k++;
            }else{
                temp[k] = array[j];
                j++; k++;
            }
        }
        while (i <= middle) {
            temp[k] = array[i];
            i++; k++;
        }
        while (j <= end) {
            temp[k] = array[j];
            j++; k++;
        }
        for (int l = 0; l < tam; ++l) {
            array[start + l] = temp[l];
        }
    }
    template <typename T>
    void mergeSortDesc(T array, int start, int end){
        int middle = 0;
        if (start < end) {
            middle = (start + end) / 2;
            mergeSortDesc(array, start, middle);
            mergeSortDesc(array, middle + 1, end);
            mergeDescending(array, start, middle, end);
        }
    }
//----------------------------------------------------------------------------------------------------------------------
//------------------------------------------PRINT-ARRAY-----------------------------------------------------------------
    template <typename T>
    void print(T vec){
        for (auto && item : vec) {
            std::cout << item << " ";
        } std::cout << std::endl;
    }
//----------------------------------------------------------------------------------------------------------------------
//------------------------------------END-MY-OWN-GENERIC-IMPLEMENTATION---------------------------------------------------
}

#endif //MERGE_SORT_FUNCIONES3_H
