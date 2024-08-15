class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0;
        for(auto x:bills){
            if(x==20){
                if(b>0 and a>0){b--;
                a--;}
                else if(a>2)a-=3;
                else return 0;
                
            }
            else if(x==10){
                if(a)a--;
                else return 0;
                b++;
            }
            else a++;
        }
        return 1;
    }
};