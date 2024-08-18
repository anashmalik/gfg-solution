class Solution {
public:
    int nthUglyNumber(int n) {
        static unordered_set<int>s;
        static vector<int>an;
        int ans=-1;
        static priority_queue <long long, vector<long long>, greater<long long>> gq;
        gq.push(1);
       while(an.size()<n){
            long long t=gq.top();
            int u=s.size();
            gq.pop();
            s.insert(t);
            if(s.size()!=u){
                an.push_back(t);
            gq.push(t*2);
            gq.push(t*3);
            gq.push(t*5);
            }
            ans=t;
       }
   return an[n-1];
    }
};