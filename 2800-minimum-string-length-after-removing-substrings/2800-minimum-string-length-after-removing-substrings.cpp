class Solution {
public:
    int minLength(string s) {
        for(int i=s.size()-2;i>=0;i--){
            if((s[i]=='A' and s[i+1]=='B')or (s[i]=='C' and s[i+1]=='D')){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
            }
        }
        return s.size();
    }
};