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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return NULL;
        ListNode* t=head;
        ListNode*a;
        int n=0;
        while(t){
            n++;
            a=t;
            t=t->next;
        }
        a->next=head;
        t=head;
        k=k%n;
        k=n-k;
        while(k--){
            a=t;
            t=t->next;
        }
        a->next=NULL;
        return t;
        
    }
};