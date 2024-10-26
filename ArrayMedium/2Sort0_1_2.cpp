#include<iostream>
using namespace std;
int sort0_1_2(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int i = 0;

    while (i <= end) {
        if (arr[i] == 0) {
            swap(arr[i], arr[start]);
            i++;
            start++;
        } else if (arr[i] == 2) {
            swap(arr[i], arr[end]);
            end--;
        } else {
            i++;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 0, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort0_1_2(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }

    return 0;
}