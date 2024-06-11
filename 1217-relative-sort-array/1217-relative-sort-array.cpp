class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto x:arr1)mp[x]++;
        int i=0;
        for(auto x:arr2){
            int t=mp[x];
            while(t--){
                arr1[i++]=x;
            }
            mp.erase(x);
        }
        for(auto x:mp){
            int t=x.second;
            while(t--){
                arr1[i++]=x.first;
            }
        }
        return arr1;
    }
};