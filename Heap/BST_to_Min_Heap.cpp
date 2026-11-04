#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i ){
    int samllest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    //step 1 : Parent Should be smaller
    if(left < n && arr[left] < arr[samllest]){
        samllest = left;
    }
    if(right < n && arr[right] < arr[samllest]){
        samllest = right;
    }

    //step 2: left should be samller than right
    if(left < n && right < n && arr[left] > arr[right]){
        swap(arr[left], arr[right]);
    }

    //heapify the parent 
    if(samllest != i){
        swap(arr[i], arr[samllest]);
        heapify(arr, n, i);
    }
}

int main() {
    int arr[] = {50, 20, 10, 40, 30, 60};

    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    heapify(arr, n, 0);


    cout << "Min Heap: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}