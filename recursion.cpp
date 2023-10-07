#include <iostream>
 
using namespace std;
 
void fibonacci(int f, int s,int end){
    int next = 0;
    int temp = 0;
    if(next == end){
        return ;
    }

    next++;
    cout << f << " " << s << " ";
    temp = s;
    s = s+f;
    f = temp;

    fibonacci(f,s,next);
}

int main(){
    int first=0,second=1,end=8;
    fibonacci(first,second,end);   
}