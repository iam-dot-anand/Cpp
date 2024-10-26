#include<iostream>
using namespace std;
bool checkSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={50,40,30,0,10};
    int n=5;
    if(checkSort(arr, n)){
        cout<<"Sorted Array";
    }else{
        cout<<"Not Sorted";
    }

}