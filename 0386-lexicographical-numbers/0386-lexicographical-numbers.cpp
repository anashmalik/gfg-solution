class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        // string a="1";
        for(int i=1;i<=n;i++){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(),ans.end());
        vector<int>a;
        for(auto x:ans)a.push_back(stoi(x));
        return a;
    }
};