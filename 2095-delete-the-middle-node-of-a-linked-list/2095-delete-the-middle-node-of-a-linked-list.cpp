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
        int count=0;
        ListNode *temp=head,*tag=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        if(count==2){
            head->next=NULL;
            return head;
        }
        if(count==1){
            return NULL;
        }
        count=count/2;
        for(int i=0;i<=count;i++)
        {
            if(i!=count)
                tag=tag->next;
            else
            {
                tag->val=tag->next->val;
                tag->next=tag->next->next; 
            }
        }
        
        // for(int i=0;i<(count-1)/2;i++)
        // {
        //     tag=tag->next;
        //     if(i==(count-1)/2-1){
        //         tag->val=tag->next->val;
        //         tag->next=tag->next->next;
        //     }
        // }
        return head;
    }
};