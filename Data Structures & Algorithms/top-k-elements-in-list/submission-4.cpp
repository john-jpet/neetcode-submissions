class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> r(k+1);
        map<int, int> freq;
        vector<int> f(k+1);
        for(auto i : nums) {
            freq[i]++;
        }
        for(auto i : freq) {
            int idx = 1;
            while(idx < f.size()) {
                if(i.second > f[idx]) {
                    f[idx - 1] = f[idx];
                    r[idx - 1] = r[idx];
                    f[idx] = i.second;
                    r[idx] = i.first;
                }
                idx++;
            }
        }
        vector<int> re;
        for(int i = 1; i < r.size(); i++) {
            re.push_back(r[i]);
        }
        return re;
    }
};
