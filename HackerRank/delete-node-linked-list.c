/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    struct Node* prev;
    struct Node* after;
    prev = head;
    if (position == 0) {
        free(head);
        head = prev->next;
    }
    else {
        for (int i = 0; i < position - 1; i++) {
            prev = prev->next;
        }
        after = prev->next;
        after = after->next;
        free(prev->next);
        prev->next = after;
    }
    return head;
}