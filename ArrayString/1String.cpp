#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char ch[50];
    // cin>>ch;   Use only to take one word input (without space e.g- Anand)
    // cin.getline(ch,50);   Use only to take Multiple word input (with space e.g- Vishwa Anand from Varansi)
    cin.getline(ch,50);
    cout<<"output "<<ch<<endl;
    int length=0;
    int i=0;
    while(ch[i]!='\0'){
        length++;
        i++;
    }
    cout<<"Length of string "<<length<<endl;

//  We also use this 
    int StrLength= strlen(ch);
    cout<<StrLength;

}