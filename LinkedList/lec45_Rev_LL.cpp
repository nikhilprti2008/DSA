#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
        this -> next = NULL;

    }
};

void insertathead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;

}

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void reverse(node* &head){
    node* prev = NULL;
    node* curr = head;

    while(curr != NULL){

        node* forward = curr -> next;

        curr -> next = prev;
        prev = curr;
        curr = forward;

    }
    head = prev;
}

int main(){
    // node* newnode = new node(d);

    node* head = NULL;

    insertathead(head, 10);
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    cout << "original list : ";
    print(head);

    cout << endl;
    cout << "reverse list : ";

    reverse(head);
    print(head);
}
