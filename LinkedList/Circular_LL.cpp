#include<iostream>
#include<map>
using namespace std;

class node{
public:
    int data;
    node* next;

    // Constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

void insertnode(node* &tail, int element, int d){

    // Empty list
    if(tail == NULL){

        node* newnode = new node(d);

        tail = newnode;
        newnode -> next = newnode;
    }

    else{

        // Non-empty list
        // Assuming element is present in the list

        node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        // Element found
        // curr represents the element wali node

        node* temp = new node(d);

        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(node* tail){

    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    node* temp = tail;

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    while(temp != tail);

    cout << endl;
}

void deletenode(node* &tail, int value){
    if(tail == NULL){
        cout << "list is empty chceck again : " << endl;
        return;
    }
    else{
        //non- empty
        // assuming the valueis present in the linkist 

        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if(tail == curr){ // for the first element 
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }
    map<node*,bool>visited;

    node* temp = head;

    while(temp != NULL){

        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}


int main(){

    //node* temp = new node(d);
    //node* node1 = new node(d);

    node* tail = NULL;
    //node* head = node1;
   

    // First node
//     insertnode(tail, 5, 3);
//     //print(tail);

//     // Insert 6 after 3
//     insertnode(tail, 3, 6);

//     // Insert 7 after 6
//      insertnode(tail, 6, 7);
//     insertnode(tail, 3, 7);
//     insertnode(tail, 7, 9);

//    // print(tail);
    
//     //deletenode(tail,3);
//     print(tail);
    if(detectloop(tail)){
        cout << "circular loop is present :" << endl;
    }
    else{
        cout << "loop is not present : ";
    }

    return 0;
}