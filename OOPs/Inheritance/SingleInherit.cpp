#include <iostream>
using namespace std;
class Parent{
    public:
    void parentMethod(){
        cout<<"Prent Class Function"<<endl;
    }
};
class Child : public Parent{
    public:
    void childMethod(){
        cout<<"Child class function"<<endl;
    }
};
int main(){
    Child ch;
    ch.childMethod();
    ch.parentMethod();
    return 0;
}