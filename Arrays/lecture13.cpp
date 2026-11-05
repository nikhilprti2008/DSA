#include<iostream>
using namespace std;


int lasttocc(int arr[] ,int n, int key){

    int s=0;
    int e = n - 1;
    int ans = -1; //basically yaha hum answer store kar rhe ha

    while(s<=e){
        int mid = (s + e) / 2;

        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
            
        }
        else if(arr[mid] < key){
            s = mid + 1;
        } 
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}

int firstocc(int arr[] ,int n, int key){

    int s=0;
    int e = n - 1;
    int ans = -1; //basically yaha hum answer store kar rhe ha

    while(s<=e){
        int mid = (s + e) / 2;

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
            /* agar key kiee value match hogayiee tho occurance tho find karna hi tho 
            first occurance means left part ma first tho mid ko hum left more kar degaeee even we have
            the value of mid
             */
        }
        else if(arr[mid] < key){
            s = mid + 1;
        } 
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}




int main(){
    int even[6]={2,4,6,8,10,12};
    int index = firstocc(even, 6, 6);
        
    int  index1 = lasttocc(even, 6, 12);


    cout<<"first occurance : "<<index << endl;
    cout<<"last  occurance : "<<index1;


}
