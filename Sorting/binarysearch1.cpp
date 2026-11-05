#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    while(start <= end){

        int mid = (start + end) / 2;
        /* may happened the interger overflow because of the add may pass  the range 
           so we can do that mid = start + (start - end )/2   */

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){

    int arr_even[10]={2,4,6,8,10,12,14,16,18,20};

    int arr_odd[5]={2,3,4,5,6};

    int index = binarysearch(arr_even, 10, 20);

    int index1 = binarysearch(arr_odd, 5, 2);

    cout << "Element found at index: " << index << endl;
    cout << "Element found at index: " << index1 << endl;

}