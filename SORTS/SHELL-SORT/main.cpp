#include <iostream>
#include <vector>
#include "shellSort.h"

int main() {
    std::vector<int> v1 = {3,2,7,4,5,1,6};
    std::cout << "Vector Original: ";
    printVector(v1);
    std::vector<int> r1 = shellSortAscending(v1);
    std::cout << "shellSortAscending: ";
    printVector(r1);
    std::vector<int> r2 = shellSortDescending(v1);
    std::cout << "shellSortDescending: ";
    printVector(r2);

    std::cout << std::endl;

    std::vector<char> v2 = {'a','f','c','b','g','e','d'};
    std::cout << "Vector Original: ";
    printVector(v2);
    std::vector<char> r3 = shellSortAscending(v2);
    std::cout << "shellSortAscending: ";
    printVector(r3);
    std::vector<char> r4 = shellSortDescending(v2);
    std::cout << "shellSortDescending: ";
    printVector(r4);

    std::cout << std::endl;

    std::vector<std::string> v3 = {"aba","ala","ada","iva","help","mar","sol"};
    std::cout << "Vector Original: ";
    printVector(v3);
    std::vector<std::string> r5 = shellSortAscending(v3);
    std::cout << "shellSortAscending: ";
    printVector(r5);
    std::vector<std::string> r6 = shellSortDescending(v3);
    std::cout << "shellSortDescending: ";
    printVector(r6);

    return 0;
}
