class Solution {
public:
    vector<int> missingRolls(vector<int>& r, int mean, int n) {
        long t=0;
        for(auto x:r)t+=x;
        long long ans= mean*(n+r.size());
        vector<int>a(n,1);
        ans-=t;
        ans-=n;
        int i=0;
        cout<<ans;
        if(ans<0)return {};
        while(ans--){a[i++]++;
        if(a[i-1]>6)return {};
        i%=n;
        }
return a;
    }
};