#include <iostream>
using namespace std;
class GrandParent{
    public:
    void GMethod(){
        cout<<"Grand_Parent Method"<<endl;
    }
};
class Parent: public GrandParent{
    public:
    void PMethod(){
        cout<<"Parent Method"<<endl;
    }
};
class Child : public Parent{
    public:
    void CMethod(){
        cout<<"Child Method"<<endl;
    }
};
int main(){
    Child ch;
    ch.CMethod();
    ch.GMethod();
    ch.PMethod();
    return 0;
}