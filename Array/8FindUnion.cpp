#include<iostream>
using namespace std;
void unionOfTwoArray(int arr1[], int arr2[], int n, int m){
    int i=0; 
    int j=0;
    int temp[10];
    for(int i=0; i<n; i++){
        for(int j=0; i<n; j++){
            if(arr1[i]== arr2[j]){
                temp=arr1[i];
            }
        }
    }
    cout<<temp;

}
int main(){
    int arr1[]={10,34,66,24,20};
    int arr2[]={76,24,55,42,34};
    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    unionOfTwoArray(arr1, arr2, n, m);

}