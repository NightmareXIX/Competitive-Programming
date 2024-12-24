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
    int n;
    cin >> n;
    vi arr(n);
    ll totsum = 0, evsum = 0, oddsum = 0;
    rep(i, n)
    {
        cin >> arr[i];
        totsum += arr[i];
        if ((i + 1) & 1)
            oddsum += arr[i];
        else
            evsum += arr[i];
    }

    int ecnt = n / 2, ocnt = (n + 1) / 2;
    if (evsum % ecnt != 0 || oddsum % ocnt != 0 || evsum / ecnt != oddsum / ocnt)
        no;
    else
        yes;
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