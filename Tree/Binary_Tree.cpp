#include<iostream>
using namespace std;


// Making of the binary tree
class node{
    public:
    int data;
    node *left;
    node *right;
    
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node * buildtree(node *root){
    cout << "Enter the data "<< endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1 ){
        return NULL;
    }

    cout << "Enter the data for inserting the in the left " << data << endl;
    root -> left = buildtree(root -> left);
    
    cout << "Enter the data for inserting the in the right " << data << endl;
    root -> right = buildtree(root -> right);

    return  root;

}

// inorder traversal
void inorder(node * root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}


//preoder traversal 
void preorder(node * root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}
void postorder(node * root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
    
}


int main(){-

    node * root = NULL;

    root = buildtree(root);
    cout << "INORDER TRAVERSAL ";
    inorder(root); 
    cout << endl;
    cout << "preorder TRAVERSAL ";
    preorder(root);
    cout << endl;
    cout << "postorder TRAVERSAL ";
    postorder(root);
    cout << endl;
    return 0;

}