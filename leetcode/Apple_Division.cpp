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
    int n;
    cin >> n;
    vi arr(n);
    rep(i, n) cin >> arr[i];
    ll ans = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++) {
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum1 += arr[i];
            }
            else 
                sum2 += arr[i];
        }
        ans = min(ans, abs(sum1 - sum2));
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