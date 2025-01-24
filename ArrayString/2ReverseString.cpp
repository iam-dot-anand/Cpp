#include <iostream>
#include <string.h>
using namespace std;
void ReverseString(char ch[], int len){
    int i=0;
    int j=len-1;
    while(i != j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout<<"Output: "<<ch;
}
int main(){
    char ch[50];
    cin.getline(ch,50);
    cout<<"Input: "<<ch<<endl;
    int len=strlen(ch);
    cout<<"Length "<<len<<endl;
    ReverseString(ch,len);
    
    return 0;
}