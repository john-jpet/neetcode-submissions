class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size() - 1;
        int comparer = 0;
        while(begin < end) {
            comparer = numbers[begin] + numbers[end];
            if(comparer < target) begin++;
            if(comparer > target) end--;
            if(comparer == target) {
                vector<int> solution;
                solution.push_back(begin + 1);
                solution.push_back(end + 1);
                return solution;
            }
        }
    }
};
