#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair
#define ii pair<int, int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<int> vi;
typedef vector<ll> vl;

template <class T>
void print(T &a)
{
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
}

void solve(int tc)
{
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    forn(i, n) cin >> arr[i];
    sort(rall(arr));

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {sum += arr[i]; continue;}

        ll lagbe = min(k, arr[i - 1] - arr[i]);
        arr[i] += lagbe;
        k -= lagbe;
        sum -= arr[i];
    }
    cout << sum << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}