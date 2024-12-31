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
    int n;
    cin >> n;
    vector<string> arr(n);
    map<string, int> mp;
    rep(i, n) {
        cin >> arr[i];
        mp[arr[i]] = 1;
    }

    for (int i = 0; i < n; i++) {
        int sz = arr[i].size(), ch = 0;
        for (int j = 1; j < sz; j++) {
            string pref = arr[i].substr(0, j), suff = arr[i].substr(j, sz - j);
            if (mp[pref] && mp[suff]) ch = 1;
        }
        cout << ch;
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