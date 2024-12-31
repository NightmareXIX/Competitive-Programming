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

template<class T>
void print(T& a)
{
    for(auto x : a)
        cout << x << " ";
    cout << "\n";
}

void solve(int tc)
{
    int n, m;
    cin >> n >> m;
    vi arr(n), cmp(m);
    forn(i, n) cin >> arr[i];
    forn(i, m) cin >> cmp[i];
    sort(all(arr));
    sort(rall(cmp));

    ll sum = 0;
    int i = 0, j = n - 1, x = 0, y = m - 1;
    while (i <= j) {
        int l = abs(arr[i] - cmp[x]), r = abs(arr[j] - cmp[y]);
        if (l > r) {
            sum += l;
            i++; x++;
        } 
        else {
            sum += r;
            j--; y--;
        }
    }
    cout << sum << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}