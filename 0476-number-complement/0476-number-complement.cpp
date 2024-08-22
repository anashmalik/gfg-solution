class Solution {
public:
    int findComplement(int num) {
        int i=0;
        int ans=0;
        while(num){
            if(num%2==0){
                ans+=pow(2,i);
            }
            num/=2;
            i++;
        }
        return ans;
    }
};