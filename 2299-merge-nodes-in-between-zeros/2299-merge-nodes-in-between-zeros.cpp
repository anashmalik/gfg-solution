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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode * t=head;
        ListNode* te=t->next;
        ListNode * a=NULL;
        while(te){
            if(te->val==0 and sum !=0){
                a=t;
                 t->val=sum;
                 t=t->next;
                 sum=0;
            }
            else sum+=te->val;
            te=te->next;
        }
        if(a==NULL)return NULL;
        a->next=NULL;
        return head;
    }
};