#include <iostream>
using namespace std;
class Animal{
    private:
    int age;
    public:
    string name;
    int ID;

    Animal(){
        cout<<"Default Ctor called"<<endl;
    }
    Animal(int _id, int _age, string _name){
        name=_name;
        age=_age;
        ID=_id;
        cout<<"Parameterised Ctor Called"<<endl;
    }
    ~Animal(){    //dtor
        cout<<"Dtor called"<<endl;
    }
};
int main(){
    Animal Dog;   //Default Ctor
    Animal Doges(001,10,"DOGESH");   //Parameterised Ctor
    Animal GermanDog=Doges;   //Copy Ctor
    cout<<GermanDog.name<<endl;
    // cout<<Dog.name;
}