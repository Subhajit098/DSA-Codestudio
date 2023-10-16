#include<bits/stdc++.h>
using namespace std;


struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node * prev=NULL;
        struct Node * start=head;
        while(start!=NULL){
            struct Node * forward=start->next;
            start->next=prev;
            prev=start;
            start=forward;
        }
        return prev;
    }