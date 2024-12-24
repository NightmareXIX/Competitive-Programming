#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n, 0);
        unordered_map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a < n) arr[a]++;
        }
        int mex = n;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 1) {
                if (arr[i] > 1 && i + x < n) {
                    arr[i + x] += arr[i] - 1;
                    arr[i] = 1;
                }
            }
            else {
                mex = i;
                break;
            }
        }
        // for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << el;
        cout << mex << el;
    }
    return 0;
}