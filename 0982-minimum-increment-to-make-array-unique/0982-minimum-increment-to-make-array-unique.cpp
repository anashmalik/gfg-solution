class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // return 0;
        vector<int>a(1000000,0);
        long  ans=0;
        int t=0,mod=1e9+7;
        for(auto x:nums)a[x]++;
        for(int i=0;i<1000000;i++){
            if(a[i]>1){
                t=max(t,i)+1;
                while(a[i]>1){

                    while(t<1000000){
                        // cout<<t<<endl;
                        if(a[t]==0){
                            a[t]=1;
                            // cout<<a[t-1];
                            ans=(ans+t-i)%mod;
                            break;
                        }
                        t++;
                    }
                    a[i]--;
                }
            }
        }
        return ans;
    }
};