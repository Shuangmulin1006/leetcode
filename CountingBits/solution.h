#include <vector>

class Solution
{
public:
    vector<int> countBits(int n)
    {
        if (n < 0)
            return vector<int>{};
        if (n == 0)
            return vector<int>{0};
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = count(i);
        }
        return ans;
    }

private:
    int count(int n)
    {
        int cnt = 0;
        if (n == 0)
            return 0;
        for (; n != 0; n >>= 1) {
            if (n & 0x01)
                cnt++;
        }
        return cnt;
    }
};