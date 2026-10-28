#include<iostream>
using namespace std;

//pointer and function
void print(int *p){
    cout << p << endl;
}

void update(int *p){
    *p = *p + 1;  // sirf pointer ka value store ke case ma changes possible ha 
    // p = p + 1; // address kae case ma pointer  address change nhi hoga 
    cout << *p << endl;

}

int sumof(int *arr ,int n){  // if we write like this arr[] or *arr both are same

    cout << "size of :" << sizeof(arr) << endl; // becoz 32 bits system or version

    int sum = 0;
    for(int i = 0; i<n ;i++){
        sum += arr[i];
    }
    return sum;
}



int main(){ /*
    int arr[10] = {114,52,63,45};

    cout << "Address of the array : " << arr <<endl;
  
    cout << "arr[0] address : " << &arr[0] + 1 << endl; 

    cout << "value 2nd index : " << *(arr+1) << endl;  // it increment the value of  index [0] 

    cout << "value of 3 index : " << *arr + 4 << endl;

    int i = 3;
    cout << "index bahar ha tho value : " << i[arr] << endl; //can also write the index outside of the arr | i[arr]

    int arr[4] = {1,2,3,5};
    cout << sizeof(arr) << endl;

    cout << "array size : " << sizeof(arr) << endl;
    cout << "address size : " << sizeof(*arr) << endl;
    cout << " size 2" << sizeof(&arr) << endl;

    int *ptr = &arr[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl; // it show 4 bcoz my system is 32 bit  */
/*

int a[20] = {1,2,3,4,5};
cout << " -> "  << a << endl;
cout << &a << endl;
cout << &a[0] << endl;

cout << "<------> " << endl;
int *p = &a[0];
cout << p << endl; // p ka box ka andar kya address store ha 
cout << *p  << endl;
cout << " - > "  << &p << endl;  // p ka jo box ha usaka address kya ha

*/
/*
int arr[10] = {1,2,2,4,5};
cout << "arr affress  : "  << arr <<endl;
//error
//arr = arr + 1; //becoz yaha symbol table ka andar arr[0] ka address map ho gaya ha you can't change the address

int *ptr = &arr[0];


//cout << "adrres of pointer "<< ptr << endl;

cout << ptr << endl;

ptr = ptr + 1; // ptr box ka andar jo address ha woo change na ki ptr ka address change  

cout << ptr << endl; 

*/


/*
// character type

char ch[6] = "abcde";
//atten
cout << ch << endl;

char *c = &ch[0];
//print the entire string
cout << c <<endl;

char temp = 'z';
char *p = &temp; 
cout << p  <<endl;  //print until the null char is found 


char cc[6] =  "abcde";  // ye temporary memeory ma store hoaa ha 
char *z =  "abcde"; // memory ko hi point kar diya ha RISKY 
cout << z << endl;

*/
/*
int value = 5;
int *ptr = &value;

//print(ptr);



cout << "before " << *ptr << endl;
update(ptr);

cout << "after " << *ptr << endl;*/

int arr[5] = {1,2,3,4,5};

cout << "sum of : " << sumof(arr,5) << endl; // if want to add the next digit after 3  the sumof(arr+3,3)


}