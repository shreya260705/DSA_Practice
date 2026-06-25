class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        if((mx-k) - (mn+k) > 0)
            return (mx-k) - (mn+k);
        return 0;
    }
};