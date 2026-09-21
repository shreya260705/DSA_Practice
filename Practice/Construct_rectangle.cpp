class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mn = INT_MAX;
        vector<int> ans(2);

        for(int i = 1; i * i <= area; i++) {
            if(area % i == 0) {

                if(mn > (area / i) - i) {
                    mn = (area / i) - i;
                    ans[0] = area / i;
                    ans[1] = i;
                }
            }
        }

        return ans;
    }
};
