class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>mp(26,0),m;
        for(auto x:s1){
            mp[x-'a']++;
        }
        m=mp;
        int t=s1.size();
        int n=t;
        for(int i=0;i<=s2.size()-t;i++){
            n=t;
            mp=m;
            for(int j=i;j<s2.size();j++){
                char x= s2[j];
                if(mp[x-'a']>0){
                mp[x-'a']--;
                n--;
                if(n==0)return true;
            }
            else{
                break;
            }
            }
        }
return false;
    }
};