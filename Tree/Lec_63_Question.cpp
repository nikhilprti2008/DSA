/*Interview Question for tree
1. height of the tree -- longest path between leaf node and root nodes
2. diameter of tree -- longest path between any 2 nodes.
3. check for balanace tree
4. Identical Tree
5. Sum tree  --- sum of left & right give's the Root value
*/

//NOT written the O(n) code for the Question 3 --------

#include<iostream>
using namespace std;

//Question 1 ---- Height of tree
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

int height(node* node){
//base case
if(node == NULL){
    return 0;
}

int left = height(node -> left);
int right = height(node -> right);
int ans = max(left, right) + 1;
return ans;
}

//Question 3.check for the Balance Tree

bool isbalanced(node* node){
    if(node == NULL){
        return true;
    }

    bool leftbalanced = isbalanced(node -> left);
    bool rightbalanced = isbalanced(node -> right);
    int diff = abs(height(node -> left) - height(node -> right)) <= 1;
    if(leftbalanced && rightbalanced && diff ){
        return true;
    }
    else{
        return false;
    }
}//another way to solve o(n) tc remember to write it's in the note 

//Question 4:- Identical Tree - 
bool isIdentical(node* r1, node* r2){
    if(r1 == NULL && r2 == NULL ){
        return true;
    }
    if(r1 == NULL && r2 != NULL){
        return false;
    }
    if(r1 != NULL && r2 == NULL)
    return false;

    bool leftIdentical = isIdentical(r1 -> left, r2 -> left);
    bool rightIdentical = isIdentical(r1 -> right, r2 -> right);

    bool value = r1 -> data == r2 -> data;
    if(leftIdentical && rightIdentical && value){
        return true;
    }
    else{
        return false;
    }
}

//Question 5 : Sum tree --
class solution{
    public:
    pair<bool,int> issumtreefast(node* root){
        //base case
        if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        if(root -> left == NULL && root -> right == NULL){
            pair<bool,int> p = make_pair(true, root -> data);
            return p;
        }
        pair<bool,int> leftAns = issumtreefast(root -> left);
        pair<bool,int> rightAns = issumtreefast(root -> right);

        bool isleftSumAns = leftAns.first;
        bool isrightSumAns = rightAns.first;
        
        int leftSum = leftAns.second; 
        int rightSum = rightAns.second;

        //Checking Root sum equal to sum of the left and right node
        bool currRoot = root -> data == leftSum + rightSum;

        pair<bool,int> ans;
        if(isleftSumAns && isrightSumAns && currRoot){
            ans.first = true;
            ans.second = root -> data + leftSum + rightSum;
        }
        else{
            ans.first = false;
        }
        return ans;
    }    
};

bool issumtree(node* root){
    solution s;
    return s.issumtreefast(root).first;
}

int main(){

    node *root = new node(44);
    // for question - 1: created the tree and them print the height of the tree
    root -> left = new node(9);
    root -> right = new node(13);
    root -> left -> left = new node(4);
    root -> left -> right = new node(5);
    root -> right -> left = new node(6);
    root -> right -> right = new node(7);
    
    cout << "Height of the tree : " << height(root) << endl;

    //Output :- Isbalanced tree
    cout << "IS Tree Is Balanced : " << isbalanced(root) << endl; 

    cout << "Is tree sum equal or not : " << issumtree(root);
    return 0;
    
/* //for Question 4 is tree identical or not 
    node* root1 = new node(1);
    root1 -> left = new node(2);
    root1 -> right = new node(3);
    root1 -> left -> left = new node(4);
    root1 -> left -> right = new node(5);
    root1 -> right -> left = new node(6);
    root1 -> right -> right = new node(7);

    node* root2 = new node(1);
    root2 -> left = new node(2);
    root2 -> right = new node(3);
    root2 -> left -> left = new node(4);
    root2 -> left -> right = new node(5);
    root2 -> right -> left = new node(6);
    root2 -> right -> right = new node(7);

    cout << "Is both the tree is identical : " << isIdentical(root1, root2);
    return 0;
*/


}
