#include "tester.h"

void integersBubble(void *elements, int first, int second) {
    int *array = (int*) elements;
    if (array[first] > array[second]) {
        swap(array[first], array[second]);
    }
}
void integersInsert(void *elements,int pos,int size){
    int *array = (int*) elements;
    for(int i=pos;i>0;i--){
	    if(array[i]<array[i-1])
        	swap(array[i], array[i-1]);
    }
}
void integersSelection(void *elements,int pos,int size){
    int *array = (int*) elements;
    int posmin=pos;
    for(int i=pos+1;i<size;i++){
	    if(array[i]<array[posmin])
		    posmin=i;
    }
    swap(array[posmin], array[pos]);

}

int partition(int *arr,int l, int h){
	int pivot=arr[h];
	int i=l-1;

	for(int j=l;j<h;j++){
		if(arr[j]<pivot){
			i++;
			int aux=arr[i];
			arr[i]=arr[j];
			arr[j]=aux;
		}
	}

	int aux=arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=aux;
	return i+1;
}
void integersQuick(void *elements,int l,int h){
   	 int *array = (int*) elements;
	if(l<h){
		int p=partition(array,l,h);
		integersQuick(elements,l,p-1);
		integersQuick(elements,p+1,h);
	}
}
void mSort(int *arr,int l,int q,int h){
	int n1=q-l+1;
	int n2=h-q;
	int arr1[n1],arr2[n2];

	for(int i=0;i<n1;i++)
		arr1[i]=arr[l+i];
	
	for(int i=0;i<n2;i++)
		arr2[i]=arr[q+i+1];

	merge(arr1,arr1+n1,arr2,arr2+n2,arr+l);
}
void integersMerge(void *elements,int l,int h){
   	 int *array = (int*) elements;
	if(l<h){
		int mid=(l+h)/2;
		integersMerge(elements,l,mid);
		integersMerge(elements,mid+1,h);
		mSort(array,l,mid,h);
	}
}
void integersShell(void *elements,int i,int gap){
   	 int *array = (int*) elements;
	 int tmp=array[i];
	 int j;
	 for(j=i;j>=gap && array[j-gap]>tmp;j-=gap)
		 array[j]=array[j-gap];
	 array[j]=tmp;
}
Sort* Tester::getSort(Algorithm sort, void *array, size_t size) {
    switch (sort) {
        case bubblesort: return new BubbleSort(array, size);
        case selectsort: return new SelectSort(array, size);
        case insertsort: return new InsertSort(array, size);
        case shellsort: return new ShellSort(array, size);
        case quicksort: return new QuickSort(array, size);
        case mergesort: return new MergeSort(array, size);
        default: throw invalid_argument("Not a valid sort");
    }
}

fptr Tester::getCompare(Algorithm sort) {
    switch (sort) {
        case bubblesort: return &integersBubble;
        case selectsort: return &integersSelection;
        case insertsort: return &integersInsert;
        case shellsort: return &integersShell;
        case quicksort: return &integersQuick;
        case mergesort: return &integersMerge;
        default: throw invalid_argument("Not a valid comparer");
    }
}

void Tester::integerSorts(int *array, size_t size) {
    Sort* sort;
    int temp[size];

    Algorithm algorithm[] = { bubblesort, selectsort, insertsort, shellsort, quicksort, mergesort };
    size_t numberOfAlgorithms = sizeof(algorithm) / sizeof(algorithm[0]);

    for (int i = 0; i < numberOfAlgorithms; i++) {
        copy(array, array + size, temp);
        sort = getSort(algorithm[i], temp, size);
        sort->execute(getCompare(algorithm[i]));
        ASSERT(is_sorted(temp, temp + size), "The " + sort->name() + " is not ordering all the elements");
    }
}
