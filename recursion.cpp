#include <iostream>
 
using namespace std;
 
int root(int num,int root_num){
    if(root_num == 0){
        return 1;
    }

    int ans = num*root(num,root_num-1);
    return ans;
}

int main(){
    cout << root(2,100);
}