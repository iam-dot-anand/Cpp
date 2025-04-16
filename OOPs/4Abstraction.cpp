#include<iostream>
using namespace std;
class Car{
    private:
    void checkAir(){
        cout<<"Checking Air"<<endl;
    }
    void checkBattery(){
        cout<<"Checking Battery"<<endl;
    }
    void checkDorLock(){
        cout<<"Checking dor lock"<<endl;
    }
    public:
    void start(){
        checkAir();
        checkBattery();
        checkDorLock();
    }
};
int main(){
    Car Tata;
    Tata.start();
    return 0;
}