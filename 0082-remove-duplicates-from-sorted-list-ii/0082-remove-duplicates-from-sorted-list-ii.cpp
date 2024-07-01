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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=head;
        ListNode* prev=NULL;
        if(t==NULL)return NULL;
        while(t and t->next){
            if(t->val==t->next->val){
                while(t->next and t->val==t->next->val){
                t->next=t->next->next;
            }
            if(prev==NULL)head=t->next;
            else
                prev->next=t->next;
            }
            else prev=t;
            t=t->next;
        }
    return head;
    }
};