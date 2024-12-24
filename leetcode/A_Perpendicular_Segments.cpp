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
    int x, y, k;
    cin >> x >> y >> k;
    int len = min(x, y);
    if (len >= k) {
        cout << 0 << ws << 0 << ws << k << ws << 0 << el;
        cout << 0 << ws << 0 << ws << 0 << ws << k << el;
    }
    else {
        cout << 0 << ws << 0 << ws << len << ws << len << el;
        cout << len << ws << 0 << ws << 0 << ws << len << el;
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