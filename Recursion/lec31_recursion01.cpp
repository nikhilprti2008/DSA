#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0){
        return 1;
    }
  //  int smallerproblem = factorial(n-1);
   // int bigproblem = n * smallerproblem;

    return n * factorial(n-1);
}

int power(int n){

    //base case
    if(n == 0)
    return 1;

    return 2 * power(n-1);
}

void counting(int n){

    //base case
    if(n == 0){
        return 0;
    }
    counting(n-1);
    cout << n <<endl;

}


int main(){

    int n;
    cin >> n;

    //int ans = factorial(n);
   // int ans= power(n);
    //cout << ans;
    int ans = counting(n);
    cout << ans;
   //cout << ans << endl;
}