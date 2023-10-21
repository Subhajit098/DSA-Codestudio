#include<bits/stdc++.h>

using namespace std;

// class Node{
//     Node(int data){

//     }
// };

bool checkBST(Node * root,int min,int max){
        if(!root) return true;
        
        if(root->data>min && root->data<max){
            bool LEFT=checkBST(root->left,min,root->data);
            bool RIGHT=checkBST(root->right,root->data,max);
            return LEFT && RIGHT;
        }
        
          return false;
    }
    
    
    bool isBST(Node* root) 
    {
        // Your code here
        return checkBST(root,INT_MIN,INT_MAX);
    }