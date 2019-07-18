#include <iostream>
#include <vector>

template<typename T>
void printVector(std::vector<T> vec){
    for (auto && item : vec) {
        std::cout << item << " ";
    } std::cout << std::endl;
}

template <typename T>
std::vector<T> selectionSortAscending(std::vector<T> v){
    for (int i = 0; i < v.size(); ++i) {
        int curMin = i;
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[curMin]) {
               curMin = j;
            }
        }
        std::swap(v[i], v[curMin]);
    }
    return v;
}

template <typename T>
std::vector<T> selectionSortDescending(std::vector<T> v){
    for (int i = 0; i < v.size(); ++i) {
        int curMin = i;
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] > v[curMin]) {
                curMin = j;
            }
        }
        std::swap(v[i], v[curMin]);
    }
    return v;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> v1 = {1,2,7,4,5,3,6};
    std::cout << "Vector Original: ";
    printVector(v1);
    std::vector<int> r1 = selectionSortAscending(v1);
    std::cout << "selectionSortAscending: ";
    printVector(r1);
    std::vector<int> r2 = selectionSortDescending(v1);
    std::cout << "selectionSortDescending: ";
    printVector(r2);

    return 0;
}




// USING ITERATORS
//template <typename Iterator>
//void selectionSortAscending(Iterator begin, Iterator end){
//    for (auto i = begin; i != end; ++i) {
//        auto curMin = i;
//        for (auto j = i + 1; j != end; ++j) {
//            if (*j < *curMin) {
//                curMin = j;
//            }
//        }
//        std::swap(*i, *curMin);
//    }
//}