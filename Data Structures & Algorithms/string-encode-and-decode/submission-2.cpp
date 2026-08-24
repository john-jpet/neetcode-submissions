class Solution {
public:

    string encode(vector<string>& strs) {

        string codedString = "";
        for(auto i : strs) {
            codedString += to_string(i.size());
            codedString += "#";
            codedString += i;
        } 
        return codedString;

    }

    vector<string> decode(string s) {

        vector<string> decoded;
        int idx = 0;
        while(idx < s.size()) {
            string num = "";
            int numb = 0;
            while(s[idx] != '#') {
                num += s[idx];
                idx++;
            }
            idx++;
            numb = stoi(num);
            string item = s.substr(idx, numb);
            decoded.push_back(item);
            idx += numb;
        }
        return decoded;

    }
};