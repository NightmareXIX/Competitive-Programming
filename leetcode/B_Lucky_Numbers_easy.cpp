#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long

ll custom_stoi(string s) {
    ll sum = 0;

    for (char c : s) {
        ll digit = c - '0';
        sum = sum * 10 + digit;
    }
    return sum;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n & 1) {
            for (int i = 0; i < (n + 1); i++) {
                if (i < (n + 1) / 2) cout << 4;
                else cout << 7;
            }
            cout << el;
        }
        else {
            ll limit = 1 << n, cmp = custom_stoi(s);
            for (ll mask = 0; mask < limit; mask++) {
                int cnt = 0; string ans = "";
                for (ll i = n - 1; i >= 0; i--) {
                    if (mask & (1 << i)) 
                    {
                        cnt++;
                        ans += '7';
                    }
                    else {
                        cnt--;
                        ans += '4';
                    }
                }
                if (!cnt && custom_stoi(ans) >= cmp) {
                    cout << ans << el;
                    return 0;
                }
            }
            n += 2;
            for (int i = 0; i < n; i++) {
                if (i < n / 2) cout << 4;
                else cout << 7;
            }
            cout << el;
        }
    }
    return 0;
}