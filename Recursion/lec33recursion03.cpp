#include<iostream>
using namespace std;

//binary search using the recursion

void print(int arr[],int s,int e){
    for(int i=s; i<=e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarysearch(int arr[], int s, int e, int k){
    print(arr,s,e);

    //base case
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    cout << "mid element is : " <<arr[mid] <<endl;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binarysearch(arr, mid+1, e, k);
    }
    else{
        return binarysearch(arr, 0, mid-1, k);
    }
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int key = 5;

    cout << "is preasent O not : " << binarysearch(arr, 0, size-1, key) << endl;
    

    }
/*
//linear search using recursive function
void print(int arr[], int size ){
    cout << "size of the array is : " << size << endl;

    for(int i = 0; i<size; i++){
        cout << arr[i] << " "; 
    }
    cout<< endl;
    
}


bool linear_search(int arr[], int n, int key){
    print(arr , n);

    //base case
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    bool ans = linear_search(arr+1, n-1, key);
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 3;

    bool ans = linear_search(arr, size, key);
    if(ans){
        cout << "present";
    }
    else{
      cout << "false";
    }
}












/*

bool isSorted(int arr[], int n){

    //Base case
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        int ans = isSorted(arr + 1, n - 1);
        return ans;
    }


}

//getsum using the recursive function
int getsum(int arr[], int n){

    //Base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }

    int addrec = getsum(arr + 1, n - 1);
    int sum = arr[0] + addrec;
    return sum;

}



int main(){
    int arr[5] = {1,2,3,5,11};

/*
    int ans = isSorted(arr, 5);
    if(ans){
        cout << "is sorted array" << endl;
    }
    else{
        cout << "not a sorted array" << endl;
    }
  

 // sum of array
    int answer = getsum(arr, 5);
    cout << answer;
    

}
*/