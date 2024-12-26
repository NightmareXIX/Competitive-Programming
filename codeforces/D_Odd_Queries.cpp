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
    int n, q;
    cin >> n >> q;
    vl arr(n), psum(n + 1);
    
    rep(i, n) {
        cin >> arr[i];
        psum[i + 1] = psum[i] + arr[i];
    }
    
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        ll baki = psum[n] - (psum[r] - psum[l - 1]) + k * (r - l + 1);
        
        if (baki & 1) yes;
        else no;
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