class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string st=" ";
        vector<string > ans;
       for(auto x:s){
           if(x==' '){
               if(st.size()>1) ans.push_back(st);
               st=" ";
           }
           else{
               st=st+x;
           }
       }

    if(st.size()>1) ans.push_back(st);
    s.clear();
    for(auto x:ans){
        s=x+s;
    }
    s.erase(s.begin());
    return s;
    }
};