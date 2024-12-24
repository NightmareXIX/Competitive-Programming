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
    vi hop(n + 1, 0);
    map<int, int> mp;
    rep(i, n) {
        int a; cin >> a;
        mp[a]++;
    }

    for (auto itr : mp) {
        for (int j = itr.first; j <= n; j += itr.first) 
            hop[j] += itr.second;
    }

    int mx = INT_MIN;
    for (int i : hop) mx = max(mx, i);
    cout << mx << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}