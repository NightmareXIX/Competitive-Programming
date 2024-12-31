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
    vector<vector<char>> arr(3, vector<char>(3));
    forn(i, 3) forn(j, 3) cin >> arr[i][j];

    vector<pair<int, int>> moves = {{-1,-1}, {-1, 0}, {0, -1}, {0, 1}, {1, 0}, {1, 1}, {1, -1}, {-1, 1}};
    // for (auto pair : moves) {
    //     cout << pair.first << ws << pair.second << el;
    // }
    
    string small = "zzz";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (auto pair1 : moves) {
                int a = i + pair1.first, b = j + pair1.second;
                if (a < 0 || a > 2 || b < 0 || b > 2) continue;
                for (auto pair2 : moves) {
                    int c = a + pair2.first, d = b + pair2.second;
                    if (c < 0 || c > 2 || d < 0 || d > 2 || (c == i && d == j)) continue;
                    string s = "";
                    s += (char)arr[i][j];
                    s += (char)arr[a][b];
                    s += (char)arr[c][d];
                    // cout << s << el;
                    if (s < small) { 
                        small = s;
                    }
                }
            }
        }
    }
    cout << small << el;
}

int32_t main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}