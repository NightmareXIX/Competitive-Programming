#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define lld long double
#define el '\n'
#define ws " "
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    forn(i, k) cin >> arr[i];
    if (n == 1 || k == 1) {
        yes; return;
    }
    int diff = arr[1] - arr[0];
    for (int i = 1; i < k; i++) {
        if (arr[i] - arr[i - 1] < diff) {
            no; return;
        }
        diff = arr[i] - arr[i - 1];
    }

    int prev = ceil((double)arr[0] / (n - k + 1));
    if (prev > arr[1] - arr[0]) no;
    else yes;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}