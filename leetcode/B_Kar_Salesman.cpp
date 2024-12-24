#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end(), greater<int>());
        int ans = 0;
        int i = 0;
        while (i < n)
        {
            int steps = 1, carry = 0, cur = arr[i];
            while (true) {
                i++;
                if (steps <= x) {carry += cur - arr[i];}
                steps++;
                if (steps > x && !carry) break;
            }
            ans += arr[i];
        }
        cout << ans << el;
    }
    return 0;
}