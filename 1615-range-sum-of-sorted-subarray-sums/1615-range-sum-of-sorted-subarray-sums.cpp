class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            int s=0;
            for(int k=i;k<n;k++){
                s+=nums[k];
                ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end());
        int a=0;
        for(int i=left-1;i<right;i++)a=(a+ans[i])%1000000007;
        return a;
    }
};