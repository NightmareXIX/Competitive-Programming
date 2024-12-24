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
        ll left = 0, right = 2e18;
        while (right - left > 1) {
            ll mid = (left + right) >> 1;
            // cout << mid << el;
            ll k = mid - int(sqrtl(mid));
            if (k >= n) {
                right = mid;
            }
            else {
                left = mid;
            }
        }
        cout << right << el;
    }
    return 0;
}