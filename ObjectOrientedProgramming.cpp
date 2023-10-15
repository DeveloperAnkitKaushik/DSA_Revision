#include <iostream>
 
using namespace std;
 
class Hero{ 
    public:
    string name="Ankit kaushik";
    int health = 100;
    int level = 1;
    void set(int h){
        health = h;
        cout << health;
    }
};

int main(){
    Hero *ankit = new Hero;
    (*ankit).set(12);
}