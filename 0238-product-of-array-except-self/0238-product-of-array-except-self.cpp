class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>zero;
        int sum=1,i=0;
        for(auto x:nums){
            if(x==0)zero.push_back(i);
            else sum*=x;
            i++;
        }
        vector<int>ans(nums.size(),0);
        if(zero.size()>1)return ans;
        if(zero.size()==1){
            ans[zero[0]]=sum;
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=sum/nums[i];
        }
        return ans;
    }
};