#include<iostream>
using namespace std;

int main(){
   /* int nums = 10;
    int *ptr = &nums;
    cout << ptr << endl;
    cout << *ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;
    cout << "Address of the d : " << &d <<endl;
    cout << "Address of the pointer of the D : " << ptr2 <<endl;
    cout << "value  of the  d(assign to ptr2) : " << *ptr2 <<endl;*/

   /* int i = 5;
    int *ptr = &i;

    cout << &i << endl;
    cout << ptr << endl;

    int *ptr2 = 0;
    ptr2 = &i;
    cout << *ptr2 << endl;
    
    //int *ptr;  bad_practice ye kahii bhi point kar raha h koie bhi address ko 
    int *p = 0; 
    cout << *p << endl;

*/

int num = 5;
int a = num;
cout << "before a " << num <<  endl;
a++;
cout << "after a " << num  << endl; //yaha pa copy value of a , num ma store hogiee ha 

int *ptr = &num;
cout << "before " << num <<  endl;
(*ptr)++; //ya sidha address ko point kar value change kar de raha ha 
cout << "after " << num <<  endl;

//copy the pointer

int *q = ptr;
cout << ptr << "_" << q << endl;

cout << *ptr << "_" << *q << endl;

int m = 3;
int *n = &m;
cout << "address of the m " << &m << endl;
cout << "address of the n " << n << endl;

cout << "before : " << n << endl;
n = n + 1;
cout << "after : " << n << endl; //it move to to next address which is next to previous address

cout << "before value : " << *n << endl;
*n = *n +1;
cout << "after value : " << *n << endl; // increment the value 



}