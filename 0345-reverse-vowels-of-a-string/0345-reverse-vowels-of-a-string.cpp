class Solution {
public:
    string reverseVowels(string s) {
        int n = size(s);
        int a=0,e=n-1;
        int st,en;
        int f=0,d=0;
        while(e>=a){
            if((s[a]=='a'||s[a]=='e'||s[a]=='i'|s[a]=='o'||s[a]=='u'||s[a]=='A'||s[a]=='E'||s[a]=='I'|s[a]=='O'||s[a]=='U')&&(!f)){
                st=a;
                f=1;
                a++;
            }
            else if(!f){
                a++;
               
            }
            if((s[e]=='a'||s[e]=='e'||s[e]=='i'|s[e]=='o'||s[e]=='u'||s[e]=='A'||s[e]=='E'||s[e]=='I'|s[e]=='O'||s[e]=='U')&&(!d)){
                en=e;
                d=1;
                e--;
            }
            else if (!d){
                e--;
                
            }
            if(f&d){
                char t=s[st];
                s[st]=s[en];
                s[en]=t;
                f=0;
                d=0;
            }
        }
        return s;
    }
};