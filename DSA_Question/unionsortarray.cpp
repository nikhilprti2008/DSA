// we are using the  set because the set only store the first's frequency of the number
//so if the arr1 and arr2 having same element then it only accept the  one element 

#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> findunion(int arr1[],  int arr2[], int n, int m){
    set<int> st;

    //insert the arr1 into the set st;
    for(int i = 0; i<n; i++){
        st.insert(arr1[i]);
    }
    //isnert the arr2 into the set st;
    for(int j = 0; j<m; j++){
        st.insert(arr2[j]);
    }

    //convert the set into the vector for the calling purpose
    vector<int> unionarr(st.begin(), st.end());
    return unionarr;

} 
int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int  arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    vector<int> result = findunion(arr1, arr2, n, m);
    
    for( int x : result){
        cout << x << " ";
    }

    return 0;
}


