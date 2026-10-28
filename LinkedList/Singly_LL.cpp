#include<iostream>
#include<map>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data ){
        this -> data = data;
        this -> next = NULL;
    }
};

void inserAthead(node* &head, int d ){
    // new node create 
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}


void insertatposition(node* &tail, node* &head, int position, int d){
    //insert at start

    if(position == 1){
        inserAthead(head, d);
        return ;
    }
    node* temp = head; // temp  point the same node the head is in the strt(1) 
    int cnt = 1; // cnt represent the current position of the temp

    while(cnt < position-1){
        temp = temp ->  next; // it reach's the one pos less to pos to insert
        cnt++;
    }
    
    //insert at the last pos
    if(temp -> next == NULL){ // 
        insertattail(tail, d);
        return;
    }

    //creating a node for d
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next; //new node next node say connect ho raha ha 
    temp -> next = nodetoinsert; // previous node new node connect ho rha ha 
}

// void insertattail(node* &tail, int d){
//     node* temp = new node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// void inserAthead(node* &head, int d ){
//     // new node create 
//     node* temp = new node(d);
//     temp -> next = head;
//     head = temp;
// }

void print(node* &head){
        node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

void deletenode(int position, node* &head){
    if(position == 1){
        node* temp = head; // create  a new var for pos 1 to delwte the first node 
        head = head -> next; // pos 1 head is move to it's next head
        //memoery free start node
        temp -> next = NULL; // node 2 ka connection tod diya memory free karne ka liye
        delete temp;
    }
    else{
        //deleting any middle node and last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position ){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}
//lec 47 

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }
    map<node*,bool>visited;

    node* temp = head;

    while(temp != NULL){

        if(visited[temp] == true){ // "Have I already visited this node?"
            cout << "  Present at the  element :" << temp -> data << endl;  
            return true;
        }
 
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

node* floydetection(node* &head){

    if(head == NULL)
        return NULL;
    
    
    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if (slow == fast){
            cout << "intersection is present at : " << slow -> data << endl;
            return slow;
        }
    
    }
    return NULL;
}

// finding the starting not of cycle

node* getsetartingnode(node* head){

    if(head == NULL){
        return NULL;
    }

    node* intersection = floydetection(head);
    node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}
   
// remcoing the loop

void removeloop(node* head){
    if(head == NULL){
        return ;
    }

    node* startofloop = getsetartingnode(head);
    node* temp = startofloop;

    while(temp -> next != startofloop ){
        cout << temp -> data << endl;
        temp = temp -> next;

    }
    temp -> next = NULL;
}

int main(){
    //creating a new node
    node* node1 = new  node(10);
  //  cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
   node* head  = node1;
   node* tail = node1;
//    print(head);
    inserAthead(head, 12);
// //    print(head);
  inserAthead(head, 13);
// //    print(head);
    insertattail(tail, 12 );
//       print(head);
      insertattail(tail, 13 );
      print(head);

//        insertatposition(tail,head ,4 ,54);
//        print(head);


      tail -> next = head -> next; // tail ko head ->  next par point kar diya cycle for kar lega print karne par 

//        cout << "data" << head -> data << endl; // firat pos value 
//        cout << "data" << tail -> data << endl; // tell the value of the tail before the null pointer point(n-1) value

//        deletenode(1,head);
    //    print(head);

    /*
    if(detectloop(tail)){
        cout << "circular loop is present :" << endl;
    }
    else{
        cout << "loop is not present : ";
    }*/

    if(floydetection(head)){
        cout << "flodydetection is working " << endl;
    }
    else{
        cout << "floyd detection is not working  ";
    }

    //printing the starting data
    node* loop = getsetartingnode(head);
    cout << "Starting value of loop :" << loop -> data << endl;

    //remove the loop in circular linklist from the starting point 
    removeloop(head);
    print(head);



  
    return 0;
}