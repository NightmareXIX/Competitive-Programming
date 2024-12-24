#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair

typedef vector<int> vi;
typedef vector<ll> vl;

void solve(int tc)
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        arr.pbk({a, b});
    }
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sumw = 0, sumv = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sumw += arr[i].first;
                sumv += arr[i].second;
            }
        }
        if (sumw <= k) ans = max(sumv, ans);
    }
    cout << ans << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}