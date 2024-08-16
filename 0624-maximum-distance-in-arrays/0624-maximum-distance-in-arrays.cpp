class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int ans=0;
        int m1=0,m2=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[m1][0]>arr[i][0])m1=i;
            if(arr[m2][arr[m2].size()-1]<arr[i][arr[i].size()-1])m2=i;
        }
        int c=(m1==0)?1:0,d=(m2==0)?1:0;
        for(int i=0;i<arr.size();i++){
          if(m1!=i)  if(arr[c][0]>arr[i][0])c=i;
          if(m2!=i)  if(arr[d][arr[d].size()-1]<arr[i][arr[i].size()-1])d=i;
        }
        cout<<m1<<m2<<c<<d;
        if(m1!=m2)ans=max(abs(arr[m1][0]-arr[m2][arr[m2].size()-1]),ans);
        if(m1!=d)ans=max(abs(arr[m1][0]-arr[d][arr[d].size()-1]),ans);
        if(c!=m2)ans=max(abs(arr[c][0]-arr[m2][arr[m2].size()-1]),ans);
        if(c!=d)ans=max(abs(arr[c][0]-arr[d][arr[d].size()-1]),ans);
        return ans;
    }
};