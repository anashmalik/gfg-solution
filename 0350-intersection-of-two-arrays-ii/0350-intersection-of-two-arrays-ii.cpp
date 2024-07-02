class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a(1001,0),b(1001,0);
        for(auto x:nums1)a[x]++;
        for(auto x:nums2)b[x]++;
        nums1.clear();
        for(int i=0;i<1001;i++){
            int t=min(a[i],b[i]);
            while(t--){
                nums1.push_back(i);
            }
        }
        return nums1;
    }
};