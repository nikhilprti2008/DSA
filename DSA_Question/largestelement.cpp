#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int sortarr(vector<int>& nums){
    sort(nums.begin(), nums.end());

    return nums[nums.size() - 1];
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};

    cout << "the  largest element in arr : " << sortarr(arr1) << endl;

    return 0;
}