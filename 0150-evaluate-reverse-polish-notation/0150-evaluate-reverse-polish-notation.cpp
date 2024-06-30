class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>ans;
        for(auto x:tokens){
            if(x=="+"){
                int n=ans.size();
                ans[n-2]+=ans[n-1];
                ans.erase(ans.begin()+n-1);
            }
            else if(x=="-"){
                int n=ans.size();
                ans[n-2]-=ans[n-1];
                ans.erase(ans.begin()+n-1);
            }
            else if(x=="*"){
                int n=ans.size();
                ans[n-2]*=ans[n-1];
                ans.erase(ans.begin()+n-1);
            }
            else if(x=="/"){
                int n=ans.size();
                ans[n-2]/=ans[n-1];
                ans.erase(ans.begin()+n-1);
            }
            else ans.push_back(stoi(x));
        }
        return ans[0];
    }
};