class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto x:word)mp[x]++;
        vector<int>a;
        for(auto x:mp)a.push_back(x.second);
        sort(a.begin(),a.end());
        int t=0,d=1,ans=0;
        for(int i=0;i<a.size();i++){
            ans+=(d*a[a.size()-i-1]);
            t++;
            if(t%8==0)d++;
        }
        return ans;
    }
};