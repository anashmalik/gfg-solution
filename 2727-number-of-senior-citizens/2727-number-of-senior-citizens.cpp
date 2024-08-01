class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto x:details){
            int a=x[11]-'0';
            a=a*10+x[12]-'0';
            if(a>60)ans++;
        }
        return ans;
    }
};