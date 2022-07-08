#include <bits/stdc++.h> 

void merge(long long *arr, long long begin, long long mid, long long end, long long& result) {
    long long leftArraySize = mid - begin + 1;
    long long rightArraySize = end - mid;
    
    long long *leftArray = new long long[leftArraySize];
    long long *rightArray = new long long[rightArraySize];
    
    long long k = 0;
    for(int i=0;i<leftArraySize;i++) {
        leftArray[i] = arr[begin+i]; 
    }
    
    for(int i=0;i<rightArraySize;i++) {
        rightArray[i] = arr[mid+1+i]; 
    }
    
    int index1 = 0, index2 = 0, arrPointer = begin;
    
    while(index1<leftArraySize && index2<rightArraySize) {
        if(leftArray[index1] <= rightArray[index2]) {
            arr[arrPointer++] = leftArray[index1++];
        }
        else {
            arr[arrPointer++] = rightArray[index2++];
            result+=(leftArraySize-index1);
        }
    }
    
    while(index1<leftArraySize) {
        arr[arrPointer++] = leftArray[index1++];
    }
    while(index2<rightArraySize) {
        arr[arrPointer++] = rightArray[index2++];
    }
}

void mergeSort(long long *arr, long long begin, long long end, long long& result) {
    if(begin < end) {
        int mid = begin + (end-begin)/2;
        
        mergeSort(arr, begin, mid, result);
        mergeSort(arr, mid+1, end, result);
        merge(arr, begin, mid, end, result);
    }
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long result = 0;
    
    mergeSort(arr, 0, n-1, result);
    
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
    
    return result;
}
