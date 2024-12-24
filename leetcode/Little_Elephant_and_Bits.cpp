#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        string s, t = "";
        cin >> s;
        int n = s.size(), ch = 1;
        for (int i = 0; i < n - 1; i++) {
            if (ch && s[i] == '0') {
                ch = 0; continue;
            }
            t += s[i];
        }
        if (!ch) t += s[n - 1];
        cout << t << el;
    }
    return 0;
}