class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> r;
        set<vector<int>> t;
        int i1=0, i2=0;
        for (auto i : nums) {
            i2=0;
            unordered_map<int, int> tracker;
            for (auto j : nums) {
                if(i2 == i1) continue;
                int k = 0 - (i + j);
                if(tracker.contains(k)) {
                    if(tracker[k] == i2) continue;
                    if(min(min(i, j), k) == i) {
                        if(!t.contains({i, min(j,k), max(j,k)})) {
                            r.push_back({i, min(j,k), max(j,k)});
                            t.insert({i, min(j,k), max(j,k)});
                        }
                    }
                    if(min(min(i, j), k) == j) {
                        if(!t.contains({j, min(i,k), max(i,k)})) {
                            r.push_back({j, min(i,k), max(i,k)});
                            t.insert({j, min(i,k), max(i,k)});
                        }
                    }
                    if(min(min(i, j), k) == k) {
                        if(!t.contains({k, min(j,i), max(j,i)})) {
                            r.push_back({k, min(j,i), max(j,i)});
                            t.insert({k, min(j,i), max(j,i)});
                        }
                    }
                }
                tracker[j] = i2;
                i2++;
            }
            i1++;
        }

        return r;
    }
};
