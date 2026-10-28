#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>





using namespace std;

/*int main(){

   // basic array before 
   int basic[5] = {1,2,3,4,5};
   
   array<int,4>a = {1,2,4,5};

   int size = a.size();
   cout <<"size of the array : " << size << endl;

   for (int i=0; i<a.size(); i++){
    cout << a[i] << endl;
   }

   cout <<"postion of 2nd : " <<a.at(2) <<endl;
   cout <<"empty or not : "<<a.empty() << endl;
   cout <<"last digit : " <<a.back() << endl;
   cout <<"fronth digit :" <<a.front() << endl;
}
/* vector (like a array par )
ye dynamic memeory allocation pa work karta ha jub bhi vector ka size full ho jaata ha tho ye apane size ko double kar leta ha 
ha previous vector ko dum kar deta ha  */

/*int main(){

vector<int> a(5,1); //size -> 5 and initialze -> with 1 


for(int i:a){
    cout << i << " " ;
}
cout  <<endl;



vector<int>v;
cout <<"capacity -> " <<v.capacity() << endl;

v.push_back(1);
cout<<"capacity -> " << v.capacity() << endl;

v.push_back(2);
cout<<"capacity -> " << v.capacity() << endl;

v.push_back(3);
cout<<"capacity -> " << v.capacity() << endl;

cout <<"size vector -> " <<v.size() << endl;

//pop_back remove the element from the vector 
v.pop_back();

cout << "after pop_back -> " ;

for ( int i:v){
    cout << i << " ";
} 
cout << endl;

}

//v.clear will remove the element but the size of the vector remain sam e

*/
/*
int main(){

     deque<int> d;

     d.push_back(1);
     d.push_front(2);

     for( int i:d){
        cout <<i << " ";
     }
     cout << endl;

     // same operation happened 

     cout <<"before erase -> ";
     for( int i:d){
        cout <<i << " ";
     }  
     cout<<endl;

     d.erase(d.begin(), d.begin()+1);

     cout <<"after erase -> ";
     for( int i:d){
        cout <<i << " ";
     }  
     cout<<endl;

//list same operation

*/
/*
 int main(){

    //first in last out(filo)

    stack<string> s;

    s.push("nikhil");
    s.push("prajapati");
    s.push("cse");

    cout <<"front element : " <<s.top() << endl;

    s.pop();
    cout <<"after first  element remove : " << s.top() << endl;
    
    cout << "is empty or not -> " <<s.empty() <<endl;
    
 }
    */

    //queue first in first out  code is same 

   /* int main(){

        priority_queue<int> maxi;

        priority_queue<int, vector<int>, greater<int> > mini;

        maxi.push(1);
        maxi.push(3);
        maxi.push(2);
        maxi.push(0);

        cout <<"size of -> " <<maxi.size() << endl;

        int n = maxi.size();

         for(int i=0; i<n; i++){
            cout<<maxi.top() << " " ;

            maxi.pop();
         }

         cout << endl;


        mini.push(1);
        mini.push(3);
        mini.push(2);
        mini.push(0);

         
        cout <<"size of -> " <<mini.size() << endl;

        int m = mini.size();

         for(int i=0; i<m; i++){
            cout<<mini.top() << " ";

            mini.pop();
         }

         cout << endl;

      
         cout << "is queue empty -> " << mini.empty() <<endl;
    }
*/
/*
int main(){

   set<int> s;
   s.insert(5);
   s.insert(2);
   s.insert(1);
   s.insert(0);
   s.insert(5);
   s.insert(0);
   s.insert(9);
   s.insert(2);

   for (auto i:s){
      cout << i <<" ";
   }
   cout << endl;

   s.erase(2);
   for (auto i:s){
      cout << i <<" ";
   }
   cout << endl;

   cout << "Is 5 present or not : " << s.count(-5) << endl; 

   
}
*/
/*
int main(){
   // map key value ka format  ma data store karta ha 

   // map ka  case ma complexcity 
 
   map<int,string> m;
   
   m[1] = "nikhil";
   m[2] = "prajapati";
   m[13] = "rahul";

   for(auto i:m){
      cout << i.first <<" " << i.second << endl;
   }
}
  */

int main(){

   vector<int> v; //binary seacrh ka liya increasing order ma hona chahiya 

   v.push_back(2);
   v.push_back(4);
   v.push_back(5);
   v.push_back(7);

   cout <<"finding 5 : "<<binary_search(v.begin(),v.end(),5) << endl;



}
  
    



    


     


