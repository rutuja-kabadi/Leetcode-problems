/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int l=0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        if(l==1) return nullptr;

        temp=head;
        for(int i=1;i<l-n;i++){
            temp=temp->next;
        }
        if(n==1) temp->next=NULL;
        else if(l-n==0) {
            head = head->next;
        }
        else temp->next = temp->next->next;
        return head;
    }
};