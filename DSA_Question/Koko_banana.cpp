#include<iostream>
#include<vector>
using namespace std;

int max_element(vector<int> &v){
    int maxi = INT_MIN;

    int n = v.size();
    for(int i = 0; i<v.size(); i++){
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int total_hour(vector<int> &v. int h){
    int totalh = 0;
    int n = v.size();
    for(int i = 0; i<v.size(); i++){
        totalh += ceil((double)v[i] / (double)h);
    }
    return totalh;
}



int main(){

}