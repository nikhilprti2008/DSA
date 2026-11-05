#include<iostream>
#include<climits>
using namespace std;

int maxvalue( int num[], int size){
    

    int max = INT_MIN;

    for( int i=0; i<size; i++){
 
        if(num[i]>max)
        max = num[i];
    };

    //return the maximum value
     return max;

}

//printing the min value of  the array
int minvalue( int num[], int size){
    

    int min = INT_MAX;

    for( int i=0; i<size; i++){
 
        if(num[i]<min)
        min = num[i];
    };

    //return the maximum value
     return min;

}
int main(){

     int size;
  cin>>size;

  int num[10];
  for(int i=0; i<size; i++){
    cin>>num[i];
  }
  cout<<"printing the maximum number : "<<maxvalue(num,10)<<endl;

    cout<<"printing the minimum number : "<<minvalue(num,10);

}

//there is the othet method also look into the video in the maxi and mini   