Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    // Approach 1 : O(n+m) Time and O(n+m) Space
    /*
    Node*head = new Node(0);
    Node*ptr = head;
    while(head1 && head2){
        if(head1->data < head2->data){
            head->next = new Node(head1->data);
            head = head->next;
            head1 = head1->next;
        }
        else{
            head->next = new Node(head2->data);
            head = head->next;
            head2 = head2->next;
        }
        
    }
    while(head1){
         head->next = new Node(head1->data);
            head = head->next;
            head1 = head1->next;
    }
    while(head2){
         head->next = new Node(head2->data);
            head = head->next;
            head2 = head2->next;
    }
    return ptr->next;
    
    */
    //Approach 2 : O(n+m) Time and O(1) Space
    
    Node*dummy = new Node(0);
    Node*tail = dummy;
    while(1){
        if(head1 == NULL){
            tail->next = head2;
            break;
        }
        else if(head2 == NULL){
            tail->next = head1;
            break;
        }
        if(head1->data <= head2->data){
            tail->next = head1;
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    return dummy->next;
    
} 
