#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int x){

    //Base Case
    if(inputStack.empty()){
        inputStack.push(x);
        return;
    }

    int nums = inputStack.top();
    inputStack.pop();

    solve(inputStack, x);

    inputStack.push(nums);

}


void InsertAtBotttom(stack<int>& inputStack, int x){
    solve(inputStack, x);
    
}

int main(){
    

    stack<int> nums;
    nums.push(2);
    nums.push(5);
    nums.push(6);
    nums.push(3);
    nums.push(7);
    nums.push(9);

    int size = nums.size();

    int n;
    cout <<"Enter The Element To Insert" << endl;
    cin >> n;

    InsertAtBotttom(nums,n );
    while(!nums.empty()){
        cout << nums.top() <<" ";
        nums.pop();
    }

    return 0;
}
