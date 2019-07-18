#include <iostream>
#include <vector>

//---------------------------------------USING-ARRAYS-WORKS-GOOD--------------------------------------------------------
//-------------------------------ORDER-ASCENDING-USING-ARRAYS-WORKS-GOOD------------------------------------------------
template <typename T>
int partitionAscending(T A, int low, int high){
    int pivot = low, i = low, j = high;
    while (i < j) {
        while (A[i] < A[pivot] && i < high) { ++i; }
        while (A[j] > A[pivot] && j > low) { --j; }
        if (i < j) { std::swap(A[i], A[j]); }
    }
    std::swap(A[pivot], A[j]);

    return j;
}
template <typename T>
T quickSortAscending(T A, int low, int high){
    if (low < high) {
        int j = partitionAscending(A, low, high);
        quickSortAscending(A, low, j);
        quickSortAscending(A, j + 1, high);
    }
    return A;
}
//----------------------------------------------------------------------------------------------------------------------

//-------------------------------ORDER-DESCENDING-USING-ARRAYS-WORKS-GOOD-----------------------------------------------
template <typename T>
int partitionDescending(T A, int low, int high){
    int pivot = low, i = low, j = high;
    while (i < j) {
        while (A[i] > A[pivot] && i < high) { ++i; }
        while (A[j] < A[pivot] && j > low) { --j; }
        if (i < j) { std::swap(A[i], A[j]); }
    }
    std::swap(A[pivot], A[j]);

    return j;
}
template <typename T>
T quickSortDescending(T A, int low, int high){
    if (low < high) {
        int j = partitionDescending(A, low, high);
        quickSortDescending(A, low, j);
        quickSortDescending(A, j + 1, high);
    }
    return A;
}
//----------------------------------------------------------------------------------------------------------------------

template <typename T>
void printArray(T arr, int size){
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    } std::cout << std::endl;
}

int main() {
    constexpr int size = 7;
    int arr1[size] = {3, 6, 4, 7, 2, 1, 5};
    std::cout << "Array Original: "; printArray(arr1, size);
    auto z1 = quickSortAscending(arr1, 0, 6);
    std::cout << "quickSortAscending: "; printArray(z1, size);
    auto z2 = quickSortDescending(arr1, 0, 6);
    std::cout << "quickSortDescending: "; printArray(z2, size);

    std::cout << std::endl;

    constexpr int size2 = 7;
    float arr2[size2] = {3.2, 6.4, 4.3, 7.4, 2.1, 1.6, 5.7};
    std::cout << "Array Original: "; printArray(arr2, size2);
    auto z3 = quickSortAscending(arr2, 0, 6);
    std::cout << "quickSortAscending: "; printArray(z3, size2);
    auto z4 = quickSortDescending(arr2, 0, 6);
    std::cout << "quickSortDescending: "; printArray(z4, size2);

    std::cout << std::endl;

    constexpr int size3 = 7;
    char arr3[size3] = {'g', 'd', 'e', 'c', 'b', 'f', 'a'};
    std::cout << "Array Original: "; printArray(arr3, size3);
    auto z5 = quickSortAscending(arr3, 0, 6);
    std::cout << "quickSortAscending: "; printArray(z5, size3);
    auto z6 = quickSortDescending(arr3, 0, 6);
    std::cout << "quickSortDescending: "; printArray(z6, size3);

    return 0;
}
//----------------------------------------------------------------------------------------------------------------------


////------------------------------------USING-ITERATORS-WORKS-VERY-GOOD---------------------------------------------------
////-------------------------------ORDER-ASCENDING-USING-ITERATORS-WORKS-GOOD---------------------------------------------
//template <typename Iterator>
//Iterator partitionAscending(Iterator low, Iterator high){
//    auto pivot = *low;
//    auto i = low, j = high;
//    while (i < j) {
//        do { ++i; } while (*i < pivot);
//        do { --j; } while (*j > pivot);
//        if (i < j) { std::swap(*i, *j); }
//    }
//    std::swap(*low, *j);
//    return j;
//}
//
//template <typename T, typename Iterator>
//std::vector<T> quickSortAscending(std::vector<T>& A, Iterator low, Iterator high){
//    Iterator j;
//    if (low < high) {
//        j = partitionAscending(low, high);
//        quickSortAscending(A, low, j);
//        quickSortAscending(A, j + 1, high);
//    }
//    return A;
//}
////----------------------------------------------------------------------------------------------------------------------
//
////-------------------------------ORDER-DESCENDING-USING-ITERATORS-WORKS-GOOD---------------------------------------------
//template <typename Iterator>
//Iterator partitionDescending(Iterator low, Iterator high){
//    auto pivot = *low;
//    auto i = low, j = high;
//    while (i < j) {
//        do { i++; } while (*i > pivot);
//        do { j--; } while (*j < pivot);
//        if (i < j) { std::swap(*i, *j); }
//    }
//    std::swap(*low, *j);
//    return j;
//}
//
//template <typename T, typename Iterator>
//std::vector<T> quickSortDescending(std::vector<T>& A, Iterator low, Iterator high){
//    Iterator j;
//    if (low < high) {
//        j = partitionDescending(low, high);
//        quickSortDescending(A, low, j);
//        quickSortDescending(A, j + 1, high);
//    }
//    return A;
//}
////----------------------------------------------------------------------------------------------------------------------
//
//template <typename T>
//void printVector(std::vector<T>& v){
//    for (auto && item : v) {
//        std::cout << item << " ";
//    } std::cout << std::endl;
//}
//
//int main() {
//    std::vector<int> v1 = {3, 6, 4, 7, 2, 1, 5};
//    std::cout << "Vector Original: "; printVector(v1);
//    auto z1 = quickSortAscending(v1, v1.begin(), v1.end());
//    std::cout << "quickSortAscending: "; printVector(z1);
//    auto z2 = quickSortDescending(v1, v1.begin(), v1.end());
//    std::cout << "quickSortDescending: "; printVector(z2);
//
//    std::cout << std::endl;
//
//    std::vector<char> v2 = {'g', 'd', 'e', 'c', 'b', 'f', 'a'};
//    std::cout << "Vector Original: "; printVector(v2);
//    auto z3 = quickSortAscending(v2, v2.begin(), v2.end());
//    std::cout << "quickSortAscending: "; printVector(z3);
//    auto z4 = quickSortDescending(v2, v2.begin(), v2.end());
//    std::cout << "quickSortDescending: "; printVector(z4);
//
//    return 0;
//}
////----------------------------------------------------------------------------------------------------------------------
