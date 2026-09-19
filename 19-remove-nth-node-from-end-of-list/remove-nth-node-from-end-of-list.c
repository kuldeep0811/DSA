/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp=head;
   int count=0;
   while(temp!=NULL){
    count++;
    temp=temp->next;
   }
   temp=head;
    if(count==n){
    struct ListNode* del=head;
    head=head->next;
    free(del);
    return head;

    }
    for(int i=1;i<count-n;i++){
        temp=temp->next;
    }

     struct ListNode* del= temp->next;
     temp->next=del->next;

    free(del);
    

    return head;
    



    
}