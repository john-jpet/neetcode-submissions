class Solution {
public:
    int area(vector<int> & h, int l, int r) {
        return (min(h[l], h[r]) * (r-l));
    }
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int re = 0;
        while(l < r) {
            int a = area(heights, l, r);
            if(a > re) re = a;
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return re;
    }
};
