#include <iostream>
 
using namespace std;
 
int main(){
    int n = 2;
    
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            cout << "not prime";
            return 0;
        }else{
            cout << "prime";
            return 0;
        }
    }
}