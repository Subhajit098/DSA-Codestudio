#include<bits/stdc++.h>
using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

Node* reverse(Node* head){
	// base condtition

	Node* start=head;
	Node* prev=NULL;
	while(start!=NULL){
		Node* next=start->next;
		start->next=prev;
		prev=start;
		start=next;
	}
	return prev;
}


Node *reverseAlternateNodes(Node *head)
{
//    Write your code here.
	Node* prev=head;
	Node* to_be_reversed=prev->next;
	Node* start=prev->next;
	if(!head) return nullptr;
	if(head->next==NULL) return head;

	if(to_be_reversed->next==NULL) return head;

	while(head->next!=NULL && head->next->next!=NULL){
		head->next=head->next->next;
		head=head->next;
		to_be_reversed->next=head->next;
		if(to_be_reversed->next!=NULL) to_be_reversed=to_be_reversed->next;
	}

	Node* reversed=reverse(start);
	head->next=reversed;

	return prev;
}