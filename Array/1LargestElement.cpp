#include<iostream>
#include<limits.h>
using namespace std;
void Largest(int arr[], int n){
    int large= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Largest "<<large<<endl;
}
void Smallest(int arr[], int n){
    int small=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<"Smallest "<<small<<endl;
}
int main(){
    int arr[]={23,56,34,76,12};
    int n=5;
    Largest(arr,n);
    Smallest(arr,n);
    return 0;
}