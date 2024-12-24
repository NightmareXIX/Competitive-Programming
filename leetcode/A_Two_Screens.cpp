#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int cnt = 0, n = min(s.size(), t.size());
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) break;
            cnt++;
        }
        int ans = cnt + s.size() - cnt + t.size() - cnt + (bool)cnt;
        cout << ans << el;
    }
    return 0;
}