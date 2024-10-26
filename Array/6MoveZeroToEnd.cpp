#include<iostream>
using namespace std;
void MoveZero(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main(){
    int arr[]={1,0,1,1,0};
    int n=sizeof(arr)/sizeof(int);
    MoveZero(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<","<<endl;
    // }
}