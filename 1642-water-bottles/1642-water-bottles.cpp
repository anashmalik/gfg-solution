class Solution {
public:
    int numWaterBottles(int n, int e) {
        int ans=n;
        while(n>=e){
            ans+=n/e;
            int a=n%e;
            n=n/e+a;
        }
        return ans;
        
    }
};