#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){

    for (int i=1; i<n; i++){

        int temp = arr[i];
        int j;

        for (j = i-1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}

int main(){
    int arrsort[] = {5,2,3,4,7};
    int n = 5;

    insertionsort(arrsort, n);

    for(int i=0; i<n; i++){
        cout << arrsort[i] << " ";
    }

    return 0;
}