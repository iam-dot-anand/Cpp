#include <iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top=-1;
    
    Stack(int n){
        cout<<"Parameterised Constructor called:"<< n<<endl;
        arr= new int[n];
        this->size=n;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
        
    }
    void pop(){
       if(top==-1){
           cout<<"stack underflow"<<endl;
       }
       else{
            top--;
       }
        
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void getTop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Get Top->"<<arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    void print(){
        cout<<"top:"<<arr[top]<<" at index "<<top<<endl;
        for(int i=0; i<getSize(); i++){
            cout<<"->"<<arr[i];
        }
        cout<<endl;
    }
};

int main() {
    Stack st(5);
    st.push(10);
    st.print();
    st.push(20);
    st.push(30);
    
    
    st.print();
    st.pop();
    st.print();
    
    st.getTop();
    cout<<st.isEmpty();

    return 0;
}