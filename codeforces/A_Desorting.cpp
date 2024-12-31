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
    int n, ch = 0;
    cin >> n;
    vi arr(n);
    rep(i, n) {
        cin >> arr[i];
        if (i && arr[i] < arr[i - 1]) ch = 1;
    }
    if (ch) {
        cout << 0 << el;
        return;
    }
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        diff = min(diff, arr[i + 1] - arr[i]);
    }
    cout << diff / 2 + 1 << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}