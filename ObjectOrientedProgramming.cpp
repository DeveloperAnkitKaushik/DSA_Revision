#include <iostream>
 
using namespace std;
 
class Class1{
    public:
        int value_class1 = 12;
        void print(){
            cout << "Class1 Called"<<endl;
        }
};

class Class2: public Class1{
    public:
        int value_class2 = 23;
        void print(){
            cout << "Class2 Called " << value_class1 <<endl;
        }

};

class Class3: public Class2{
    public:
        void print(){
            cout << "Class3 Called " << value_class2 << value_class1 <<endl;
        }
};

int main(){
    Class2 ch;
    ch.print();
    Class3 sh;
    sh.print();
}