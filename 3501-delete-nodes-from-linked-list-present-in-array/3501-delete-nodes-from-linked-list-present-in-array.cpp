class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]=1;
        ListNode* temp=head,*t=head;
        while(t){
            // cout<<t->val<<endl;
            if(mp[t->val]==1){
                if(t==temp){
                    head=t->next;
                    temp=t->next;
                }
                else{
                    temp->next=t->next;
                }
            }
            else{
                temp=t;
            }
            t=t->next;
        }
        return head;
    }
};