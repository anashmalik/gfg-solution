#include<bits/stdc++.h>
class Solution {
public:
    int calculate(string s) {
        s.insert(s.begin(),'(');
        s+=')';
        // cout<<s<<endl;
       pair<int,int> t;
       int i=0;
       t=help(s,i);
       return t.first;
    }
private:
pair<int,int> help(string &s,int i){
    // vector<int>val;  
    if(i>=s.size()){return {0,i};}
    // cout<<"init  "<<isdigit(s[i])<<endl;
    vector<int>val;
    for( i;i<s.size() and s[i]!=')';i++){
        if(isdigit(s[i])){
            int a=0;
            while(i<s.size() and isdigit(s[i])){
                a=a*10+(s[i++]-'0');
            }
            i--;
            // cout<<"A"<<a<<endl;
            val.push_back(a);
        }
        else if(s[i]=='-'){
            while(s[i+1]==' ')i++;
            int v=0;
            if(isdigit(s[i+1])){
                i++;
                int a=0;
            while(isdigit(s[i])){
                a=a*10+(s[i++]-'0');
            }
            v=a;
            i--;
            }
            else if(s[i+1]=='('){
                pair<int,int>t;
                i=i+2;
               t= help(s,i);
               i=t.second;
               v=t.first;
            }
            // cout<<"b"<<-v<<endl;
            val.push_back(-v);
        }
        else if (s[i]=='(')
        {
             pair<int,int>t;
             i++;
               t= help(s,i);
               i=t.second;
              int v=t.first;
            //   cout<<"c"<<i<<endl;
               val.push_back(v);
        }

       }
       int ans=0;
      for(auto x:val)ans+=x;
       return {ans,i};
    
}
};