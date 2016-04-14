/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
    struct Node* slow;
    struct Node* fast;
    int n = 0;
    slow = head;
    fast = head->next;
    if (head == NULL) {
        return 0;
    }
    while(n < 100) {
        n++;
        if (slow == fast) {
            return 1;
        }
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL) {
            return 0;
        }
        fast = fast->next;
        if (fast == NULL) {
            return 0;
        }
    }
    return 0;
}
