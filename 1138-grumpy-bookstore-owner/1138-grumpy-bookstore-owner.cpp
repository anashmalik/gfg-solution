class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int ans=0,l=0,k=0,t=0,a=0;
        for(int i=0;i<c.size();i++){
            if(!g[i]){
                ans+=c[i];
               c[i]=0;
            }
            if(i<m){a+=c[i];
            t=a;}
            else{
                a-=c[i-m];
                a+=c[i];
                t=max(t,a);
            }
            
        }
        return ans+t;
    }
};