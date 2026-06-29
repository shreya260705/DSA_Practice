class Solution {
public:
    int minSwaps(vector<int>& a) {
        int n = a.size(), ones = 0;
        for (int x : a) ones += x;

        if (ones <= 1) return 0;

        int cur = 0, mx = 0;
        for (int i = 0; i < n + ones; i++) {
            cur += a[i % n];
            if (i >= ones) cur -= a[(i - ones) % n];
            if (i >= ones - 1) mx = max(mx, cur);
        }
        return ones - mx;
    }
};