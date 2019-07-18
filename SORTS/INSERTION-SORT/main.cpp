#include <iostream>
#include <vector>

template<typename T>
auto insertionSortAscending(std::vector<T> vector){
    for (int j = 1; j < vector.size(); ++j) {
        int key = vector[j];
        int i = j - 1;
        while(i >= 0 && vector[i] > key){
            vector[i+1] = vector[i];
            i = i - 1;
        }
        vector[i+1] = key;
    }
    return vector;
}

template<typename T>
auto insertionSortDescending(std::vector<T> vector){
    for (int j = 1; j < vector.size(); ++j) {
        int key = vector[j];
        int i = j - 1;
        while(i >= 0 && vector[i] < key){
            vector[i+1] = vector[i];
            i = i - 1;
        }
        vector[i+1] = key;
    }
    return vector;
}

//template <typename T>
//std::vector<T> insertionSortGoodCode(std::vector<T> vec){
//    for (int i = 0  ; i < vec.size(); ++i) {
//        for (int k = i; (k > 0) && (vec[k-1] > vec[k]); --k) {
//            std::swap(vec[k], vec[k-1]);
//        }
//    }
//    return vec;
//}

// USING ITERATORS
//template<typename Iterator>
//void insertionSortAscending(Iterator begin, Iterator end){
//    for (auto i = begin  ; i != end; ++i) {
//        for (auto k = i; (k > begin) && (*(k-1) > *k); --k) {
//            std::swap(*(k-1), *k);
//        }
//    }
//}

template<typename T>
void print(std::vector<T> vector){
    for(auto && item: vector){
        std::cout << item << " ";
    } std::cout << std::endl;
}

int main() {
    std::vector<int> v1 = {5, 2, 4, 6, 1, 3};
    std::cout << "Vector Original: ";
    print(v1);

    auto z1 = insertionSortAscending(v1);
    std::cout << "Insertion Sort Ascending: ";
    print(z1);

    auto z2 = insertionSortDescending(v1);
    std::cout << "Insertion Sort Descending: ";
    print(z2);

    return 0;
}






//template <typename T>
//auto anotherForm(std::vector<T> vec){
//    for (int i = 0; i < vec.size(); ++i) {
//        int key = vec[i];
//        for (int k = i - 1; k >= 0; --k) {
//            if (vec[k] < key) {
//                std::swap(vec[k + 1], vec[k]);
//            }
//        }
//    }
//    return vec;
//}
