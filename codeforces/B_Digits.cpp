#include <bits/stdc++.h>
#include <iostream>
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
    int n, d, fact = 1;
    cin >> n >> d;
    for (int i = 1; i <= min(n, 9); i++) {
        fact *= i;
    }
    // cout << fact << el;
    cout << 1 << ws;
    if (fact % 3 == 0 || d % 3 == 0) cout << 3 << ws;
    if (d % 5 == 0) cout << 5 << ws;
    if (fact % 6 == 0 || d % 7 == 0) cout << 7 << ws;
    if (fact % 9 == 0 || (d % 3 == 0 && n >= 3) || d % 9 == 0) cout << 9;
    cout << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}