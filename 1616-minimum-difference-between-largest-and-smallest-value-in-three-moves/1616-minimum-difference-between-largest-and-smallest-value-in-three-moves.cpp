class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)return 0;
        sort(nums.begin(),nums.end());
        int w=n-3;
        int ans=INT_MAX;
        for(int i=0;i<=n-w;i++){
            ans =min(ans,abs(nums[i]-nums[i+w-1]));
        }
         
        return ans;
    }
};