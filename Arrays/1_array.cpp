#include<iostream>
using namespace std;
int main(){
//array iniltalization
    int array[10]={1,2,3,4};

    // array[10]={1,2,3}
    cout << array[2]<<endl;
    int n = 10;

    for(int i=0 ; i<n ; i++){
        cout << array[i]<< "  ";
    }
cout<<endl;

//Initalizing array with  the zero
 int first[10]={0};
 n = 10;

    for(int i=0 ; i<n ; i++){
        cout << first[i]<< "  ";
    }

cout<<endl;
    //what if we initalixe the arrayy with one{1}
    int second[10]={1};
     n = 10;

  int   set_value_second=1;

    for(int i=0 ; i<n ; i++){

       second[i]= set_value_second;// set the element value of the array is to one{1}
        cout << second[i] << "  ";
    }


}