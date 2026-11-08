class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> m;

        for(int i=0; i<n; i++){
            int first = nums[i];

            int sec = tar-first;

            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};