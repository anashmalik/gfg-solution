class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<pair<int,string>>p;
        for(int i=0;i<n.size();i++){
            p.push_back({h[i],n[i]});
        }
        sort(p.begin(),p.end(),[](auto &a,auto &b){
            return a.first>b.first;
        });
        n.clear();
        for(auto x:p)n.push_back(x.second);
        return n;
    }
};