#include <iostream>
 
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int size1 = mid-s+1;
    int size2 = e-mid;

    int *first = new int[size1];
    int *second = new int[size2];

    int k = s;
    for(int i=0;i<size1;i++){
        first[i] = arr[k++];
    }

    int k = mid+1;
    for(int i=0;i<size2;i++){
        second[i] = arr[k++];
    }
}

void mergeSort(int arr[],int s,int e){
    if(s>e){
        return ;
    }

    int mid = s+(e-s)/2;

    //Left part
    mergeSort(s,mid);

    //right part
    mergeSort(mid,e);

    //merge
    merge(arr,s,e);
}
 
int main(){
    int arr[] = {12,23,45,56,13,1,45,12};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr,0,size-1);
}