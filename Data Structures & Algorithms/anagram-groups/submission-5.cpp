class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> r;
        map<vector<int>, int> freq;
        int idx = 0;
        for(auto i : strs) {
            vector<int> ifreq (26);
            for (auto c : i) {
                ifreq[c - 'a']++;
            }
            if(freq.contains(ifreq)) {
                r[freq[ifreq]].push_back(i);
            } else {
                freq.insert({ifreq, idx});
                idx++;
                r.push_back({i});
            }
        }
        return r;

    }
};
