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
    int start = 2;
    vl arr(n), valk(n);
    for (int i = 0; i < n - 1; i++) {
        arr[i] = start + i * 2;
    }

    for (int i = 0; i < n; i++) {
        ll sum = 0, mul = 1;
        for (int j = 0; j <= i; j++) {
            sum += arr[j]; mul *= arr[j];
        }
        valk[i] = (sum & mul);
    }

    print(valk);
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}