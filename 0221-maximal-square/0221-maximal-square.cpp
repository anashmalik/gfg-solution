class Solution {
public:
    int maximalSquare(vector<vector<char>>& mo) {
        int m=mo.size();
        int n=mo[0].size();
        int ans=0;
       vector<vector<int>>mat(m,vector<int>(n,0));
        for(int i=0;i<n;i++){ mat[0][i]=(mo[0][i]=='1')?1:0;
        ans=max(ans,mat[0][i]);
        }
        for(int i=0;i<m;i++) {mat[i][0]=(mo[i][0]=='1')?1:0;
        ans=max(ans,mat[i][0]);
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
               if(mo[i][j]=='1'){
                mat[i][j]=min(mat[i-1][j],min(mat[i][j-1],mat[i-1][j-1]))+1;
                int t=mat[i][j];
                ans = max(ans,t);
               }
            }
        }
       
        return ans*ans;
    }
   
};