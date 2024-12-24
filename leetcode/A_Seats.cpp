#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && i != 0 && i != n - 1 && s[i - 1] == '#' && s[i + 1] == '#') cnt++;
        }
        cout << cnt << el;
    }
    return 0;
}