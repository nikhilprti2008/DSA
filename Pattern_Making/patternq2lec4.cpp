#include<iostream>
using namespace std;
int main()
/* abc
bcd
cde*/

{
     int n;
     cin>>n;
     int i=1;
     char count='A';

     while(i<=n){
        int j=1;
        while(j<=n){
            count='A'+i+j-2;
            cout<<count<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
     }
}

// {/*123
//     456
//     789
//     */
//     int n;
//     cin>>n;
//     int i=1;
//     int count =0;// use as further it add the 1 in next command in count = count +1
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             count=count+1;
//             cout<<count<<" ";
         
//           j=j+1;


//         }
//        i=i+1;
//         cout << endl ;
//     }
// }
// 
// {/*a
//     bb
//     ccc
//     dddd*/
//     int n;
//     cin>>n;
//     int i = 1;
 
// char ch ;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
            
//             ch ='A'+i-1;
//             cout<<ch;
//             j=j+1;


//         }
//         i=i+1;
//         cout<<endl;
//     }

// }

// {/*
//     a
//     ab
//     bcd
//     cdef
//     defg
//     */
//         int n;
//     cin>>n;
//     int i = 1;
 
// char ch ;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
            
//             ch ='a'+i+j-2;
//             cout<<ch;
//             j=j+1;


//         }
//         i=i+1;
//         cout<<endl;
//     }

// }

