/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    struct Node* current;
    struct Node* prev;
    current = head->next;
    prev = head;
    if (head == NULL) {
        return head;
    }
    
    while (current != NULL) {
        if (current->data == prev->data) {
            prev->next = current->next;
        }
        else {
            prev = prev->next;
        }
        current = current->next;
    }
    return head;
}