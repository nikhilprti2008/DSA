#include<iostream>
#include<vector>
using namespace std;

//revesre the array with the vector 
/*
vector<int> reverse( vector<int> v){
    
    int s=0 ,e =v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> v){
        for (int i=0; i<v.size();  i++){
            cout << v[i] <<" ";
        }
    }

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> ans = reverse(v);

    print(ans);
    return 0;
}
*/

// merging the arr1 and arr2 into arr3
/*
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i = 0, j = 0;
    int k = 0;

    while( i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
             arr3[k++] = arr2[j++];           
        }
    }
    //agar arr1 k element bacha jaye tho arr 3 ma baki element ma copy kar denge
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    //agar arr2 k element bacha jaye tho arr 3 ma baki element ma copy kar denge

    while(j<m){
        arr3[k++] = arr2[j++];
    }
}
void print( int ans[], int n){
    for( int i = 0; i<n; i++){
        cout << ans[i] <<" ";
    }
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,3};

    int arr3[8] = {0};

    merge(arr1,5,arr2,3,arr3);

    print(arr3, 8);

    return 0;
}
*/


//moves zeroes
