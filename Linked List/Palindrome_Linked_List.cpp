class Solution{
  public:
    Node*reverse(Node*head){
        Node*prev = NULL;
        while(head){
            Node*temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {   
        Node*ptr = head;
        Node*slow = head;
        Node*fast = head->next;
        while(fast && fast->next){
            fast= fast->next->next;
            slow = slow->next;
        }
        // now slow-> next will be our second half part
        Node*rev = reverse(slow->next);
        while(rev){
           if(rev->data != ptr->data){
               return false;
           }
           rev = rev->next;
           ptr = ptr->next;
        }
        return true;
    }
};
