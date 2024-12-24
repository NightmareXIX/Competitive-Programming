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
    int n;
    cin >> n;
    int mx1 = 0, mx2 = 0;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        mx1 = max(mx1, x);
        mx2 = max(mx2, y);
    }
    cout << (mx1 + mx2) * 2 << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}