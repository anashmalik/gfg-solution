class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0,k;
        set<int>to={1,2,3,4,5,6,7,8,9};
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                set<int>u;
                for( k=0;k<3;k++){
                    int a=0;
                    int b=0;
                    for(int m=0;m<3;m++){
                        u.insert(grid[i+k][j+m]);
                        a+=grid[i+k][j+m];
                        b+=grid[i+m][j+k];
                    }
                    if(a!=15 or b!=15)break;
                }
                if(u==to and k==3 and grid[i+1][j+1]==5){
                    cout<<i<<" "<<j<<endl;
                    ans++;}
            }
        }
        return ans;
    }
};