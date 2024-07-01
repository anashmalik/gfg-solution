class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans=0;
        for(auto const & x:arr){
            if(x%2)ans++;
            else ans=0;
            if(ans==3)return true;
        }
        return false;
    }
};