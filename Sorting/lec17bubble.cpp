#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){

    for ( int i = 1; i<n; i++){

        for (int j=0; j < n-i; j++ ){
            if (arr[j] > arr[j+1]){
                swap( arr[j],  arr[j+1]);
            }
        }
    }
}

int main(){

   
     int arrsort[6] = {10,2,5,4,14,9};
     int arr1[10] = {12,45,3,6,15,84,12,1,5,3};
      int n =10;

     bubblesort(arr1,10);
     for ( int j=0; j<n; j++){
        cout << arr1[j] <<" ";
     }

     cout << endl;
     n=6 ;
     bubblesort(arrsort,6);
     for ( int i=0; i<n; i++){
        cout << arrsort[i] <<" " ;
     }
}