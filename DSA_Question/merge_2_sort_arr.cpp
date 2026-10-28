#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findunion(int arr1[], int arr2[], int n, int m){
    map<int ,int >freq;

    vector<int> Union;

    for(int i = 0; i<n; i++){
        freq[arr1[i]]++;
    }

    for(int i = 0; i<m; i++){
        freq[arr2[i]]++;
    }

    for(auto& it:freq){
        Union.push_back(it.first);
       
    }
    
    return Union;

}


int main(){
    int n= 5;
    int m = 6;

    int arr1[n] = {1,2,4,5,6};
    int arr2[m] = {1,2,4,6,7,8};

    vector<int> result = findunion(arr1, arr2, n, m);
    for(int x : result){
        cout << x << " ";
    }
}