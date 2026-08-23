class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int completeProd = 1;
        bool existsZero = false, existsMultiZero = false;
        int completeProdNoZero = 1;
        for(auto n : nums) {
            completeProd *= n;
            if(n != 0) completeProdNoZero *= n;
            if(!existsZero && n == 0) existsZero = true;
            else if(existsZero && n == 0) existsMultiZero = true;
        }
        vector<int> newNums;
        for(auto n : nums) {
            
            if(n == 0 && !existsMultiZero) {
                newNums.push_back(completeProdNoZero);
            } else if (n == 0) {
                newNums.push_back(0);
            } else {
                newNums.push_back(completeProd / n);
            }
        }
        return newNums;
    }
};
