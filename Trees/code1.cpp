#include<bits/stdc++.h>
using namespace std;
class node {
    public : 
    int data ; 
    node * left , *right ; 
    node(int value ) { 
        data = value ; 
        left = right = NULL ; 
    }
};
int main(){
    int x ; 
    cin >> x ; 
    int first ; 
    int second ; 
    queue<node *> q ; 
    node * root = new node(x) ; 
    q.push(root); 
    while (!q.empty())
    {       
        node *temp = q.front() ; 
        q.pop() ; 
        cout << "enter the left child of : " << temp->data << endl; 
        cin >> first  ; // left child 
        if (first != -1 ) {
            temp->left = new node(first) ; 
            q.push(temp->left) ; 
        }
        cout << "enter the right child of : " << temp->data << endl; 
        cin >> second ; // right child  
         if (second != -1 ) {
            temp->right = new node(second) ; 
            q.push(temp->right) ; 
        }
    }
    
    cout << "" << endl ; 

    return 0;
}