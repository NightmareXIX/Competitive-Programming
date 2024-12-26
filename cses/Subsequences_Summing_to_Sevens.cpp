#include <bits/stdc++.h>
#include <iostream>
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
    int n;
    cin >> n;
    vl psum(n + 1);
    rep(i, n) {
        int x; cin >> x;
        psum[i + 1] = psum[i] + x;
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if ((psum[i] - psum[j]) % 7 == 0) 
                mx = max(mx, i - j);
        }
    }
    cout << mx << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    for (int i = 1; i <= t; i++)
        solve(i);
}