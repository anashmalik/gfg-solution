class Solution {
public:
    string mergeAlternately(string a, string b) {
        string ans="";
        int i=0,j=0;
        while(i<a.size() and j<b.size()){
            ans+=a[i++];
            ans+=b[j++];
        }
        while(i<a.size())ans+=a[i++];
        while(j<b.size())ans+=b[j++];
        return ans;

    }
};