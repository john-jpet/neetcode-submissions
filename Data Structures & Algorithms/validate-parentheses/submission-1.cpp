class Solution {
public:
    char getLast(vector<char> opens) {
        return opens[opens.size() - 1];
    }
    bool isValid(string s) {
        vector<char> opens;
        for(auto & c : s) {
            if(c == '(' || c == '[' || c == '{') {
                opens.push_back(c);
            }
            if(c == ')') {
                if(opens.size() == 0) return false;
                if(getLast(opens) != '(') return false;
                opens.pop_back();
            }
            if(c == ']') {
                if(opens.size() == 0) return false;
                if(getLast(opens) != '[') return false;
                opens.pop_back();
            }
            if(c == '}') {
                if(opens.size() == 0) return false;
                if(getLast(opens) != '{') return false;
                opens.pop_back();
            }
        }
        if(opens.size() != 0) return false;
        return true;
    }
};
