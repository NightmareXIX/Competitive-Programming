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
    sort(arr.begin(), arr.end());
    if (arr[0] + arr[1] > arr[n - 1]) {cout << 0 << el; return;}
    // rep(i, n) cout << arr[i] << ws;
    // cout << el;
    int ans = n;
    for (int i = 0; i < n; i++) {
        auto itr1 = lower_bound(arr.begin(), arr.end(), arr[i] * 2);
        int dis1 = arr.end() - itr1 + i;
        if (i > 0 && arr[i] + arr[i - 1] > *(itr1 - 1)) dis1--;
        // cout << dis1 << el;
        ans = min(ans, dis1);
    }
    cout << ans << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}