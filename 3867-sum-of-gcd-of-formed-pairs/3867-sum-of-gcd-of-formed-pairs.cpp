class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> pre;
        int mx = 0;

        for (int x : nums) {
            mx = max(mx, x);
            pre.push_back(gcd(x, mx));
        }

        sort(pre.begin(), pre.end());

        long long ans = 0;
        int i = 0, j = pre.size() - 1;

        while (i < j) {
            ans += gcd(pre[i], pre[j]);
            i++;
            j--;
        }

        return ans;
    }
};