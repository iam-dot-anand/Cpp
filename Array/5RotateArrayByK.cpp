#include<iostream>
using namespace std;
void rotateByK(int arr[], int n, int k){
    int ans[10];
    int j;
    for(int i=0; i<n; i++){
        j=(i+k)%n;
        ans[j]=arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<",";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    rotateByK(arr, n, k);

}