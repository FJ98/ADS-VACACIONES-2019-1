#include <iostream>
#include "Funciones.h"
#include "Funciones2.h"
#include "Funciones3.h"

int main() {
    std::cout << "-----------INTRO-TO-ALGORITHMS-BOOK---------------" << std::endl;
    const int szA = 8;
    int a1[szA] = {5, 2, 4, 7, 1, 3, 2, 6};
    std::cout << "Original: ";
    print(a1, szA);

    std::cout << "Ordenado Ascendente: ";
    mergeSortAsc(a1, 0, 7);
    print(a1, szA);

    std::cout << "Ordenado Descendente: ";
    mergeSortDesc(a1, 0, 7);
    print(a1, szA);

    std::cout << std::endl; //------------------------------------------------------------------------------------------

    const int szAf = 8;
    float af1[szAf] = {5.2, 2.5, 4.2, 7.3, 1.5, 3.4, 2.2, 6.7};
    std::cout << "Original: ";
    print(af1,szAf);

    std::cout << "Ordenado Ascendente: ";
    mergeSortAsc(af1, 0, 7);
    print(af1, szAf);

    std::cout << "Ordenado Descendente: ";
    mergeSortDesc(af1, 0, 7);
    print(af1, szAf);

    std::cout << std::endl;//-------------------------------------------------------------------------------------------

    std::cout << "------------------ERNESTO-BOOK---------------------" << std::endl;
    const int szB = 8;
    int b1[szB] = {5, 2, 4, 7, 1, 3, 2, 6};
    std::cout << "Original: ";
    print(b1, szB);

    std::cout << "Ordenado Ascendente: ";
    Ernesto::mergeSortAsc(b1, 0, 7);
    print(b1, szB);

    std::cout << "Ordenado Descendente: ";
    Ernesto::mergeSortDesc(b1, 0, 7);
    print(b1, szB);

    std::cout << std::endl;//-------------------------------------------------------------------------------------------

    std::cout << "------------------CON-EL-STL-ALGORITHM-----------------------" << std::endl;
    std::vector<int> d1 = {5, 2, 4, 7, 1, 3, 2, 6};
    std::cout << "Original: ";
    myOwnImplementation::print(d1);
    std::cout << "Ordenado Ascendente: ";
    myOwnImplementation::merge_sort(d1.begin(), d1.end());
    myOwnImplementation::print(d1);

    std::cout << "Ordenado Descendente: ";
    myOwnImplementation::merge_sort(d1.rbegin(), d1.rend());
    myOwnImplementation::print(d1);

    std::cout << std::endl;//-------------------------------------------------------------------------------------------

    std::cout << "------------------MY-OWN-GENERIC-IMPLEMENTATION---------------------" << std::endl;
    std::vector<int> c1 = {5, 2, 4, 7, 1, 3, 2, 6};
    std::cout << "Original: ";
    myOwnImplementation::print(c1);

    std::cout << "Ordenado Ascendente ( No pude :v ): ";
    myOwnImplementation::mergeSortAsc(c1, 0, 7);
    myOwnImplementation::print(c1);

    std::cout << "Ordenado Descendente ( No pude :v ): ";
    myOwnImplementation::mergeSortDesc(c1, 0, 7);
    myOwnImplementation::print(c1);





//    std::cout << "Ordenado Descendente: ";
//    myOwnImplementation::mergeSortDesc(b1, 0, 7);
//    print(c1, szC);

//    char ac1[8] = {'a', 'f', 'b', 'g', 'c', 'e', 'd', 'h'};
//    std::cout << "Original: ";
//    print(ac1);
//
//    std::cout << "Ordenado Ascendente: ";
//    mergeSortAsc(ac1, 0, 7);
//    print(ac1);
//
//    std::cout << "Ordenado Descendente: ";
//    mergeSortDesc(ac1, 0, 7);
//    print(ac1);

    return 0;
}





//void mergeAscending(int *a, int p, int q, int r){
//    int n1 = q - p + 1; int n2 = r - q;
//    int left[n1 + 1]; int right[n2 + 1];
//    left[n1] = 123456789; right[n2] = 123456789;
//    for (int i = 0; i < n1; ++i){
//        left[i] = a[p + i];
//    }
//    for (int j = 0; j < n2; ++j){
//        right[j] = a[q + j + 1];
//    }
//    int i = 0, j = 0;
//    for (int k = p; k <= r; ++k) {
//        if (left[i] <= right[j]) {
//            a[k] = left[i];
//            i = i + 1;
//        } else{
//            a[k] = right[j];
//            j = j + 1;
//        }
//    }
//}
//
//void mergeSort(int a[], int p, int r){
//    int q = 0;
//    if (p < r){
//        q = (p + r)/2;
//        mergeSort(a, p, q);
//        mergeSort(a, q + 1, r);
//        mergeAscending(a, p, q, r);
//    }
//}
//
//void print(int a[]){
//    for (int i = 0; i < 8; ++i) {
//        std::cout << a[i] << " ";
//    } std::cout << std::endl;
//}
//
//int main() {
//    int a1[8] = {5, 2, 4, 7, 1, 3, 2, 6};
//    std::cout << "Original: ";
//    print(a1);
//
//    std::cout << "Ordenado Ascendente: ";
//    mergeSort(a1, 0, 7);
//    print(a1);
//
//    std::cout << "Ordenado Descendente: ";
//    mergeSort(a1, 0, 7);
//    print(a1);
//
//    return 0;
//}




