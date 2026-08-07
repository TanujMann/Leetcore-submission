class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int i = 2; i <= n; i++) {
            string temp = "";

            for (int j = 0; j < s.size(); ) {
                int k = j;

                while (k < s.size() && s[k] == s[j])
                    k++;

                temp += to_string(k - j);
                temp += s[j];

                j = k;
            }

            s = temp;
        }

        return s;
    }
};