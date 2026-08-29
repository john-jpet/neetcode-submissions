class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        stack<int> is;
        vector<int> r(temperatures.size());
        s.push(temperatures[0]);
        is.push(0);
        for(int i = 1; i < temperatures.size(); i++) {
            while(s.size() > 0 && temperatures[i] > s.top()) {
                r[is.top()] = i - is.top();
                s.pop();
                is.pop();
            }
            s.push(temperatures[i]);
            is.push(i);
        }
        return r;
    }
};
