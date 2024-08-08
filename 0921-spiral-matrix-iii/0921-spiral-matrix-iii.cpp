class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int ro, int co, int r, int cr) {
        int a,b,c,d;
        a=b=r;
        c=d=cr;
        vector<vector<int>>mat(ro,vector<int>(co,0));
        int s=0;
        for(int i=0;i<max(ro,co);i++){
            c--;
            d++;
            for(int k=c+1;k<d;k++){
                if(k>=0 and k<co and a>=0)mat[a][k]=s++;
            }
            b++;
            for(int k=a;k<b;k++){
                if(k>=0 and k<ro and d<co)mat[k][d]=s++;
            }
            for(int k=d;k>c;k--){
                if(k>=0 and k<co and b<ro)mat[b][k]=s++;
            }
            a--;
            for(int k=b;k>a;k--){
                if(k>=0 and k<ro and c>=0)mat[k][c]=s++;
            }
        }
        vector<vector<int>>ans(ro*co);
        for(int i=0;i<ro;i++){
            for(int k=0;k<co;k++){
                ans[mat[i][k]]={i,k};
            }
            
        }
        return ans;
    }
};