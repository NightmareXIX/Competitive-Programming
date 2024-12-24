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
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 0; i < 16; i++) {
            if (n & (1LL << i)) ans |= (1LL << (31 - i));
            if (n & (1LL << (31 - i))) ans |= (1LL << i);
        }
        cout << ans << el;
    }
    return 0;
}