#include<iostream>
using namespace std;
 // saydigit
void saydigit(int n, string arr[]){

    //base case
    if(n == 0){
        return;
    }

    int digit = n%10;
    n = n / 10;

    saydigit(n, arr);

    cout << arr[digit] << " ";
}
/*
//fibonaci series using recursion
int fib(int n){
    
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //rr
    return fib(n-1) + fib(n-2);
}
*/
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin >> n;

    saydigit(n,arr);
   //cout << fib(n);

   
}