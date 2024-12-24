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
    ll n, b, c;
    cin >> n >> b >> c;

    if (c >= n) {
        cout << n << el;
        return;
    }

    if (!b && !c) {
        cout << (n < 3 ? n - 1 : -1) << el;
        return;
    }

    if (!b && c) {
        if (c >= n - 2) cout << n - 1 << el;
        else cout << -1 << el;
        return;
    }

    ll ans = (n - c) / b;
    if (b * ans + c < n) ans++;
    cout << max(n - ans, (ll)0) << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}