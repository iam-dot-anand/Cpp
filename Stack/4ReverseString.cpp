#include<iostream>
#include<Stack>
using namespace std;

int main(){
    string str="ANAND";
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        int ch=str[i];
        st.push(ch);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}