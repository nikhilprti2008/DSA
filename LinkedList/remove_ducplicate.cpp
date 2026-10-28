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

void inserAthead(node* &head, int d ){
    // new node create 
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head){
        node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

/*
 // from the sorted linklist
node* remove_ducplicate(node* &head){
    if(head == NULL){
        return NULL;
    }
    node* curr = head;

    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            node* next_next = curr -> next -> next;
            node* to_delete = curr -> next;
            delete(to_delete);
            curr -> next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }
}
    */
void remove_ducplicate(node* &head) {

    if(head == NULL) {
        return;
    }

    node* curr = head;

    while(curr != NULL) {

        if(curr->next != NULL && curr->data == curr->next->data) {

            node* temp = curr->next;

            curr->next = curr->next->next;

            delete temp;
        }
        else {
            curr = curr->next;
        }
    }
}
//  sorting is imp becoz we have give the node 11 look below
void sortList(node* &head) {
    for(node* i = head; i != NULL; i = i->next) {
        for(node* j = i->next; j != NULL; j = j->next) {
            if(i->data > j->data) {
                swap(i->data, j->data);
            }
        }
    }
}
int main(){
    node* node1 = new node(11);
    
    node* head = node1;
    inserAthead(head, 12);
    inserAthead(head, 11);
    inserAthead(head, 11);
    inserAthead(head, 13);
    inserAthead(head, 13);
    cout << "Before removing deuplication :" << endl;

    print(head);
    sortList(head);

    cout << "After removing deuplication :" << endl;
    remove_ducplicate(head);
    print(head);




}