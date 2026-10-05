class Solution {
public:
    // TC: O(nlog n + 2^n * n)    we can ignore nlogn because this is, sort fun TC so final
    //TC is: O(2^n * n)              
    
    void getAllSubsets(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i == nums.size()){
            allSubsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, allSubsets);

        ans.pop_back();  //backtracking

        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++;

        //exclude
        getAllSubsets(nums, ans, idx, allSubsets);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
        
    }
};