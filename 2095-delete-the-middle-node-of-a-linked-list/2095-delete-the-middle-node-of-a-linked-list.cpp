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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast=head,*slow=head;
        if( !head || head->next==NULL){
            return NULL;
        }
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        while(fast){
            fast=fast->next;
            if(fast){
                fast=fast->next;
                slow=slow->next;
            }
            
        }
        slow->val=slow->next->val;
        slow->next=slow->next->next;
        return head;
        
    }
};