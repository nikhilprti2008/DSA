#include<iostream>
using namespace std;
int main()
// {
// /*   *
//     ** 
//    ***/
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         // space print karlo
//         int space = n-i;//command diya ki start kaha sa ho raha ha
//         while(space ){
//             cout<<" ";

//             space = space -1;
            
//         }
//         int j =1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;

//         }
//         i=i+1;
//         cout<<endl;

//     }
// }

// {
//     int n;
//     cin>>n;
//     int i=1;
    


//     while(i<=n){
//         int j=1;
//         while(j<=n){
          
//             cout<<"*";
          
            
          
            
//             j=j+1;
            
//         }
//         i=i+1;
//         cout<<endl;
//     }

// }

{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
         int space= n-i;
        while(space){
           cout<<" ";
           cout<<space;
           space = space -1;
        
        
        }
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
        
        
         
       
    }
}