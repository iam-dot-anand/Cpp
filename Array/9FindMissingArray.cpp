#include<iostream>
using namespace std;
void findMissing(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int nthSum=(n*(n+1))/2;
    int ans=nthSum-sum;
    cout<<"missing element is "<<ans;
}
int main(){
    int arr[]={1,5,0,3,6,2,7,9,4};
    int n= sizeof(arr)/sizeof(int);
    findMissing(arr, n);
    
}