#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define el '\n'
#define ws " "

void solve(int tc)
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1), b(n + 1), c(n + 1);

    rep(i, n)
    {
        int x;
        cin >> x;

        a[i + 1] = a[i] + (x == 1);
        b[i + 1] = b[i] + (x == 2);
        c[i + 1] = c[i] + (x == 3);
    }

    while (q--)
    {
        int l, u;
        cin >> l >> u;
        cout << a[u] - a[l - 1] << ws << b[u] - b[l - 1] << ws << c[u] - c[l - 1] << el;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // File I/O for USACO
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int t = 1;
    for (int i = 1; i <= t; i++)
        solve(i);

    return 0;
}
