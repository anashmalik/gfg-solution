class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        // we need to find unique occurences
        string s = s1 + " " + s2;

        cout<<s1.max_size();

        // store all words from s
        unordered_map<string,int> um;
        string tmp="";
        for(auto& val : s){ // similar to, i=0;i<s.size();i++
            if(val == ' '){
                um[tmp]++;
                tmp = "";
            }
            else{
                tmp += val; // denotes, val = s[i]
            }
        }
        
        // condition needed if empty string allowed
        if(tmp != ""){
            um[tmp]++;
            tmp = "";
        }
        vector<string> ans;
        for(auto& val:um){
              if(val.second==1){
                ans.emplace_back(val.first);               
            }

        }

        return ans;
    }
};