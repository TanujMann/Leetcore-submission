class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> row(numRows);
        int i = 0, d = 1;

        for (char c : s) {
            row[i] += c;
            if (i == 0) d = 1;
            else if (i == numRows - 1) d = -1;
            i += d;
        }

        string ans;
        for (string &r : row) ans += r;
        return ans;
    }
};