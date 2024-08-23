class Solution {
public:
    string fractionAddition(string expression) {
        vector<vector<int>>ans(2);
        int i=0,s=1,n=0,f=0;
        for(auto x:expression){
            if(x=='-' or x=='+'){
                if(f){
                    ans[1].push_back(n*s);
                    n=0;
                }
                if(x=='-' )s=-1;
                else s=1;
            
            }
            if(x>='0' and x<='9'){
                n=n*10+(x-'0');
                f=1;
            }
            if(x=='/'){
                ans[0].push_back(n*s);
                n=0;
                s=1;
            }
        }
        ans[1].push_back(n*s);
        int sum=0;
        s=accumulate(ans[1].begin(),ans[1].end(),1,multiplies<int>());
        
        cout<<ans[0].size();
        for(i=0;i<ans[0].size();i++){
            // if(ans[0][i]==0 and ans[1][i]==0)return "" ;
            // cout<<ans[0][i]<<" "<<ans[1][i]<<endl;
            sum+=(ans[0][i]*(s/ans[1][i]));
        }
        int t=__gcd(abs(sum),abs(s));
        sum/=t;
        s/=t;

        if(s==0)return "1/0";
        if( sum==0)return "0/1";
        return to_string(sum)+"/"+to_string(s);
    }
};