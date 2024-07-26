class Solution {
public:
    int INF=INT_MAX;
    int findTheCity(int n, vector<vector<int>>& edges, int t) {
        vector<vector<int>>dp(n,vector<int>(n,INF));
        for(auto x:edges){
            dp[x[0]][x[1]]=x[2];
            dp[x[1]][x[0]]=x[2];
            dp[x[1]][x[1]]=0;
            dp[x[0]][x[0]]=0;
        }
        int mi=INT_MAX;
         for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((dp[k][j] != INF && dp[i][k] != INF && dp[i][j] >dp[i][k] + dp[k][j]))
                    dp[i][j] = dp[i][k] + dp[k][j];
            }
        }
       
    }
    int a=-1;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(dp[i][j]<=t and i!=j)c++;
        }
        if(c<=mi){
            mi=c;
            a=i;
        }
    }
     return a;
    }
};