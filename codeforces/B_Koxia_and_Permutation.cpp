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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    arr[k - 1] = 1;
    int boro = n, choto = 1;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            arr[i - 1] = choto;
            choto++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]) continue;
        arr[i] = boro;
        boro--;
    }
    print(arr);
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}