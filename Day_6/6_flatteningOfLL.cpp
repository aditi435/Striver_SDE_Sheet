#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
    int data;
    Node* next;
    Node* child;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

*****************************************************************/
Node* mergeTwoLists(Node* a, Node* b){
    // base case-
    Node* temp = new Node(-1);
    Node* res = temp;
    
    while(a != NULL && b != NULL){
        if(a -> data < b -> data){
            temp -> child = a;
            temp = temp -> child;
            a = a -> child;
           
        }
        else{
            temp -> child = b;
            temp = temp -> child;
            b = b -> child;
            
        }
    }
    
    if(a) temp -> child = a;
    else temp -> child = b;
    
    res -> child -> next = NULL;
    return res -> child;
}



Node* flattenLinkedList(Node* head) 
{
    // Write your code here
    // base case-
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    // recur left side of LL-
    head -> next = flattenLinkedList(head -> next);
    
    // merge 2 lists-
    head = mergeTwoLists(head, head -> next);
    
    return head;
}
