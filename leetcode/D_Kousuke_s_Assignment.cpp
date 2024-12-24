#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long

auto comp = [] (const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        rep(i, n) cin >> arr[i];

        map<ll, int> mp;
        ll prefsum = 0;
        int cnt = 0, le = -1;
        for (int i = 0; i < n; i++) {
            prefsum += arr[i];
            int idx = -1;
            if (mp.find(prefsum) != mp.end()) 
                idx = mp[prefsum] + 1;
            else if (!arr[i]) 
                idx = i;
            else if (!prefsum) 
                idx = 0;

            if (idx > le) {
                cnt++; le = i;
            }
            mp[prefsum] = i;
        }
        cout << cnt << el;
    }
    return 0;
}