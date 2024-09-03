class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0,t;
        for(int x:s){
            t=x-96;
           while(t){
            ans+=t%10;
            t/=10;
           }
        }
        k--;
        while(k--){
            t=ans;
            ans=0;
            while(t){
            ans+=t%10;
            t/=10;
           }
        }
        return ans;
    }
};