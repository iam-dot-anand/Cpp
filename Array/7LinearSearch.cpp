#include<iostream>
using namespace std;
void linearSearch(int arr[], int n, int target){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==target){
            cout<<target<<" at index "<<i;
        }
    }
    if(i==n-1){
        cout<<"not found";
    }
}
int main(){
    int arr[]={12,46,33,77,35};
    int n=sizeof(arr)/sizeof(int);
    int target=33;
    linearSearch(arr, n, target);

}