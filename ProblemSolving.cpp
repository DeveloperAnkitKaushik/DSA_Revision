#include <iostream>
 
using namespace std;

void printAray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void swapAlternative(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
 
int main(){
    int size = 4;
    int arr[size] = {12,34,6,76,13};

    swapAlternative(arr,size);
    printAray(arr,size);
}