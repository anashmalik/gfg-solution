class Solution {
public:
    vector<int> frequencySort(vector<int>& n) {
       vector<int>count(201,0);
        for(auto x:n){
            count[x+100]++;
        }
        sort(n.begin(),n.end(),[&](auto a,auto b){
            if(count[a+100]==count[b+100])
            return a>b;
            return count[a+100]<count[b+100];
        });
        return n;
    }
};