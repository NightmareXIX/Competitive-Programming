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
    int n, q;
    cin >> n >> q;
    vi arr(n + 1);
    map<ll, ll> mp;
    forn(i, n) cin >> arr[i];
    arr[n] = arr[n - 1] + 1;
    for (int i = 0; i < n; i++) {
        ll segcnt = n - i - 1 + i * (ll)(n - i);
        mp[segcnt]++;
        if (arr[i] + 1 == arr[i + 1]) continue;
        segcnt = (i + 1) * (ll)(n - i - 1);
        mp[segcnt] += arr[i + 1] - arr[i] - 1;
    }

    forn(i, q) {
        ll a; cin >> a;
        cout << mp[a] << ws;
    }
    cout << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}