class Solution
{
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
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        Node*l1 = reverse(num1);
        Node*l2 = reverse(num2);
        
        Node*head = new Node(0);
        Node*ptr = head;
        int carry = 0;
        int sum;
        while(l1 && l2){
            sum = l1->data + l2->data + carry;
            carry = sum/10;
            head->next = new Node(sum%10);
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            sum = l1->data + carry;
            carry = sum/10;
            head->next = new Node(sum%10);
            head = head->next;
            l1 = l1->next;
        }
        while(l2){
            sum = l2->data + carry;
            carry = sum/10;
            head->next = new Node(sum%10);
            head = head->next;
            l2 = l2->next;
        }
        if (carry) {
            head->next = new Node(carry);
        }
        Node*ans =  reverse(ptr->next);
        
        while(ans->data == 0){
            if (ans->data == 0 && ans->next == nullptr) {
            return ans;
        }
            ans = ans->next;
        }
        return ans;
    }
};
