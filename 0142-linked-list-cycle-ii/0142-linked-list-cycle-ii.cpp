/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectcycle(ListNode *head){
        ListNode *slow, *fast;
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return slow;
        }
        return NULL;
    } 
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode* p1 = detectcycle(head);
        if (p1==NULL) return NULL;
        ListNode *p2 = p1;
        int l=0;
        do{
            p1=p1->next;
            l++;
        }while(p1!=p2);
        p1=head;
        p2=head;
        for(int i=0;i<l;i++){
            p2=p2->next;
        }

        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};