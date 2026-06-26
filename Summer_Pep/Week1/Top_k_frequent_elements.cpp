#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

    
        for (int x : nums)
            mp[x]++;

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it : mp)
            bucket[it.second].push_back(it.first);

        vector<int> ans;
        for (int i = nums.size(); i >= 1 && ans.size() < k; i--) {
            for (int x : bucket[i]) {
                ans.push_back(x);
                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};