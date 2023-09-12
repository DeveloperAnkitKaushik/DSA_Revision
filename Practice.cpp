#include <iostream>
 
using namespace std;
 
int main(){
  int num =2;
  int i = 2;
  bool tell;
  while(i < num){
    if(num%i == 0){
      tell = false;
    }else{
      tell = true;
    }
    i+=1;
  }
  cout << boolalpha << tell;
}