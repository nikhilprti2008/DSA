#include<iostream>
using namespace std;

// class Search{
//     public:
//     int row = arr.size();
//     int col = arr[0].size();
//     int start = 0;
//     int end = row*col - 1;
//     int element = arr[mid / col][mid % col];

// }

int main(){
    int arr[3][3];
    int row = 3;
    int col = 3; 
    cout << "Enter The Matrix :";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter Target :" ;
    cin >> target;
    
    int low = 0;
    int high = row * col - 1;
   

    bool found = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        int element = arr[mid / col][mid % col];

        if(element == target){
            found = true;
            break;
        }
        else if(element < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(found){
        cout << "Element  Found " << endl;
    }
    else{
        cout << "Element Not Found " << endl;
    }
    return 0;
}