class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int sum = 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = n-1;

            while(j < k){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k];

                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;

                    while(j < k && nums[j] == nums[j-1]) j++; 
                }
            }
        }
        return ans;
    }
};