#include <iostream>
using namespace std;
class Animal{
    public:
    void print(string name){
        cout<<"Animal name is "<<name<<endl;
    }
    void print(int age){
        cout<<"Animal age is "<<age<<endl;
    }
};
int main(){
    Animal Anim;
    Anim.print("Cow");
    Anim.print(10);
    return 0;
}