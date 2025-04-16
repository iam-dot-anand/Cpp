#include <iostream>
using namespace std;
class Account{
    private:
    float balance;

    public:
    void deposit(float amount){
        if(balance >= 0){
            balance+=amount;
        }
    }
    void withdraw(float amount){
        if (amount > 0 && amount <= balance)
        {
            balance-=amount;
        }
        
    }
    void checkBalance(){
        if(balance>=0){
            cout<<"Your Avilable Balance is "<<balance<<endl;
        }
    }
};
int main(){
    Account acc;
    acc.deposit(1000);
    acc.checkBalance();
    acc.withdraw(100);
    acc.checkBalance();
    return 0;
} 
