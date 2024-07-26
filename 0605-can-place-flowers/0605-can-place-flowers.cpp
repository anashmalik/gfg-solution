class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(f.size()==1 and f[0]==0)return n<=1;
        if(f.size()>1 and f[0]==0 and f[1]==0 and n){f[0]=1;
        n--;}
         if(f.size()>1 and f[f.size()-1]==0 and f[f.size()-2]==0 and n){f[f.size()-1]=1;
        n--;}
        for(int i=1;i<f.size()-1;i++){
            if(f[i-1]==0 and f[i]==0 and f[i+1]==0){
                f[i]=1;
                n--;
            }
        }
return n<=0;
    }
};