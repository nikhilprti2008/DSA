
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void Inorder(node* root, vector<int> &in){
    if(root == NULL){
        return ;
    }
    Inorder(root -> left,in);
    in.push_back(root-> data);
    Inorder(root -> right, in);
}
