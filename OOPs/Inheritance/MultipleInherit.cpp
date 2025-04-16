#include<iostream>
using namespace std;
class Book{
    public:
    void readBook(){
        cout<<"Read Book"<<endl;
    }
};
class Copy{
    public:
    void writeCopy(){
        cout<<"Write on Copy"<<endl;
    }
};
class Human: public Book, public Copy{
    public:
    void doBoth(){
        cout<<"Human Being do both the things"<<endl;
    }
};
int main(){
    Human Hm;
    Hm.writeCopy();
    Hm.readBook();
    Hm.doBoth();
    return 0;
}