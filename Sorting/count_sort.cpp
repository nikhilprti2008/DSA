#include<iostream>
#include<algorithm>
using namespace std;

void count(int arr[], int n){
    int maxval = arr[0];

    for(int i = 0; i<n; i++ ){
        if(arr[i] > maxval){
            maxval = arr[i];
        }
    }
    // create count array
    int count[maxval+1] = {0};

    //freq count 
    for(int i = 0; i<n; i++){
        count[arr[i]]++;
    }

    //putting back in the original array
    int index = 0;
    for(int i = 0; i<=maxval; i++){
        while(count[i] > 0){
            arr[index] = i;
            index++;
            count[i]--;

        }
    }
}

int main(){
    int arr[5] = {5,6,2,1,1};
    int n = 5;
    count(arr, n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
