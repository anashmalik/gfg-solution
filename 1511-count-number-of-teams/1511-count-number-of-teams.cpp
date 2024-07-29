class Solution {
public:
    int numTeams(vector<int>& r) {
        int ans=0;
       for(int i=0;i<r.size();i++){
        int a,b,c,d;
        a=b=c=d=0;
        for(int l=0;l<i;l++){
            if(r[i]<r[l])b++;
            if(r[i]>r[l])a++;
        }
        for(int l=i;l<r.size();l++){
            if(r[i]<r[l])c++;
            if(r[i]>r[l])d++;
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        ans+=c*a;
        ans+=d*b;
       }
       return ans;
    }
};