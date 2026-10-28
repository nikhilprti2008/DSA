#include<iostream>
using namespace std;

void sortcolor(int arr[], int n){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i<cnt0; i++) arr[i]=0;
    for(int i=cnt0; i<cnt0+cnt1; i++) arr[i]=1;
    for(int i=cnt0+cnt1; i<n; i++) arr[i]=2;
}



int main(){
    int arr1[9] = {0,1,0,2,1,0,2,1,1};

    sortcolor(arr1, 9);

    for(int i=0; i<9; i++){
        cout << arr1[i] << " ";
    }
    

    return 0;
}