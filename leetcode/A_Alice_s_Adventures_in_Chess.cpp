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
typedef vector<int> vi;
typedef vector<ll> vl;

template <class T>
void print(T &a)
{
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
}

void solve(int tc)
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    int ch1 = 1, ch2 = 1;
    while (ch1 && ch2)
    {
        ch1 = 0, ch2 = 0;
        for (char c : s)
        {
            if (c == 'N')
                y++;
            else if (c == 'E')
                x++;
            else if (c == 'S')
                y--;
            else
                x--;
            if (x == a && y == b)
            {
                yes;
                return;
            }
            if (x >= 0 && x <= 10) ch1 = 1;
            if (y >= 0 && y <= 10) ch2 = 1;
        }
        if (x == 0 && y == 0) break;
    }
    no;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}