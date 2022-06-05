#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    // BASE CASE-
    if(head == NULL || K == 0){
        return head;
    }
    
    // create a new Node as a dummy
    LinkedListNode<int>* start = new LinkedListNode<int>(-1);
    start -> next = head;
    
    LinkedListNode<int>* fast = start;
    LinkedListNode<int>* slow = start;
    
    for(int i = 1; i <= K; i++){
        fast = fast -> next;
    }
    
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next;
        slow = slow -> next;
    } // slow will be at K nodes from end
    
    slow -> next = slow -> next -> next;  // delete node
    return start -> next;  // this will return new head
}