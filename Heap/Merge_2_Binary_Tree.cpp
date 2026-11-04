#include<bits/stdc++.h>
using namespace std;


void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i+2;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap (arr[largest], arr[i]);
        heapify(arr, n , largest);

    }
}

    
vector<int> mergeheaps(vector<int> &a, vector<int> &b){
    vector<int> ans;

    //step 1 : merging two arr
    for(auto i : a){
        ans.push_back(i);
    }
    for(auto i : b){
        ans.push_back(i);
    }
    
    //step 2 : rearranging the value (heapify)
    int size = ans.size();
    for(int i = size/2 - 1; i >= 0; i--){
        heapify(ans, size, i);
    }
    return ans;

}

int main(){
    vector<int> arr1 = {10, 20, 30, 40};
    vector<int> arr2 = {15, 25, 35, 45}; 

    vector<int> ans = mergeheaps(arr1, arr2);

    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;

}