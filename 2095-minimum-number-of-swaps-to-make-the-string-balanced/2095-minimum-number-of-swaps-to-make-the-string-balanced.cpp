class Solution {
public:
    int minSwaps(string s) {
        int ans=0;
        for(auto x:s){
            if(x=='[')ans++;
            else if(ans>0)ans--;
        }
        return (ans+1)/2;
    }
};