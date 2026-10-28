#include<iostream>
using namespace std;

// change the input output according to the Question

int main(){
    int arr[3][2];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++ ){
            cin >> arr[i][j];
        }
    }
    cout << "originals Array :" << endl;
// printing the 2D array
 
   /* for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout  << " " << endl;
    }*/

    //printing the Row - major 
   /* for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++)
        cout << arr[i][j] << " ";
    }
    cout << endl;*/

    // printing the Column Major 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}