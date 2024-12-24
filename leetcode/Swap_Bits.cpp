#include <bits/stdc++.h>
using namespace std;

void solve() {
    unsigned int n;
    cin >> n;
    unsigned int ans = 0;
    for (int i = 0; i < 30; i += 2) {
        unsigned int a, b;
        a = (n >> i) & 1;
        a = a << (i + 1);

        b = (n >> (i + 1)) & 1;
        b = b << i;

        ans = ans | a | b;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
        solve();
    return 0;
}