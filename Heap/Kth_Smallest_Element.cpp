#include<bits/stdc++.h>
using namespace std;

// i is the starting Index and r is the Ending Index
int kthSmallestElement(int arr[], int i, int r, int k){
    priority_queue<int> q;
    
    // step 1:
    for(int i = 0; i < k; i++){
        q.push(arr[i]);
    }

    //step 2: 
    for(int i = k; i <= r; i++){
        if(arr[i] < q.top()){
            q.pop();
            q.push(arr[i]);
        }
    }

    int ans = q.top();
    return ans;

}
int main() {
    int arr[] = {7, 10, 4, 20, 15};

    int n = 5;
    int k = 4;

    cout << kthSmallestElement(arr, 0, n - 1, k);

    return 0;
}