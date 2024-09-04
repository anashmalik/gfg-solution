class Solution {
public:
    int robotSim(vector<int>& co, vector<vector<int>>& ob) {
        map<vector<int>,int>mp;
        for(auto x:ob)mp[x]=1;
        vector<int> a={0,0};
        int t=1;
        int ans=0;
        for(auto x:co){
            if(x==-1){
                t+=1;
                t%=4;
                if(t==0)t=4;
            }
            else if(x==-2){
                // cout<<t; 
                t+=3;
                // cout<<t; 
                t%=4; 
                if(t==0)t=4;
                // cout<<t; 
            }
            else{
                if(t==1){
                    int o=x;
                    while(o--){
                        auto y=a;
                        y[1]++;
                        if(mp[y])break;
                        else a[1]++;
                    }
                }
                if(t==2){
                    int o=x;
                    while(o--){
                        auto y=a;
                        y[0]++;
                        if(mp[y])break;
                        else a[0]++;
                    }
                }
                if(t==3){
                    int o=x;
                    while(o--){
                        auto y=a;
                        y[1]--;
                        if(mp[y])break;
                        else a[1]--;
                    }
                }
                if(t==4){
                    int o=x;
                    while(o--){
                        auto y=a;
                        y[0]--;
                        if(mp[y])break;
                        else a[0]--;
                    }
                }
                
            }
            ans=max(ans,a[0]*a[0]+a[1]*a[1]);
        // cout<<a[0]<<" "<<a[1]<<" "<<t<<endl;
        // cout<<ans<<endl;
        }
        return ans;
    }
};