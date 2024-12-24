#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int even = 0, odd = 0, il = 0;
        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            int mx = max(a, b), mn = min(a, b);
            if (mx == mn + 1) {
                if (mn & 1) odd++;
                else even++;
            }
            else {
                il++;   
            }
            // handle case for last element
        }
        cout << il + min(even, odd) << el;
    }
    return 0;
}