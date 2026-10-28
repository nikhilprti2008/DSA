#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~node(){
        cout << "memeory free from the node with the data : " << data << endl;
    }
};

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int  getlength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;

}
void insertathead(node* &tail,node* &head, int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
    node* temp = new node(d);
    temp -> next = head; // temp ka next to existing number ka head hoga to point kar do
    head -> prev = temp; // head ka previous temp ko point kar dooo
    head = temp; // new temp ko head bana do o
    }
    
}
void insertattail(node* &tail, node* &head, int d){
    if(head == NULL){
         node* temp = new node(d);
        head = temp;
        tail = temp;

    }
    else{
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

    }
    
}

void insertatposition(node* &tail, node* &head, int position, int d){
     if(position == 1){
        insertathead(tail,head, d);
        return ;
    }
    node* temp = head;
    int cnt = 1; // cnt represent the current position of the temp

    while(cnt < position-1){
        temp = temp ->  next; // it reach's the one pos less to pos to insert
        cnt++;
    }
    //insert at the last pos
    if(temp -> next == NULL){ // 
        insertattail(tail,head, d);
        return;
    }
    //creating a  node for d
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
}


void deletenode(int position, node* &head){
    if(position == 1){
        node* temp = head; // create  a new var for pos 1 to delwte the first node 
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    node* node1 = new node(10);// id the nodo1 not exist and the head = NULL / tail = Null then->
    node* head = node1;
    //if node* head = NULL;
    node* tail = node1;
   //node* tail = NULL;


    print(head);

    cout << getlength(head) << endl;

    insertathead(tail,head,12);
    insertathead(tail,head,13);
    insertathead(tail,head,14);
    print(head);

    insertattail(tail,head,15);
    insertattail(tail,head,16);
    print(head);

    insertatposition(tail, head, 1,23);
    insertatposition(tail, head, 5,50);
    insertatposition(tail, head, 9,60);
    print(head);
    cout <<"head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    deletenode(1,head);
    cout <<"head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;


    print(head);

}