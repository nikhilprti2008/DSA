#include <iostream>
using namespace std;

/*here we made a function to print the swapped array */

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 
/* here we made a function that swapp the existing array by +2 index 
 if the size of the array is less then */
void swaparr(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if ( i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
 
 



int main(){ 

    int arr2[6]={1, 2, 3, 4, 5, 6};
    int arr1[5]={1,2,3,4,5};

    swaparr(arr2, 6);
    printarray(arr2 , 6);


    cout<<endl;
    swaparr(arr1,5);
    printarray(arr1,5);

    


}