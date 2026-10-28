#include<iostream>
using namespace std;
// pass by reference
int update(int& n){
    n++;
}

//get sum
int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
//pass by value

//int update(int & n){
  //  n++;
//}
int main(){

    int i = 5;

    int &j = i;
/*
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    i++;
    cout << i << endl;

    cout << "before " << i << endl;
    update(i);
    cout << "after " << i << endl;
*/

int n;
cin >> n;
//varible size array
int *arr  = new int[n];

//getting size of sum;
for(int i = 0; i<n; i++){
    cin >> arr[i];
}

int ans = getsum(arr, n);

cout << "ans for the sum :" << ans << endl;

return 0;




}