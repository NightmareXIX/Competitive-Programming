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
    int n;
    cin >> n;
    vi arr(n);
    forn(i, n) cin >> arr[i];

    int mx1 = 0, mx2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) mx1 = max(mx1, arr[i]);
        else mx2 = max(mx2, arr[i]);
    } 

    mx1 = mx1 + (n + 1) / 2;
    mx2 = mx2 + n / 2;
    cout << max(mx1, mx2) << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}