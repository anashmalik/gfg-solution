class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& ss) {
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=abs(s[i]-ss[i]);
        }
        return ans;
    }
};