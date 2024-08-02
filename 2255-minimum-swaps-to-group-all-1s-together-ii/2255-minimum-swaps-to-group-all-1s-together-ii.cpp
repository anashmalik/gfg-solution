class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int t=0,ans=INT_MAX,k=0,c=0,j=0;
        for(auto x:nums)if(x)t++;
        
        for(int i=0;i<nums.size();i++){
            if(k<t){if(nums[i])c++;
            k++;}
            else{
                if(nums[i])c++;
                if(nums[j++])c--;
            }
            ans=min(ans,t-c);
        }
       for(int i=0;i<t-1;i++){
            {
                if(nums[i])c++;
                if(nums[j++])c--;
            }
            ans=min(ans,t-c);
       }
        return ans;
    }
};