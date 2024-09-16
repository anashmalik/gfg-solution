class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        vector<int>mp;
        for(auto x:tp){
            mp.push_back(((x[0]-'0')*10+(x[1]-'0'))*60 + (x[3]-'0')*10+(x[4]-'0'));
        }
        sort(mp.begin(),mp.end());
        int ans=INT_MAX;
        for(int i=0;i<mp.size()-1;i++){
            cout<<mp[i]<<endl;
            ans=min(ans,(mp[i+1]-mp[i]));
            cout<<ans<<endl;
        }
        cout<<mp[mp.size()-1]<<" "<<24*60;
        ans=min(ans,abs(mp[0]-mp[mp.size()-1]+(24*60)));
        return ans;
    }
};