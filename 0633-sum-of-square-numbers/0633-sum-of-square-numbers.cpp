class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==2 or c==0)return 1;
        int n=sqrt(c);
        for(int i=0;i<=n;i++){
            int a=c-i*i;
            int l=sqrt(a);
            if(l==sqrt(a))return 1; 
        }
        return 0;
    }
};