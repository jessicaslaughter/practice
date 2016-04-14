/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    struct Node* temp;
    struct Node* newNode;
    temp = head;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) {
        newNode->next = NULL;
        head = newNode;
    }
    else if (position == 0){
        newNode->next = head;
        head = newNode;
    }
    else {    
        for (int i = 0; i < position-1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
