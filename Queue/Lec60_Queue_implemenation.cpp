#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> q;
    q.push(11);
    cout <<"Front of Queue is: " << q.front() << endl;
    q.push(12);
    cout <<"Front of Queue is: " <<q.front() << endl;
    q.push(13);
    cout <<"Front of Queue is: " <<q.front() << endl;


    cout << "Size of the Queue: " << q.size() << endl;

    q.pop();
    q.pop();

    cout << "Size of the Queue: " << q.size() << endl;
    
    if(q.empty()){
        cout << "Queue is Empty: " << endl;
    }
    else{
        cout << "NOO it is Not:" << endl;
    }
    return 0;

}

