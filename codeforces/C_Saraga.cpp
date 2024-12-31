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
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    map<char, int> mp;
    for (int i = 1; i < n; i++) {
        if (!mp[s[i]]) 
            mp[s[i]] = i;
    }

    int mn = n + m + 1;
    string ans;
    for (int i = 0; i < m - 1; i++) {
        if (mp[t[i]] && mp[t[i]] + m - i < mn) {
            mn = mp[t[i]] + m - i;
            ans = s.substr(0, mp[t[i]]) + t.substr(i, m);
        }
    }

    if (mn < n + m + 1) 
        cout << ans << el;
    else 
        cout << -1 << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}