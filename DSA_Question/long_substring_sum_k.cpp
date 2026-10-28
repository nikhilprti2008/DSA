#include<iostream>
#include<algorithm>
using namespace std;
// longest subarray sum <= k
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxlen = 0;
    while(r<n){
        sum = sum + arr[r];
        while(sum > k){
            sum = sum - arr[l];
            l = l + 1;
        }
        if(sum <= k ){
            maxlen = max(maxlen, r-l+1 );
        }
        r++;
    }
    cout << maxlen;
    return 0;
}