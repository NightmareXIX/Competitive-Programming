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
        int n;
        cin >> n;
        int mod = 1e9 + 7;
        ll result = 1, base = 2;
        while(n > 0) {
            if (n & 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            n >>= 1;
        }
        cout << result << el;
    }
    return 0;
}