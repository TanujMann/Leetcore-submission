class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string a = strs[0], b = strs.back(), ans = "";
        for (int i = 0; i < min(a.size(), b.size()); i++) {
            if (a[i] != b[i]) break;
            ans += a[i];
        }
        return ans;
    }
};