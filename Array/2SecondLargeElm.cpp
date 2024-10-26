#include<iostream>
#include<limits.h>
using namespace std;
// void SecondLarge(int arr[], int n){
//     int firstLarge=INT_MIN;
//     int secondLarge=INT_MIN;
//     int i;
//     for( i=0; i<n; i++){
//         if(arr[i]>firstLarge){
//             firstLarge=arr[i];
//         }
//     }
//     for(i=0; i<n; i++){
//         if(arr[i]>secondLarge && arr[i] != firstLarge)
//         secondLarge=arr[i];
//     }
//     cout<<"Second Large "<<secondLarge<<endl;
//     cout<<"First Large "<<firstLarge;
// }
void SecondLarge(int arr[], int n){
    int firstLarge=INT_MIN;
    int secondLarge=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>firstLarge){
            firstLarge=arr[i];
        }
        if(arr[i]>secondLarge && arr[i] != firstLarge){
            secondLarge=arr[i];
        }
    }
    cout<<"Second Large "<<secondLarge;
    cout<<"First Large "<<firstLarge;
}
int main(){
    int arr[]={23,56,34,76,12};
    int n=5;
    SecondLarge(arr, n);

}