#include<iostream>
using namespace std;

class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"Stack overflow";
            return;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is underflow"<<endl;
        }
        else{
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    int getTop(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    int  getSize(){
        return top+1;
    }

    void print(){
        cout<<"Top: "<<getTop()<<endl;
        cout<<"Stack: ";
        for(int i=0; i<getSize(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();
    cout<<"Size: "<<st.getSize();
    cout<<st.isEmpty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.print();
}