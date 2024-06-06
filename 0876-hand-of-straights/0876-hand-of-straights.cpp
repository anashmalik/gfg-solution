class Solution {
public:
    bool isNStraightHand(vector<int>& h, int n) {
    if(h.size()%n)return false;
    map<int,int>mp;
    for(auto x:h){
        mp[x]++;
    }
    int t=h.size()/n;
    while(t--){
        vector<int> g;
        for(auto x:mp){
            g.push_back(x.first);
            mp[x.first]--;
            if(mp[x.first]==0){
                mp.erase(x.first);
            }
            if(g.size()==n)break;
        }
        if(check(g) or g.size()<n)return false;
    }
        return true;
    }
    int check( vector<int> &g){
        cout<<g[0]<<endl;
        for(int i=1;i<g.size();i++){
            cout<<g[i]<<endl;
            if(g[i]!=g[i-1]+1)return true;
        }
        return false;
    }
};