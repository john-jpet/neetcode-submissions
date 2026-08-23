#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> tracker;
        for(int i = 0; i < nums.size(); i++) {
            if(tracker.contains(nums[i])) return true;
            tracker.insert(nums[i]);
        }
        return false;
    }
};