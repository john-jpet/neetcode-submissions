class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto i : tokens) {
            if(i == "+") {
                int xer = s.top();
                s.pop();
                s.top() += xer;
            }
            else if(i == "-") {
                int xer = s.top();
                s.pop();
                s.top() -= xer;
            }
            else if(i == "*") {
                int xer = s.top();
                s.pop();
                s.top() *= xer;
            }
            else if(i == "/") {
                int xer = s.top();
                s.pop();
                s.top() /= xer;
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};
