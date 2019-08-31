// COUNTING SORT
#include<bits/stdc++.h>

using namespace std;

void printArray(int*, int);

//-----------------------------OP-1--------------------------------------------------      
//      static void countingSort(int* array, int size){
//
//            int max = *std::max_element(array, array + size);
//            int min = *std::min_element(array, array + size);
//            int range = max - min + 1;
//
//            int counting[range], sort[size];
//            std::memset(counting, 0, sizeof(counting));
//
//            for (int i = 0; i < size; ++i)
//                ++counting[array[i] - min ];
//
//            for (int i = 1; i < range; ++i)
//                counting[i] += counting[i - 1 ];
//
//            for(int i = size - 1; i >= 0; --i) {
//                sort[counting[array[i] - min ] - 1 ] = array[i];
//                --counting[array[i] - min ];
//            }
//
//            for(int i = 0; i < size; ++i)
//                array[i] = sort[i];
//
//        }
//----------------------------------------------------------------------------------- 

//-----------------------------OP-2--------------------------------------------------
        static void countingSort(int* array, int size){

            int range = *std::max_element(array,array + size);
            int countingArray[range + 1];
            std::memset(countingArray, 0, sizeof(countingArray)); // Init array with 0's.

            for (int j = 0; j < size; ++j) {
                ++countingArray[ array[j] ];
            }

            for (int j = 1; j <= range; ++j) {
                countingArray[j] += countingArray[j - 1];
            }

            int sortedArray[size];

            for (int j = 0; j < size; ++j) {
                sortedArray[ countingArray[ array[j] ] - 1 ] = array[j];
                --countingArray[ array[j] ];
            }

            for (int j = 0; j < size; ++j){
                array[j] = sortedArray[j];
            }

        }
//------------------------------------------------------------------------------------

int main() {
  
  const int SIZE = 8;
  int *arr[SIZE] = {-5, -10, 0, -3, 8, 5, -1, 10}; 
  
  countSort (arr, SIZE); 
  printArray (arr, SIZE); 
  
  return 0;
}

void printArray(int* arr, int size) {  
    for (int i = 0; i < size(); i++)  
        std::cout << arr[i] << " ";  
    std::cout << "\n";  
} 
