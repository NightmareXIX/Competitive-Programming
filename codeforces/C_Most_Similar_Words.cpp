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
    vector<string> arr(n);

    forn(i, n) cin >> arr[i];

    int mx = INT_MAX; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int val = 0;
            for (int k = 0; k < m; k++) {
                val += abs(arr[i][k] - arr[j][k]);
            }
            mx = min(mx, val);
        }
    }
    cout << mx << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}