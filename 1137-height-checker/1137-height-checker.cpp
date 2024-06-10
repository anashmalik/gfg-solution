class Solution {
public:
    int heightChecker(vector<int>& a) {
        vector<int>h=a;
        sort(h.begin(),h.end());
        int ans=0;
        for(int i=0;i<h.size();i++){
            if(h[i]!=a[i])ans++;
        }
        return ans;
    }
};