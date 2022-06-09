#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

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

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    // base case-
    if(firstHead == NULL || secondHead == NULL){
        return NULL;
    }
    
    Node *a = firstHead;
    Node *b = secondHead;
    
    while(a != b){
        a = a == NULL ? headB : a -> next;
        b = b == NULL ? headA : b -> next;
    }
    return a;
}