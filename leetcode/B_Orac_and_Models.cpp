#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 1; i <= (n); i++)
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
    int n;
    cin >> n;
    vi arr(n + 1), sum(n + 1, 1);
    rep(i, n) cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        int mx = 0;
        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                if (arr[i] > arr[j]) 
                    mx = max(mx, sum[j]);
                if (arr[i] > arr[i / j])
                    mx = max(mx, sum[i / j]);
            }
        }
        sum[i] += mx;
    }
    // print(sum);
    cout << *max_element(all(sum)) << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}