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
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int a;
                cin >> a;
                mp[i - j] = min(a, mp[i - j]);
                // cout << mp[i - j] << el;
            }
        }
        int ans = 0;
        for (auto& pair : mp) {
            ans += abs(pair.second);
        }
        cout << ans << el;
    }
    return 0;
}