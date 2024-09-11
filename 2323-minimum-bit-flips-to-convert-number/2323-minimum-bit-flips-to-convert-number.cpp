class Solution {
public:
    int minBitFlips(int s, int g) {
        int ans=0;
        while(s or g){
            if(s%2 != g%2)ans++;
            s/=2;
            g/=2;
        }
        return ans;
    }
};