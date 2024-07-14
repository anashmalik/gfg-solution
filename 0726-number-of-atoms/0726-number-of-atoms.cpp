class Solution {
public:
    string countOfAtoms(string f) {
        stack<pair<string,int>>st;
        string ans="";
        for(int i=0;i<f.size();i++){
            // cout<<f[i]<<endl;
            if(isdigit(f[i])){
                int x=0;
                while(i<f.size() and isdigit(f[i])){
                    x=x*10+f[i]-'0';
                    i++;
                }
                i--;
                st.push({ans,x});
                ans="";
            }
            if(isupper(f[i])){
                if(ans.size()>0){
                    st.push({ans,1});
                    ans="";
                }
                ans+=f[i];
            }
            if(islower(f[i]))ans+=f[i];
            if(f[i]=='('){
                if(ans.size()>0){
                    st.push({ans,1});
                    ans="";
                }
                st.push({"(",0});
            }
            if(f[i]==')'){
                if(ans.size()>0){
                    st.push({ans,1});
                    ans="";
                }
                int x=0;
                i++;
                while(i<f.size() && isdigit(f[i])){
                    x=x*10+f[i]-'0';
                    i++;
                }
                i--;
                if(x==0)x=1;
                vector<pair<string,int>>q;
                while(st.top().second){
                    auto t=st.top();
                    t.second*=x;
                    q.push_back(t);
                    st.pop();
                }
                st.pop();
                for(auto x:q)st.push(x);
            }

        }
        if(ans.size()>0){
                    st.push({ans,1});
                    ans="";
                }
        string l="";
        map<string,int>mp;
        while(st.size()){
            auto x=st.top();
            mp[x.first]+=x.second;
            st.pop();
        }

        for(auto x:mp){
            // cout<<x.first<<" "<<x.second<<endl;
            l+=x.first;
           auto y= (x.second==1)?"":to_string(x.second);
           l+=y;
        }
        return l;
    }
};