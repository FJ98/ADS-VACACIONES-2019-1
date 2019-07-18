// Created by felix on 7/13/2019.
#ifndef MERGE_SORT_FUNCIONES2_H
#define MERGE_SORT_FUNCIONES2_H

#include <vector>
#include <algorithm>

namespace Ernesto {
//-----------------------------------START-BOOK-ERNESTO-IMPLEMENTATION--------------------------------------------------
//------------------------------------------MERGE-SORT-ASCENDING--------------------------------------------------------
    template <typename T>
    void mergeAscending(T array, int start, int middle, int end){
        int k = 0; int i = start; int j = middle + 1; int tam = end - start + 1;
        int* temp = new int[tam];
        while (i <= middle && j <= end) {
            if (array[i] < array[j]) {
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
    void mergeSortAsc(T array, int start, int end){
        int middle = 0;
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
    void print(T array, int size){
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
    }
//----------------------------------------------------------------------------------------------------------------------
//------------------------------------END-BOOK-ERNESTO-IMPLEMENTATION---------------------------------------------------
}
#endif //MERGE_SORT_FUNCIONES2_H
