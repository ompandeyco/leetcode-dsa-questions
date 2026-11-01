class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0, rp = n-1;
        int maxWater = 0;

        while(lp < rp){
            int ht = min(height[lp], height[rp]);
            int w = rp - lp;
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;

        }
        return maxWater;

        
    }
};