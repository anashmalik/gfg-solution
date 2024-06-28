class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long>a(n,0);
        for(auto x:roads){
            a[x[0]]++;
            a[x[1]]++;
        }
        sort(a.begin(),a.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(a[i]*(1+i));
            // cout<<a[i]<<" "<< (i+1)<<endl;
        }
        return ans;
    }
};