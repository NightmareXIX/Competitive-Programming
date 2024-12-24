#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, l, r, x;
        cin >> n >> l >> r >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        // sort(arr.begin(), arr.end());
        int poss = 0;
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0, mn = INT_MAX, mx = INT_MIN;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += arr[i];
                    mx = max(mx, arr[i]);
                    mn = min(mn, arr[i]);
                }
            }
            if (sum >= l && sum <= r && (mx - mn) >= x) poss++;
        }
        cout << poss;
    }
}