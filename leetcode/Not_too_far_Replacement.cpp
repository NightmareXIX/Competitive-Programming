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
        int n;
        cin >> n;
        int sum = 0, last;
        vector<int> arr(n + 1);
        rep(i, n + 1) {cin >> arr[i]; sum += arr[i];}
        last = arr[n];
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n + 1; i++) {
            if (arr[i] <= last) continue;
            else if (arr[i] <= last * 2) {
                last = arr[i];
            }
            else break;
        }
        sum -= last;
        cout << sum << el;
    }
    return 0;
}