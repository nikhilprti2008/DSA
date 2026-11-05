#include<bits/stdc++.h>
using namespace std;

bool iseven(int n){

    //odd
    if(n & 1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n ;
    cin >> n;
    int ans = iseven(n);
    cout << "Is Even " << ans << endl;

    return 0;
}
