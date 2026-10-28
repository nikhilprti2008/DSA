#include<iostream>
using namespace std;

int update(int **p){
   // p = p + 1; // kuch nhi badala

  //  *p = *p +1;  // yes yaha changes hoga , pointer ka eka level andar 

  **p = **p +1; // yes change happened , pointer kae 2 level ander

} 
 
int main(){
    

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
/*
    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    cout << endl;


    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;

    cout << endl;

    cout << &ptr << endl;
    cout << &ptr2 << endl; 
*/
    cout << "before ->" << endl;
    cout << i << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
    update(ptr2);
    cout << "after ->" <<endl;
    cout << i << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

 
     
    return 0;
}