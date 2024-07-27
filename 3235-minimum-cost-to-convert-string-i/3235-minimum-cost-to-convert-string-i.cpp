class Solution {
public:
    long long minimumCost(string s, string t, vector<char>& o, vector<char>& c, vector<int>& p) {
        int n=s.size();
        long mod= 1e9+7;
        vector<vector<int>>dp(26,vector<int>(26,INT_MAX/2));
        for(int i=0;i<o.size();i++){
            dp[o[i]-'a'][c[i]-'a']=min(p[i],dp[o[i]-'a'][c[i]-'a']);
        }
        
        for(int k=0;k<26;k++){
            for(int j=0;j<26;j++){
                for(int i=0;i<26;i++){
                    if(dp[i][j]>(dp[i][k]+dp[k][j])){
                        dp[i][j]=(dp[i][k]+dp[k][j]);
                    }
                }
            }
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){

                if(dp[s[i]-'a'][t[i]-'a']==INT_MAX/2)return -1;
                ans+=dp[s[i]-'a'][t[i]-'a'];
                // ans=ans%mod;
            }
        }
        return ans;
    }
};