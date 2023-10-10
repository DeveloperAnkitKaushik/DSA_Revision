#include <iostream>
 
using namespace std;
 
int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[] = {12,34,56,12,3,2,67,90,9,2};
    int size = sizeof(arr)/sizeof(int);
    cout << size; 
    quickSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout << arr[i] << "  ";
    }
}