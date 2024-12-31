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

template <class T>
void print(T &a)
{
    for (auto x : a)
        cout << x.first << ws << x.second << " \n";
    cout << "\n";
}

void solve(int tc)
{
    int n;
    cin >> n;
    vl psum(n + 1);
    ll cnt = 0;
    map<ll, ll> mp;
    mp[0]++;
    rep(i, n)
    {
        int a;
        cin >> a;
        psum[i + 1] = psum[i] + a;
        ll baki = psum[i + 1] % n;
    
        if (!mp[baki]) {
            baki = baki > 0 ? baki - n : n + baki;
        }
        cnt += mp[baki];
        mp[baki]++;
    }
    cout << cnt << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}