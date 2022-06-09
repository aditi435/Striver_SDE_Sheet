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

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
    // base case-
    Node *temp = head;
    for(int i = 0; i < k; i++){
        if(temp == NULL){
            return head;
        }
        temp = tempp -> next;
    }
    
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    
    int count = 0;
    
    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        
        count++;
    }
    
    if(next != NULL){
        head -> next = getListAfterReverseOperation(next, k);
    }
    
    return prev;
}