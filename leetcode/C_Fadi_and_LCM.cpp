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
    ll n, mn = 1e13, x = 0, y = 0;
    cin >> n;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ll a = i, b = n / i;
            ll lcm = b / gcd(a, b) * a;
            if (lcm == n && min(a, b) < mn) {
                x = a, y = b;
            }
        }
    }
    cout << x << ws << y << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}