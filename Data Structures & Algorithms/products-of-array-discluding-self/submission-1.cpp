class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zcount = 0;
        int zpos = -1;
        int prod = 1;
        vector<int> r;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zcount++;
                zpos = i;
            } else {
                prod *= nums[i];
            }
        }
        for(auto i : nums) {
            if(zcount > 1) {
                r.push_back(0);
                continue;
            }
            if(i == 0) {
                r.push_back(prod);
                continue;
            }
            if(zcount == 1) {
                r.push_back(0);
                continue;
            }
            r.push_back(prod / i);
        }
        return r;
    }
};
