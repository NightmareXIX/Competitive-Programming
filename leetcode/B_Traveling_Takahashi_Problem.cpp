#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double pa = 0, pb = 0, dis = 0;
        for (int i = 0; i < n; i++) {
            double a, b;
            cin >> a >> b;
            dis += sqrt((a - pa) * (a - pa) + (b - pb) * (b - pb));
            pa = a, pb = b;
        }
        dis += sqrt((0 - pa) * (0 - pa) + (0 - pb) * (0 - pb));
        cout << fixed << setprecision(15) << dis << el;
    }
    return 0;
}