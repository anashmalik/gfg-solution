class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int a=0;
        for(auto x:s){
            if(x=='(')a++;
            else{
                if(a)a--;
                else{
                    ans++;
                }
            }
        }
        return ans+a;
    }
};