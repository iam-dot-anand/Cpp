#include <iostream>
using namespace std;
class Teacher{
    private:   //private modifier
    string name;
    int age;
    public:    //public modifier
    void setName(string nam){
        name=nam;
    }
    void getName(){
        cout<<name;
    }
    //Protected mofifier => is used in inheritance.

};
int main(){
    Teacher Anil;
    Anil.setName("Anil Singh");
    Anil.getName();

    return 0;
}