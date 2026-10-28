//using Smaller Tolerance 

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double arr[] = {1.2,2.3,3.5,4.5,6.9,7.9,9.5};
    int n = 7;
    double target = 69;

    int low = 0;
    int high = n - 1;

    double tolerance = 1e-9;
    bool found = false;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(abs(arr[mid] - target) < tolerance){
            cout << "Element is found " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < target ){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    if(!found){
            cout << "Elememt not found lolllllll" << endl;
        }
  
    return 0;
}