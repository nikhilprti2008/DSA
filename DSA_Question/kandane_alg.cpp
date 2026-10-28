#include<iostream>
#include<climits> // for INT_MIN;
using namespace std;

/*
// optimal solution 
int max_sub_sum(int *arr, int size){
    int sum = 0;
    int maxi = arr[0];
    for(int i = 0; i<size; i++){
        sum += arr[i];

        maxi = max(maxi,sum);

        if(sum < 0){
            sum = 0;
        }

    }
    return maxi;
}
*/


// brute force n^3 algo 
int max_sub_sum(int *arr, int size){
    int maxi =  INT_MIN;    
    for(int i = 0; i<size; i++){
        
        for(int j = i; j <size; j++){
            int sum = 0;
            for(int k = i; k<=j; k++){
                sum+=arr[k];
        }
       maxi = max(maxi, sum);
    }
  }
    return maxi;
   
    
}

// brute force n^2 algo
/*
int max_sub_sum(int *arr, int size){
    int sum = 0;
    int maxi = arr[0];
    for(int i = 0; i<size; i++){
        int sum = 0;
        for(int j = 1; j<size; j++){
            sum +=arr[j];
            maxi = max(maxi,sum);
            
            if(sum < 0){
                sum  = 0;
            }

        }
        
    }
    cout <<"maximum sum of the sub_array :" << maxi;
    return 0;
    
}

*/
int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;

    int ans = max_sub_sum(arr, size);
    cout << ans;
}