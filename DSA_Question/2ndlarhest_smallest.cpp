#include<iostream>
#include<algorithm>
using namespace std;

int smallestlargest(int arr[], int n){

    if(n == 0 || n == 1){
        cout << -1 << " " << -1 << endl;
    }

    sort(arr , arr+n);

    cout << "second smallest : " << arr[1] << endl;
    cout << "second largest : " << arr[n-2] << endl;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    

    smallestlargest(arr,10);
    
}