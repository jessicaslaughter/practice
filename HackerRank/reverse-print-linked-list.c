/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

/* Iterative */

void ReversePrint(Node *head)
{
    struct Node* current;
    struct Node* last;
    current = head;
    last = NULL;
    if (head == NULL) {
        return;
    }
    else {
        while (last != head) {
            current = head;
            while (current->next != last) {
                current = current->next;
            }
            printf("%d\n", current->data);
            last = current;
        }
    }
    return;
}

/* Recursive */

void ReversePrint(Node *head)
{
    if (head == NULL) {
        return;
    }
    ReversePrint(head->next);
    printf("%d\n", head->data);
    return;
}