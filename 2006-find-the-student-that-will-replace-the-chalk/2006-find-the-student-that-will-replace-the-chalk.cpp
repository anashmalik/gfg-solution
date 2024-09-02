class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
        long long sum=0;
        for(int i=0;i<c.size();i++){
           sum+=c[i];
        }
        int t=k%sum;
        for(int i=0;i<c.size();i++){
            if(t<c[i])return i;
            t-=c[i];
        }
        return 0;
    }
};