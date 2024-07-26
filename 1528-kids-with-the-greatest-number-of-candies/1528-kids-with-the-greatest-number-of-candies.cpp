class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int mi=0;
        for(int i=0;i<c.size();i++){
            mi=max(mi,c[i]);
            c[i]+=e;
        }
        vector<bool>ans(c.size(),false);
        for(int i=0;i<c.size();i++){
            // cout<<c[i];
           if(c[i]>=mi){
            ans[i]=true;}
        }
        return ans;
    }
};