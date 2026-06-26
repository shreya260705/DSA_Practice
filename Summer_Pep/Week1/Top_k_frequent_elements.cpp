Top K Frequent Elements
Input
nums = [1,1,1,2,2,3]
k = 2
Output
[1,2]
#include <bits/stdc++.h>
using namespace std;
vector<int> top (vector<int>&nums,int k){
    unordered_map<int,int>freq;
    for(int x:nums){
        freq++;
    }
    vector<pair<int,int>>a;
    for(auto it: freq){
        arr.push_back(it.second,it.first);
    }
    
}