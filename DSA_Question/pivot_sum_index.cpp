#include<iostream>
using namespace std;

int pivot_element(int *arr, int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    int prefix = 0;
    int suffix = 0;
    for(int i = 0; i<size; i++){
        suffix = sum - prefix - arr[i];
        if(suffix == prefix){
            return arr[i];

           
        }
        prefix += arr[i];
    }
    return -1;
}

int main(){
    int arr[5] = {1,3,5,3,1};

    int size = 5;

    int ans = pivot_element(arr,size);
    cout << ans;
}