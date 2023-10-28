#include <iostream>
 
using namespace std;
 
class Stack{
    public:
    int *arr;
    int size = 0;
    int top;

    Stack(int n){
        if(n <= 0){
            cout << "put valaue more than zero" << endl;;
        }else{
            size = n;
            arr = new int[size];
            top = -1;
        }
    }

    void push(int n){
        if(top == size-1){
            cout << "Stack Overflow" << endl;;
        }else{
            top++;
            arr[top] = n;
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack Empty" << endl;;
        }else{
            arr[top] = 0;
            top--;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    void peek(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;;
        }else{
            cout << arr[top] << endl;;
        }
    }
};

int main(){
    Stack s(5);
    s.push(12);
    s.push(45);
    s.push(23);
    s.push(78);
    s.push(90);

    s.peek();
    s.pop();
    s.peek();
    cout << boolalpha << s.isEmpty();
}