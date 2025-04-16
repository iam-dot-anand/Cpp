#include <iostream>
using namespace std;
class Animal{
    public:
    string name;
    int health;
};
int main(){
    Animal Dog;
    Dog.name="Tomy";
    Dog.health=50;
    cout<<Dog.name<<" have health is "<<Dog.health;
    return 0;
}