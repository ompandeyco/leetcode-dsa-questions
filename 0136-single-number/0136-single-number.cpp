class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        for(int val : nums){
            ans ^= val;
        }
        return ans;

        
    }
};