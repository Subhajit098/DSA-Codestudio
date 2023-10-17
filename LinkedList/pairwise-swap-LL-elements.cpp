#include<bits/stdc++.h>
using namespace std;


// REcursion approach

Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next) return head;
        
        
        Node* temp=head->next;
        head->next=pairWiseSwap(head->next->next);
        temp->next=head;
        return temp;
    }