class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        Node*before = NULL;
        while(head){
            Node*temp = head->next;
            head->next = before;
            before = head;
            head = temp;
        }
        return before;
    }
};
