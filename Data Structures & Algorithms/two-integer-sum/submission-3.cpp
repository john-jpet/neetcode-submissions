class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> tracker;
        vector<int> r;
        for(int i = 0; i < nums.size(); i++) {
            if(tracker.contains(target - nums[i])) {
                r.push_back(tracker[target - nums[i]]);
                r.push_back(i);
                return r;
            }
            tracker.insert({nums[i], i});
        }
    }
};
