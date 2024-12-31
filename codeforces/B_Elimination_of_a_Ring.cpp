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
    int n, cnt = 0;
    cin >> n;
    vi arr(n);
    unordered_map<int, int> ump;
    rep(i, n) {
        cin >> arr[i];
        if (!ump[arr[i]]) cnt++;
        ump[arr[i]] = 1;
    }
    if (n == 1) {
        cout << 1 << el;
    }
    else if (cnt > 2) {
        cout << n << el;
    }
    else {
        cout << 2 + (n - 2) / 2 << el;
    }
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}