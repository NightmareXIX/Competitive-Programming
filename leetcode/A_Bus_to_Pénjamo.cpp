#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector<int> arr(n);
        int  s = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] & 1) s++;
            if (arr[i] >= 2){ r -= arr[i] / 2; ans += 2 * (arr[i] / 2);}
        }
        while (s > r) { r--; s -= 2;}
        ans += s;
        cout << ans << el;
    }
    return 0;
}