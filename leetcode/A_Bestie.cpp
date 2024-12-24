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
    int n, gc = 0;
    cin >> n;
    vi arr(n);
    rep(i, n) {
        cin >> arr[i];
        gc = gcd(gc, arr[i]);
    }
    if (gc == 1) {
        cout << 0 << el;
    }
    else if (gcd(gc, gcd(arr[n - 1], n)) == 1) {
        cout << 1 << el;
    }
    else if (gcd(gc, gcd(arr[n - 2], n - 1)) == 1) {
        cout << 2 << el;
    }
    else 
        cout << 3 << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}