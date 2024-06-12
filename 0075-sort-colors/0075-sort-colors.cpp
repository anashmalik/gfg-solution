class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>a(3,0);
        for(const auto &x:nums)a[x]++;
        int i=0;
        while(a[0]--)nums[i++]=0;
        while(a[1]--)nums[i++]=1;
        while(a[2]--)nums[i++]=2;
        
    }
};