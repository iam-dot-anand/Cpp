#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int n=st.size();
    cout<<"Size "<<st.top();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    st.pop();
    n=st.size();
    cout<<n;
    cout<<st.empty();
    st.top();
    
    return 0;
}