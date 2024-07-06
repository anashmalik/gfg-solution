class Solution {
public:
    int passThePillow(int n, int time) {
        if(n==1)return 1;
        int c= time/(n-1);
        return (c%2)?n-(time%(n-1)):time%(n-1)+1;
    }
};