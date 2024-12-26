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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    int diff = abs(a - b);
    if (!diff)
    {
        cout << 0 << el;
        return;
    }
    else if (diff >= x)
    {
        cout << 1 << el;
        return;
    }

    int la = abs(l - a), ra = abs(r - a);
    int lb = abs(l - b), rb = abs(r - b);

    if ((la < x && ra < x) || (lb < x && rb < x))
    {
        cout << -1 << el;
        return;
    }

    if ((la >= x && lb >= x) || (ra >= x && rb >= x))
        cout << 2 << el;
    else
        cout << 3 << el;
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