class Solution {
public:
    int compress(vector<char>& c) {
        char a=c[0];
        int ans=0;
        int t=0;
        string s="";
        for(int i=0;i<c.size();i++){
            if(a==c[i])t++;
            else{
                s+=a;
                if(t>1)
                s+=to_string(t);
                a=c[i];
                t=1;
            }
        }
        s+=a;
        if(t>1)
        s+=to_string(t);
        // cout<<c.size();
        c.clear();
        for(int i=0;i<s.size();i++)c.push_back(s[i]);

        return s.size();

    }
};