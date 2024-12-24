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
    if (n <= 4) {
        cout << -1 << el;
        return;
    }
    if (n == 5) {
        cout << "1 3 5 4 2" << el;
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            if (i != 3)
                cout << i << ws;
        }
        cout << "3 6" << ws;
        for (int i = 2; i <= n; i += 2) {
            if (i != 6)
                cout << i << ws;
        }
        cout << el;
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