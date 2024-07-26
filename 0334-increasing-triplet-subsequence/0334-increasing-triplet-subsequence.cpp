class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m=INT_MIN;
        int a,b;
        a=b=m;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>m){
                m=nums[i];
            }
            if(nums[i]<m and nums[i]>a)a=nums[i];
            if(nums[i]<a )return true;
            // cout<<a<<" "<<m<<endl;
        }
        
        return false;
    }
};