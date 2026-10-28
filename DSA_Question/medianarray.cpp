#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findthemedian(vector<int>& arr){
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    
    if( n%2 == 1){
        return arr[n/2];
    }
    else{
        return (arr[n/2 - 1] + arr[n/2]) /2.0;
    }

}
int main(){
    vector<int> arr = {1,2,10,12,4,5};

    double  result = findthemedian(arr);

    cout << "median : " << result;
}