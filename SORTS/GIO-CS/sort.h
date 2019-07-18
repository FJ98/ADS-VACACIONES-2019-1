#ifndef SORT_H
#define SORT_H

#include <algorithm>
#include<string>

using namespace std;

class Sort {
    protected:
        void *elements;
        size_t size;
        
    public:
        Sort(void *elements, size_t size) : elements(elements), size(size) {}

        virtual void execute(void (*)(void*, int, int)) = 0;

        virtual string name() = 0;
};

#endif
