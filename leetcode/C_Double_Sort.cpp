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

typedef vector<int> vi;
typedef vector<ll> vl;

void solve(int tc)
{
    int n;
    cin >> n;
    vi aa(n), bb(n);
    rep(i, n) cin >> aa[i];
    rep(i, n) cin >> bb[i];
    vector<vi> mtx(n, vi(3));
    rep(i, n) {
        mtx[i] = {i, aa[i], bb[i]};
    }

    vector<pair<int, int>> moves;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mtx[i][1] > mtx[j][1]) {
                moves.pbk({mtx[i][0], mtx[j][0]}); 
                swap(mtx[i], mtx[j]);
            }
            else if (mtx[i][1] == mtx[j][1] && mtx[i][2] > mtx[j][2]) {
                moves.pbk({mtx[i][0], mtx[j][0]}); 
                swap(mtx[i], mtx[j]);
            }
        }
    }
    rep(i, n - 1) {
        if (mtx[i][2] > mtx[i + 1][2]) {
            cout << -1 << el;
            return;
        }
    }
    int k = moves.size();
    if (k > 1e4) {cout << -1 << el; return;}
    cout << k << el;
    for (int i = k - 1; i >= 0; i--) 
        cout << moves[i].first + 1 << ws << moves[i].second + 1 << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}