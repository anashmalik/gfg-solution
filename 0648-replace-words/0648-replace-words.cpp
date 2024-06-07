class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        string ans="";
        sort(d.begin(),d.end());
        stringstream ss(s);
        string word;
        while (ss >> word) {
           for(auto x:d ){
            if(x.size()<word.size()){
                if(word.substr(0,x.size())==x){
                    word=x;
                    break;
                }
            }
           }
           ans+=word;
           ans+=" ";
        }
        ans.erase(ans.end()-1);
       return ans;
    }
};