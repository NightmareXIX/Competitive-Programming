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

void solve(int tc)
{
    ll n, m;
    cin >> n >> m;
    vi arr(n);
    map<int, int> mp;
    forn(i, n) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0;
    for (auto pair : mp) {
        ll x = pair.first, cnt = pair.second;
        for (int i = 1; i <= min(cnt, m / x); i++) {
            ll val1 = x * i;
            ll val2 = (x + 1) * min((ll)mp[x + 1], (m - val1) / (x + 1));
            ans = max(ans, val1 + val2);
        }
    }
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