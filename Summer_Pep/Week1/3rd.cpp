// int arr[]={12,32,55,1,26,53,78 } key =53
// find the key in array using linear search,if key is found and value of key>20 then return double value of key else return half value of key
#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (arr[i] > 20) {
                return arr[i] * 2;   
            } else {
                return arr[i] / 2;   
            }
        }
    }
    return -1; 
}

int main() {
    int arr[] = {12, 32, 55, 1, 26, 53, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 53;

    int result = linearsearch(arr, n, key);

    if (result != -1)
        cout << "Result: " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}
