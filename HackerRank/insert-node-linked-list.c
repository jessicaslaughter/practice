/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node* temp;
    struct Node* newNode;
    temp = head;
    if (head == NULL) {
        head = (struct Node*)malloc(sizeof(struct Node));
        head->data = data;
        head->next = NULL;
    }
    else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        temp->next = newNode;
    }
    return head;
}