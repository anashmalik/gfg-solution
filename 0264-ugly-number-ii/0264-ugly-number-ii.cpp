class Solution {
public:
    int nthUglyNumber(int n) {
        unordered_set<int>s;
        int ans=-1;
        priority_queue <long long, vector<long long>, greater<long long>> gq;
        gq.push(1);
       while(s.size()<n){
            long long t=gq.top();
            int u=s.size();
            gq.pop();
            s.insert(t);
            if(s.size()!=u){
            gq.push(t*2);
            gq.push(t*3);
            gq.push(t*5);
            }
            ans=t;
       }
   return ans;
    }
};