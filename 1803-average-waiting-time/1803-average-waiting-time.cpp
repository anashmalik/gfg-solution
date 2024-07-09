class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double ans=0,t=0;
        for(auto x:c){
            if(t<=x[0]){
                ans+=x[1];
                t=x[0]+x[1];
            }
            else{
                t+=x[1];
                ans+=(t-x[0]);
            }
        }
        return ans/double(c.size());
    }
};