#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int dp[1001][1001];

int solve(int arr[], int i, int j) {
    if (i >= j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int mn = INT_MAX;

    for (int k = i; k < j; k++) {
        int temp = solve(arr, i, k)
                 + solve(arr, k + 1, j)
                 + arr[i - 1] * arr[k] * arr[j];

        mn = min(mn, temp);
    }

    return dp[i][j] = mn;
}

int main() {
    memset(dp, -1, sizeof(dp));

    int arr[] = {40, 20, 30, 10, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << solve(arr, 1, size - 1);

    return 0;
}