class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
       long long miss = 1;
        long result = 0;
        long i = 0;

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                miss += nums[i];
                i++;
            } else {
                miss += miss;
                result++;
            }
        }

        return result;
    
    }
};