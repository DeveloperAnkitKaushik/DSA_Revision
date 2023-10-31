#include <iostream>
#include <cmath>
 
using namespace std;
 
int increase(int &n,int where){
    int num = pow(10,where)+1;
    return n+num;
}

int main(){
    string str = "999";
    int n = str.length();
    int middle = n/2;

    int intStr = stoi(str);
    int actualNumber = increase(intStr,middle);
    str = to_string(actualNumber);
    string str2 = str;
    cout << "str: " <<str << endl;
    // cout << "middle: " <<middle << endl;
    if(n%2 == 0){
        int i = middle-1;
        int j = middle;
        // cout << "even" << endl;
        for(j;j<n;j++){
            str[j] = str[i];
            // cout << "i: " << i << endl;
            // cout << "j: " << j << endl;
            i-=1;
        }
    }
    else{
        int i = middle;
        int j = middle;
        // cout << "odd" << endl;
        for(j;j<n;j++){
            str[j] = str2[i];
            // cout << "i: " << i << endl;
            // cout << "j: " << j << endl;
            i-=1;
        }
    }
    cout << str;
}