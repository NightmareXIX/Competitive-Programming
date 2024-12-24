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
    int n, m, k;
    cin >> n >> m >> k;
    vi list(m), mp(n + 1);

    rep(i, m) cin >> list[i];
    rep(i, k) {
        int a; cin >> a;
        mp[a] = 1;
    }

    if (n == k) {
        for (int i = 0; i < m; i++) 
            cout << 1;
    }
    else if (n - 1 == k) {
        for (int val : list) {
            if (mp[val] == 0) cout << 1;
            else cout << 0;
        }
    }
    else {
        for (int i = 0; i < m; i++) 
            cout << 0;
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