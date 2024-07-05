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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head)return{-1,-1};
        int a=-1,b=-1;
        int p=head->val;
        int lm=-1,l=-1,ans=INT_MAX;
        head=head->next;
        while(head->next){
            if(p<head-> val and head->val> head->next->val){
               if(l==-1)b=0;
                if(l>=0) ans=min(ans,l);
                l=0;

            }
            if(p> head-> val and head->val< head->next->val){
                if(l==-1)b=0;
                if(l>=0) ans=min(ans,l);
                l=0;
            }
            if(b>-1)b++;
            if(lm>=0)lm++;
            if(l>=0)l++;
            p=head->val;
            head=head->next;
            cout<< b<<" "<<l<<endl;
        }
        
        if( b==l or b==-1)return {-1,-1};
        return {ans,b-l};
    }
};