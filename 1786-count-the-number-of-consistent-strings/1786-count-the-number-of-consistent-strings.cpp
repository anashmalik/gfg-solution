class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        unordered_map<char,int>mp;
        for(auto x:allowed)mp[x]=1;
        for(auto x:words){
            int i;
            for( i=0;i<x.size();i++){
                if(mp[x[i]]==0)break;
            }
            if(i==x.size())ans++;
        }
        return ans;
    }
};