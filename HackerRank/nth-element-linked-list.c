/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    struct Node* pointer;
    pointer = head;
    int n = 1;
    while (pointer->next != NULL) {
        pointer = pointer->next;
        n++;
    }
    pointer = head;
    for (int i = 1; i < n - positionFromTail; i++) {
        pointer = pointer->next;
    }
    return pointer->data;
}