class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;

        int st = 0, end = n-1;

        while( st <= end){
            int ht = min(height[st], height[end]);
            int w = end -st;
            int currWater = w*ht;
            maxWater = max(maxWater, currWater);

            height[st] < height[end] ? st++ : end--;

        }
        return maxWater;
        
    }
};