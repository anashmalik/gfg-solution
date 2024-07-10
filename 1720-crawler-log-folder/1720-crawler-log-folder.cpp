class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string>a;
        int t=0;
        for(auto x:logs){
            if(x=="../" ){
                if( a.size())
                a.pop_back();}
            else if(x=="./")t++;
            else a.push_back(x);
        }
        return a.size();
    }
};