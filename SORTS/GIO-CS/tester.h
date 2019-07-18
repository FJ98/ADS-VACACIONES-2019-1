#ifndef TESTER_H
#define TESTER_H

#include <stdexcept>
#include <iostream>
#include<algorithm>
#include <assert.h>
#include<vector>

#include "sort.h"
#include "bubble.h"
#include "select.h"
#include "insert.h"
#include "shell.h"
#include "quick.h"
#include "merge.h"

using namespace std;

#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif

enum Algorithm { bubblesort, selectsort, insertsort, shellsort, quicksort, mergesort };

typedef void (*fptr)(void*, int, int);

class Tester {
    private:
        static Sort* getSort(Algorithm, void *, size_t);
        static fptr getCompare(Algorithm sort);

    public:
        static void integerSorts(int *, size_t);
};

#endif
