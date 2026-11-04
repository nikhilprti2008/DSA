#include<iostream>
#include<queue>
using namespace std;

/* Normal queue usage the front() to access the element ,whereas the priority Queue Usage the top() 

*/


int main(){
    // queue<int> q;

    // q.push(10);
    // q.push(30);
    // q.push(40);

    // cout <<q.front() << endl;
    
    // cout << q.back() <<endl;

    // cout << q.size() << endl;


    priority_queue<int> q;

    q.push(10);
    q.push(30);
    q.push(60);

    cout << q.top() << endl;
    q.pop();

    cout <<q.top() << endl;


    cout << "printing the min heap " << endl;
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(30);
    pq.push(40);
    pq.push(10);
    pq.push(5);

    cout << pq.top()<< endl;

    pq.pop();
    
}
