int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int ans = -1;
    while(head1){
        head1->data = 2001 + head1->data;
        head1 = head1->next;
    }
    while(head2){
        if(head2->data > 1000){
            return ans = head2->data - 2001;
        }
        head2 = head2->next;
    }
    return ans;
}
