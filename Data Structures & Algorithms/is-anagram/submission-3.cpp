class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tracker;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++) {
            tracker[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++) {
            tracker[t[i]]--;
        }
        for(auto s : tracker) {
            if (s.second != 0) return false;
        }
        return true;
    }
};
