#include<iostream>
using namespace std;
void twoSum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j]) == target){
                cout<<i<<","<<j;
                break;
            }
        }
    }
}

int main(){
    int arr[] = {4,17,8,3};
    int target = 9;
    int n=sizeof(arr)/sizeof(int);
    twoSum(arr,n,target);

}