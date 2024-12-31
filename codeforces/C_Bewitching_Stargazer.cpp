#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair
#define ii pair<int, int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<int> vi;
typedef vector<ll> vl;

template<class T>
void print(T& a)
{
    for(auto x : a)
        cout << x << " ";
    cout << "\n";
}

ll ans;
map<pair<int, int>, ll> dp;

void luckyValue(int l, int r, int k) {
    int len = r - l + 1;
    int m = (r + l) / 2;
    if (len < k)
        return;
    if (dp[{r, k}]) {
        ans += dp[{r, k}];
        return;
    }
    if (len & 1) {
        ans += m;
        dp[{r, k}] = ans;
        luckyValue(l, m - 1, k);
        luckyValue(m + 1, r, k);
    }
    else {
        luckyValue(l, m, k);
        luckyValue(m + 1, r, k);
    }
}

void solve(int tc)
{
    int n, k;
    cin >> n >> k;
    ans = 0;
    luckyValue(1, n, k);
    cout << ans << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}