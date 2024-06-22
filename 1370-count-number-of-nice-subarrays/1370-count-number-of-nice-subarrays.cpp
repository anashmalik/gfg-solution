class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int t=0,j=0,ans=0,b=1,f=0;
        for(int i=0;i<n;i++){
           if(nums[i]%2){
            t++;
            f=1;
           }
           else if(f==0)b++;
           if(t>k){
            while(t>k and j<n)
            if(nums[j++]%2==1)t--;
            b=1;
            while(j<n and nums[j]%2==0){
                j++;
                b++;
            }
           }
           if(t==k){
            ans+=b;
           }
        //    cout<<t<<" "<<ans<<" "<<j<<endl;
        }
        return ans;
    }
};