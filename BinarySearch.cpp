#include <iostream>
 
using namespace std;

int startingOcc(int arr[], int size, int key){
    int starting = 0;
    int ending = size - 1;
    int mid = starting + (ending - starting)/2;
    int ans = -1;

    while(starting<=ending){

        if(arr[mid] == key){
            ans = mid;
            ending = mid -1;
        }

        else if(arr[mid] > key){
            ending = mid-1;
        }

        else if(arr[mid] < key){
            starting = mid+1;
        }

        mid = starting + (ending - starting)/2;
    }
    return ans;
}

int endingOcc(int arr[], int size, int key){
    int starting = 0;
    int ending = size - 1;
    int mid = starting + (ending - starting)/2;
    int ans = -1;

    while(starting<=ending){
        if(arr[mid] == key){
            ans = mid;
            starting = mid +1;
        }
        else if(arr[mid] > key){
            ending = mid-1;
        }
        else if(arr[mid] < key){
            starting = mid+1;
        }

        mid = starting + (ending - starting)/2;
    }
    return ans;
}
 
int main(){
    int arr[] = {1,2,3,3,3,5};
    int size = 5;
    int key = 3;

    cout << startingOcc(arr,size,key) << endl;
    cout << endingOcc(arr,size,key);    
}