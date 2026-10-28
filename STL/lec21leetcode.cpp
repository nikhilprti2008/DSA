#include<iostream>
#include<vector>
using namespace std;

// rotating the array by the k step 

/**/
void rotate(vector<int>& nums, int k){
    //int i = 0;
    vector<int> temp(nums.size());
    for(int j = 0; j<nums.size(); j++){
        temp[( k + j)% nums.size()] = nums[j];
    }
    nums = temp;
} 
 

int main(){
    
    vector<int> nums = {1,2,3,4,5};

    int k = 2;

    rotate(nums,k);

    for( int i = 0; i<nums.size(); i++){
        cout << nums[ i ] << " ";
    }

    cout << endl; 

    return 0;


}