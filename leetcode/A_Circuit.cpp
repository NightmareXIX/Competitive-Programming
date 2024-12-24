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
    int n, cnt = 0;
    cin >> n;
    rep(i, 2 * n) {
        int a; cin >> a;
        if (a) cnt++;
    }
    int mx = min(cnt, n), mn = cnt % 2;
    if (cnt > n) mx -= cnt - n;
    cout << mn << ws << mx << el;

}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}