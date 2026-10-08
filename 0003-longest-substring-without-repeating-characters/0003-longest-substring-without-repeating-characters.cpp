class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int st = 0;
        int ans = 0;
        unordered_set<char> set;

        for(int i=0; i<n; i++){
            while(set.count(s[i])){
                set.erase(s[st]);
                st++;
            }
            set.insert(s[i]);
            ans = max(ans, i-st+1);

        }
        return ans;
    }
};