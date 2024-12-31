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
    vector<vector<int>> arr(n, vector<int>(n));
    int fw = 1, bk = n * n;

    for (int i = 0; i < n ; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0) {
                    arr[i][j] = fw; fw++;
                }
                else {
                    arr[i][j] = bk; bk--;
                }
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                if (j % 2 != 0) {
                    arr[i][j] = fw; fw++;
                }
                else {
                    arr[i][j] = bk; bk--;
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cout << arr[i][j] << ws;
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