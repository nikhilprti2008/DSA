#include<iostream>
#include<vector>
using namespace std;

//topic cover:  1 -> intger addition in the prefix 
 //             2 -> prefix substrings 




vector<int> prefixsum(vector<int>& arr){
    int n = arr.size();
    
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for(int i = 1; i<n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}
return prefix;

}

int main(){
    vector<int> arr = {2,4,6,8,10};
    vector<int> result = prefixsum(arr);

    for(int i = 0; i<result.size(); i++){
        cout << result[i] <<" ";
    }
}



