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
    int n;
    cin >> n;
    vi arr(2 * n), psum(2 * n + 1);
    vector<pair<int, int>> que;
    map<int, int> mp;
    forn(i, n)
    {
        int a, b;
        cin >> a >> b;
        que.pbk({a, b});
        if (a == b)
        {
            mp[a]++;
            arr[a - 1] = 1;
        }
    }

    for (int i = 0; i < 2 * n; i++)
    {
        psum[i + 1] = psum[i] + arr[i];
    }

    for (auto pr : que)
    {
        if (pr.first == pr.second)
        {
            if (mp[pr.first] > 1)
                cout << 0;
            else
                cout << 1;
        }
        else
        {
            if (psum[pr.second] - psum[pr.first - 1] >= pr.second - pr.first + 1)
                cout << 0;
            else
                cout << 1;
        }
    }
    cout << el;
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