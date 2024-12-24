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
    int n, a = 0, b = 0, lcm = INT_MAX;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int x = i, y = n / i;
            int lcm1 = (n - x) / gcd(x, n - x) * x;
            int lcm2 = (n - y) / gcd(y, n - y) * y;
            int mn = min(lcm1, lcm2);
            if (mn < lcm) {
                if (mn == lcm1) {a = x, b = n - x;}
                else {a = y, b = n - y;}
                lcm = mn;
            }
        }
    }
    if (n - 1 < lcm) {
        cout << 1 << ws << n - 1 << el;
    }
    else {
        cout << a << ws << b << el;
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