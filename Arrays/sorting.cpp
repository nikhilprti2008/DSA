#include<iostream>
using namespace std;


void printarray( int  arr[], int n)
{
    for( int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}       

void sortarray( int arr[], int n){


    int left=0, right = n-1;

    while(left<right){

        while(arr[left]==0 && left<right){
            left++;
        }

        while(arr[right]==1 && left<right){
            right--;

        }

        //agar yaha pahocha gaya matala 
       // arr[left]==1 && arr[right]==0

       if(left<right){

        swap(arr[left], arr[right]);
        left++;
        right--;
       }
    }

}

int main(){

    int arr1[5]={0,1,0,1,1};
    int arr[8] = {1,0,0,0,0,1,1,0 };
    sortarray(arr, 8);
    printarray(arr,8);
    cout<<endl;
    sortarray(arr1,5);
    printarray(arr1,5);


}