#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define ii pair<int, int>
#define el '\n'
#define ws " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pbk push_back
#define mkp make_pair
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
    int n, cost = 0;
    cin >> n;
    vi arr(n + 1), ind(n + 1);
    vector<ii> swaps;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ind[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ind[i] == i)
            continue;
        int val = (i | ind[i]), pivot = 1;
        while (pivot & val)
            pivot <<= 1;
        if (pivot > n)
        {
            cost++;
            pivot = 1;
        }
        swaps.pbk({pivot, ind[i]});
        swaps.pbk({pivot, i});
        swaps.pbk({pivot, ind[i]});

        ind[arr[i]] = ind[i];
        swap(arr[i], arr[ind[i]]);
        ind[i] = i;
    }
    cout << cost << el;
    cout << swaps.size() << el;
    for (auto pair : swaps)
        cout << pair.first << ws << pair.second << el;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}