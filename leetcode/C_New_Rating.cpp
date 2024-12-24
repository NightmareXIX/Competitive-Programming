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
    vi arr(n + 1, 0), pre(n + 1, 0);
    rep(i, n) cin >> arr[i];
    int curf = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > curf) curf++;
        else if (arr[i] < curf) curf--;
        pre[i] = max(pre[i - 1], curf);
    }   

    auto check = [&] (int k) {
        int curg = k;
        for (int i = n; i >= 1; i--) {
            if (pre[i - 1] >= curg) return true;
            if (arr[i] < curg) curg++;
            else curg--;
        }
        return false;
    };

    int l = 0, r = n + 1;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    } 
    cout << l << el;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
}