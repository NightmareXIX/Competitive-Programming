#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        rep(i, n) cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << (arr[n - 1] - arr[0]) * (n - 1) << el;
    }
    return 0;
}