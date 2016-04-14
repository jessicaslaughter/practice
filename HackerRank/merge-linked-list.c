/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    struct Node* head;
    struct Node* newList = (struct Node*)malloc(sizeof(struct Node));
    head = newList;
        
    // in case of empty heads
    if (headA == NULL) {
        return headB;
    }
    else if (headB == NULL) {
        return headA;
    }
    
    else {
        // reassign next pointers until one head is NULL
        while (headA != NULL && headB != NULL) {
            if (headA->data <= headB->data) {
                newList->next = headA;
                headA = headA->next;
            }
            else {
                newList->next = headB;
                headB = headB->next;
            }
            newList = newList->next;
        }
        
        // connect final nodes between each list
        if (headA == NULL) {
            newList->next = headB;
        }
        else {
            newList->next = headA;
        }
    }
    return head->next;
}
