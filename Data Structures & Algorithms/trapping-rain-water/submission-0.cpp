class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixes(height.size());
        vector<int> suffixes(height.size());
        int curmax = height[0];
        int r = 0;
        prefixes[0] = height[0];
        for(int i = 1; i < height.size(); i++) {
            curmax = max(height[i], curmax);
            prefixes[i] = curmax;
        }
        curmax = height[height.size() - 1];
        suffixes[suffixes.size() - 1] = height[height.size() - 1];
        for(int i = height.size() - 2; i >= 0; i--) {
            curmax = max(height[i], curmax);
            suffixes[i] = curmax;
        }
        for(int i = 0; i < height.size(); i++) {
            r += min(prefixes[i], suffixes[i]) - height[i];
        }
        return r;
    }
};
