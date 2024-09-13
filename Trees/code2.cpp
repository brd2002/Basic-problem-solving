#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
// createing tree
node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    else
    {
        node *temp = new node(x);
        cout << "Enter the left child of the x :: " << x << endl;
        temp->left = BinaryTree(); // left tree
        cout << "Enter the right child of the x :: " << x << endl;
        temp->right = BinaryTree(); // right tree
        return temp;
    }
}
// Three types of traversal -> 1.preorder , 2.inorder , 3.postorder
void preorder (node * root){
    if (root==NULL) return ; 
    cout << root->data << endl; 
    preorder(root->left) ; 
    preorder(root->right);
}
void inorder (node * root){
    if (root==NULL) return ; 
    inorder(root->left) ; 
    cout << root->data << endl; 
    inorder(root->right);
}
void postorder (node * root){
    if (root==NULL) return ; 
    postorder(root->left) ; 
    postorder(root->right);
    cout << root->data << endl; 
}
int main()
{
    node *root;
    root = BinaryTree();
    return 0;
}