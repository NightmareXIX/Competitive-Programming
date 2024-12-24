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
    vl arr(n);
    rep(i, n) {
        cin >> arr[i];
    }
    if (n == 1) {cout << 1 << el; return;}
    ll diff;
    if (n & 1) {
        diff = LLONG_MAX;
        for (int i = 0; i < n; i += 2) {
            ll mx = LLONG_MIN;
            for (int j = 0; j < i; j += 2)
                mx = max(mx, arr[j + 1] - arr[j]);
            for (int k = i + 1; k < n; k += 2) 
                mx = max(mx, arr[k + 1] - arr[k]);
            diff = min(diff, mx);
        }
    }
    else {
        diff = LLONG_MIN;
        for (int i = 0; i < n - 1; i += 2) 
            diff = max(diff, arr[i + 1] - arr[i]);
    }
    cout << diff << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}