class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>a;
        for(int i=1;i<=n;i++)a.push_back(i);
        int i=0,t=1;
        while(a.size()>1){
            if(t==k){
                a.erase(a.begin()+i);
                t=1;
            }
            else{
                t++;
                i++;
            }
            if(i==a.size())i=0;
        }
        return a[0];
    }
};