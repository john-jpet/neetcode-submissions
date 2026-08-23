class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> tracker;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> results;
        for(const auto & i : nums) {
           tracker[i]++;
        }
        for(const auto & pair : tracker) {
            buckets[pair.second].push_back(pair.first);
        }
        for(int i = (int)buckets.size() - 1; i >= 1 && (int)results.size() < k; --i) {
            for(int n : buckets[i]) {
                results.push_back(n);
                if((int)results.size() >= k) break;
            }
        }
        return results;
    }
};
