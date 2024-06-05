class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        int n=w.size();
        vector<vector<int>>ans(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
            for(auto const &x:w[i]){
                ans[i][x-'a']++;
            }
        }
        vector<string> a;
        for(int i=0;i<26;i++){
            int t=INT_MAX;
            for(int k=0;k<n;k++){
                t=min(t,ans[k][i]);
            }
            string m="";
            m+=('a'+i);
            while(t--){
                a.push_back((m));
            }
        }
        return a;
    }
};