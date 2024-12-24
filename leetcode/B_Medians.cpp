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
    if (n == 1) {
        cout << 1 << el << 1 << el;
        return;
    }
    if (k == 1 || k == n) {cout << -1 << el; return;}
    if (k & 1) {
        cout << 5 << el;
        if (k - 1 <= 2) cout << 1 << ws << 2 << ws;
        else cout << 1 << ws << 4 << ws;
        cout << k << ws;
        if (n - k <= 2) cout << k + 1 << ws << k + 2 << el;
        else cout << k + 1 << ws << k + 4 << el;
    }
    else {
        cout << 3 << el;
        cout << 1 << ws << k << ws << k + 1 << el;
    }
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}