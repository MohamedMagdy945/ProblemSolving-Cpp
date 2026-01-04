#include<iostream>
using namespace std;

int partition(int arr[] , int low , int high)
{
    int pivot  = arr[low];
    int i = low - 1;
    int j = high + 1;    
    while (true)
    {
        do {
            i++;
        }
        while(arr[i] < pivot);
        do {
            j--;
        }while(arr[j] > pivot);

        if( i >= j)
            return j;
        swap(arr[i],arr[j]);
    }
}
void quickSort(int arr[] , int low , int high){
    if (low < high)
    {
        int pi = partition(arr , low , high);
        quickSort(arr , low , pi );
        quickSort(arr , pi + 1, high);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int arr[] = {3 , 17 , 2 ,8 ,9 , 15, 14 ,18 ,20 ,1 ,0 ,8 ,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0 , n  - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
