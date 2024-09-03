class Solution {
public:
    int getLucky(string s, int k) {
        long long ans=0;
        for(const auto & x:s){
           int t=x-96;
           while(t){
            ans+=t%10;
            t/=10;
           }
        }
        k--;
        while(k--){
            int t=ans;
            ans=0;
            while(t){
            ans+=t%10;
            t/=10;
           }
        }
        return ans;
    }
};