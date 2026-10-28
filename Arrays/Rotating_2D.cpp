#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    //transpose code
    for(int i = 0; i<row; i++){
        for(int j = i+1; j<col; j++){
            swap(arr[i][j], arr[j][i]);
           // cout << arr[i][j] << " ";
        }
    }

    // Reversing the Row 
   /* for(int i = 0; i<row; i++){
    reverse(arr[i], arr[i] + col);
    }
*/
    //reversing columns 
    for(int j = 0; j<row; j++){
        int top = 0;
        int bottom = row - 1;
        while(top < bottom){
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }

    //printing the 90degree moved array
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}