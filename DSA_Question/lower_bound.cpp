#include<iostream>
using namespace std;

int lower_bound(int *arr,int target,int size){
    int str = 0;
    int end = size - 1;
    int ans = size;

    while(str <= end){

        int mid = str + (end - str)/2;

        if(arr[mid] >= target){ 
            ans = mid;
            end = mid - 1;
        }
        else{
            str = mid + 1;
        }
    }
    return ans;


}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    int size = 10;
    int ans = lower_bound(arr,target,10);

    cout << ans;
}