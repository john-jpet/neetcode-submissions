class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> tracker;
        for(auto & i : nums) {
            tracker.insert(i);
        }
        int maxLen = 0;
        int curLen = 0;
        int curTerm = 0;
        for(auto & i : nums) {
            curTerm = i;
            while(tracker.count(curTerm) > 0) {
                curTerm++;
                curLen++;
            }
            if(curLen > maxLen) maxLen = curLen;
            curLen = 0;
        }
        return maxLen;
    }
};
