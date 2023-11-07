#include <iostream>
 
using namespace std;
 
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int mid = size/2;
    int n = mid;
    cout << "{";
    for(int i=0;i<n;i++){
        cout << arr[i] << "," << arr[mid] << ",";
        mid++;
    }  
    cout << "}" << endl;
}