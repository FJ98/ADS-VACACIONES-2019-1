#include <iostream>
#include <vector>

template<typename T>
void printVector(std::vector<T> vec){ for (auto && item : vec) { std::cout << item << " "; } std::cout << std::endl; }

//-------------------------------------------------OPCION-1-------------------------------------------------------------
template <typename T>
std::vector<T> bubbleSortAscending(std::vector<T> v){
    for (int i = 0; i < v.size() - 1; ++i) {
        for (int j = 0; j < v.size() - 1; ++j) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
    return v;
}

template <typename T>
std::vector<T> bubbleSortDescending(std::vector<T> v){
    for (int i = 0; i < v.size() - 1; ++i) {
        for (int j = 0; j < v.size() - 1; ++j) {
            if (v[j] < v[j + 1]) {
                std::swap(v[j],v[j + 1]);
            }
        }
    }
    return v;
}

int main() {
    std::vector<int> v1 = {3,2,7,4,5,1,6};
    std::cout << "Vector Original: ";
    printVector(v1);
    std::vector<int> z1 = bubbleSortAscending(v1);
    std::cout << "bubbleSortAscending: ";
    printVector(z1);
    std::vector<int> z2 = bubbleSortDescending(v1);
    std::cout << "bubbleSortDescending: ";
    printVector(z2);

    std::cout << std::endl;

    std::vector<char> v2 = {'a','f','c','b','g','e','d'};
    std::cout << "Vector Original: ";
    printVector(v2);
    std::vector<char> r3 = bubbleSortAscending(v2);
    std::cout << "bubbleSortAscending: ";
    printVector(r3);
    std::vector<char> r4 = bubbleSortDescending(v2);
    std::cout << "bubbleSortDescending: ";
    printVector(r4);

    std::cout << std::endl;

    std::vector<std::string> v3 = {"aba","ala","ada","iva","help","mar","sol"};
    std::cout << "Vector Original: ";
    printVector(v3);
    std::vector<std::string> r5 = bubbleSortAscending(v3);
    std::cout << "bubbleSortAscending: ";
    printVector(r5);
    std::vector<std::string> r6 = bubbleSortDescending(v3);
    std::cout << "bubbleSortDescending: ";
    printVector(r6);

    return 0;
}
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------OTHER-ALTERNATIVES------------------------------------------------------------

// ANOTHER FORM
//template <typename T>
//std::vector<T> bubbleSortAscending(std::vector<T> v){
//    for (int i = 0; i < v.size()-1; ++i) {
//        for (int j = 1; j < v.size(); ++j) {
//            if (v[j-1] > v[j]) {
//                std::swap(v[j-1],v[j]);
//            }
//        }
//    }
//    return v;
//}
//ALTERNATIVE USING ITERATORS
//template <typename T>
//std::vector<T> bubbleSortAscending(std::vector<T> v){
//    for (auto item: v) {
//        for (auto i = v.begin(); i != v.end() - 1; i++) {
//            for (auto j = i + 1; j != v.end() && *(j - 1) > *j; j++) {
//                std::swap(*(j - 1), *j);
//            }
//        }
//    }
//    return v;
//}
//
// DON'T SEEMS BUBBLE SORT
/*template <typename T>
std::vector<T> bubbleSortAscending(std::vector<T> v){
    for (int i = 0; i < v.size() - 1; ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] > v[j]) {
                std::swap(v[i],v[j]);
            }
        }
    }
    return v;
}*/
//
//ALTERNATIVE USING ITERATORS, DON'T SEEMS BUBBLE SORT
//template <typename T>
//std::vector<T> bubbleSortAscending(std::vector<T> v){
//    for (auto i = v.begin(); i != v.end() - 1; i++) {
//        for (auto j = i + 1; j != v.end(); j++) {
//            if (*i > *j) {
//                std::swap(*i, *j);
//            }
//        }
//    }
//    return v;
//}
//

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------OPCION-2-DON'T-SEEMS-BUBBLE-SORT----------------------------------------------
//template <typename Iterator>
//void bubbleSortAscending(Iterator begin, Iterator end){
//    for (auto i = begin; i != end - 1; i++) {
//        for (auto j = i + 1; j != end; ++j) {
//            if (*i > *j) {
//                std::swap(*i, *j);
//            }
//        }
//    }
//}
//
//template <typename Iterator>
//void bubbleSortDescending(Iterator begin, Iterator end){
//    for (auto i = begin; i != end - 1; i++) {
//        for (auto j = i + 1; j != end; ++j) {
//            if (*i < *j) {
//                std::swap(*i, *j);
//            }
//        }
//    }
//}
//
//int main() {
//    std::vector<int> v1 = {3,2,7,4,5,1,6};
//    std::cout << "Vector Original: ";
//    printVector(v1);
//    bubbleSortAscending(v1.begin(), v1.end());
//    std::cout << "bubbleSortAscending: ";
//    printVector(v1);
//    std::vector<int> v2 = {3,2,7,4,5,1,6};
//    bubbleSortDescending(v2.begin(), v2.end());
//    std::cout << "bubbleSortDescending: ";
//    printVector(v2);
//
//    std::cout<<std::endl;
//
//    std::vector<char> v3 = {'s','m','h','p','a','x','e'};
//    std::cout << "Vector Original: ";
//    printVector(v3);
//    bubbleSortAscending(v3.begin(), v3.end());
//    std::cout << "bubbleSortAscending: ";
//    printVector(v3);
//    std::vector<char> v4 = {'s','m','h','p','a','x','e'};
//    bubbleSortDescending(v4.begin(), v4.end());
//    std::cout << "bubbleSortDescending: ";
//    printVector(v4);
//
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------
