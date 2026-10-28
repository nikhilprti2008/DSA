#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int minindex = i;

        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }

        swap(arr[minindex], arr[i]);
    }
}

int main(){
    int arrsort[] = {5,2,3,4,7};
    int n = 5;

    selectionsort(arrsort, n);

    for(int i=0; i<n; i++){
        cout << arrsort[i] << " ";
    }

    return 0;
}