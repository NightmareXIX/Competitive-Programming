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
        int n, cnt = 1;
        cin >> n;
        vector<int> arr(n);
        rep(i, n) cin >> arr[i];
        int sub = n;
        for (int i = 0; i < n; i++) {
            if (i && arr[i] == arr[i - 1]) cnt++;
            else {
                sub += (cnt * (cnt + 1)) / 2 - cnt;
                cnt = 1;
            }
        }
        if (cnt > 1) {
            sub += (cnt * (cnt + 1)) / 2 - cnt;
        }
        cout << sub << el;
    }
    return 0;
}