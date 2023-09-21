#include <iostream>
 
using namespace std;
 
int main(){
    int arr[] = {1,3,7,3,6,3,1};
    int num = 10;
    int temp;
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for(int k = j+1;k<size;k++){
                temp = arr[i]+arr[j]+arr[k];
                if(temp == num){
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}   