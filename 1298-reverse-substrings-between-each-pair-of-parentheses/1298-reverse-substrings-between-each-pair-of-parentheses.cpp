class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        for(auto x:s){
            if(x==')'){
                string ans="";
                while(st.top()!="("){
                    string v=st.top();
                    reverse(v.begin(),v.end());
                    ans+=v;
                    st.pop();
                }
                st.pop();
                st.push(ans);
                
            }
            else{
                 string v="";
                 v+=x;
                st.push(v);
            }
        }
        string ans="";
        while(st.size()){
                    string v=st.top();
                    
                    ans=v+ans;
                    st.pop();
                }
return ans;
    }
    
};