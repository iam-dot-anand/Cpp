#include <iostream>
using namespace std;
class Animal{
    public:
    void Sound(){
        cout<<"Animal have some sound ";
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"Bark"<<endl;
    }
};
class Cat:public Animal{
    public:
    void meow(){
        cout<<"Meow"<<endl;
    }
};
int main(){
    Dog D;
    D.Sound();
    D.bark();
    Cat C;
    C.Sound();
    C.meow();
    return 0;
}