#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l + 1;

    for (int j = l + 1; j <= h; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[l], arr[i - 1]);
    return i - 1;
}
// int partition(int arr[], int l, int h)
// {
//     int pivot = arr[h];
//     int i = l - 1;
//     for (int j = l; j < h; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[h]);
//     return i + 1;
// }

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }
}
int main()
{
    int arr[] = {40, 10, 50, 30, 20};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    quickSort(arr, 0, n);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << ",";
    }
}
