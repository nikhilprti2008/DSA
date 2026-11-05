#include<iostream>
using namespace std;

print_array(int arr[], int size){

    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

reverse_array(int arr[], int size){

    int start=0;
    int end = size-1;

    while(start<end){

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
     
}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    reverse_array(arr,10);

    print_array(arr,10);
}