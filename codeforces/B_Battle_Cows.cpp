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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    forn(i, n) cin >> arr[i];

    int ind1 = -1, ind2 = n + 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[k - 1]) {
            if (ind1 == -1) 
                ind1 = i + 1;
            else if (ind2 > n)
                ind2 = i + 1;
        }
    }

    if (ind1 == -1) 
        cout << n - 1 << el;
    else if (ind1 > k) 
        cout << ind1 - 2 << el;
    else {
        int dis1 = ind1 - k - 1; 
        int dis2 = min(ind2, k) - ind1 - 1;
        int res = max(dis1, dis2) + (ind1 != 1); 
        cout << max(ind1 - 2, res) << el;
    }
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}