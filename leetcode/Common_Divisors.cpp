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
    ll gd = 0, cnt = 0;
    rep(i, n) {
        ll a; cin >> a;
        gd = __gcd(gd, a);
    }

    for (ll i = 1; i * i <= gd; i++)
    {
        if (gd % i == 0) {
            cnt++;
            if (gd / i != i) cnt++;
        }
    }
    cout << cnt << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}