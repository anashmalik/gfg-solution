class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& e) {
        vector<int>a(n+1),b(n+1);
        int u=0,t=n;
        for(int i=1;i<=n;i++){
            b[i]=a[i]=i;
        }
        a[0]=b[0]=n;
        sort(e.begin(),e.end(),[](auto &x,auto &y){return x[0]>y[0];});
        for(auto &x:e){
            if(x[0]==1){
                if(help(a,x))u++;
            }
            else if(x[0]==2){
                 if(help(b,x))u++;
            }
            else if(x[0]==3){
                 if(help(a,x) |  (help(b,x)) )u++;
            }
        }
        return ((a[0]==1) and b[0]==1)? e.size()-u:-1;
    }
    private:
    int help(vector<int>&a,vector<int>&b){
        if(comp(a,b[1])==comp(a,b[2])) return 0;
        a[comp(a,b[1])]=b[2];
        a[0]--;
        return 1;
    }
    int comp(vector<int>&a,int i){
        if(a[i]!=i){
            a[i]=comp(a,a[i]);
        }
        return a[i];
    }
};