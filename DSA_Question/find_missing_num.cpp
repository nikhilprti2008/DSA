#include<iostream>
#include<map>
using namespace std;

int findmissing(int *arr, int n, int m ){
    map<int,int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    for(int i=1; i<=m; i++){
        if(hash[i] == 0){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int m;

    cout <<"enter missing number: ";
    cin >>m;

   int ans = findmissing(arr,5,m);
   cout << "missing number: " << ans;

}