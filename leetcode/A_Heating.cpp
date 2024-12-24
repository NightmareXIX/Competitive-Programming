#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, ans;
        cin >> a >> b;
        int d = b / a;
        int rest = b % a;
        ans = rest * (d + 1) * (d + 1) + (a - rest) * d * d;
        cout << ans << el;
    }
    return 0;
}