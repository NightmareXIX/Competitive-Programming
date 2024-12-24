#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        int tc;
        cin >> tc;
        vector<int> n(tc), k(tc);
        for (int i = 0; i < tc; i++) cin >> n[i];
        for (int i = 0; i < tc; i++) cin >> k[i];
        long long mod = 1e9 + 7;
        for (int i = 0; i < tc; i++) {
            long long b = k[i], a = 2, ans = 1;
            while (b > 0) {
                if (b & 1) {
                    ans = (a * ans) % mod;
                }
                b = b >> 1;
                a = (a * a) % mod;
            }
            cout << ans << el;
        }
    }
    return 0;
}