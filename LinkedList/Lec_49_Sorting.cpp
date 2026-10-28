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

// sorting  0's 1's 2's in the linklist 

node* sorting_012(node* head){
    node* temp = head;

    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;

    while(temp != NULL){

        if(temp -> data == 0){
            zero_count++;
        }
        else if(temp -> data == 1){
            one_count++;
        }
        else if(temp ->  data == 2){
            two_count++;
        }

        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        if(zero_count != 0 ){
            temp -> data = 0;
            zero_count--;
        }
        else if(one_count != 0){
            temp -> data = 1;
            one_count--;
        }
        else if(two_count != 0){
            temp -> data = 2;
            two_count--;
        }

        temp = temp -> next;
    }
    return head ;


}


int main(){
    node* node1 = new node(2);
    
    node* head = node1;
    inserAthead(head, 1);
    inserAthead(head, 1);
    inserAthead(head, 0);
    inserAthead(head, 0);
    inserAthead(head, 2);
    cout << endl;

    cout << "before soritng :";
    print(head);
                                

    cout << "after sorting : ";
    node* temp = sorting_012(head);
    print(temp);
   




}