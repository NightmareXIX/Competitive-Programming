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
    map<int, int> mp;
    rep(i, k) {
        int b, c;
        cin >> b >> c;
        mp[b] += c;
    }
    vector<pair<int, int>> vec;
    for (auto pr : mp) {
        vec.pbk({pr.first, pr.second});
    }
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    // rep(i, vec.size()) {
    //     cout << vec[i].first << " " << vec[i].second << el;
    // }
    // cout << el;
    ll ans = 0;
    for (int i = 0; i < min((int)vec.size(), n); i++) {
        ans += vec[i].second;
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