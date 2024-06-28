class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {   if(!head || !head->next || k==0)return head;
        Node*oldhead = head;
        
        // for tail to later connecting oldhead
        Node*tail = head;
        int len =1;
        while(tail->next){
            tail = tail->next;
            len++;
        }
        if(k==len)return head;
        Node*newtail = head;
        k-=1;
        while(k){
            newtail = newtail->next;
            k--;
        }
        Node*newhead = newtail->next;
        newtail->next = NULL;
        tail->next = oldhead;
        return newhead;
    }
};
