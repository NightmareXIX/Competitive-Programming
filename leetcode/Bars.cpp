#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> arr(p);
        rep(i, p) cin >> arr[i];
        int ch = 1;
        for (int mask = 0; mask < (1 << p); mask++) {
            int sum = 0;
            for (int i = 0; (1 << i) <= mask; i++) {
                if (mask & (1 << i)) {
                    sum += arr[i];
                }
            }
            if (sum == n) {cout << "YES\n"; ch = 0; break;}
        }
        if (ch) cout << "NO\n";
    }
    return 0;
}