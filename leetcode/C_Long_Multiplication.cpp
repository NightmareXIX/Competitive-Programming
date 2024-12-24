#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t = 1;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        int n = x.size(), ch = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] == y[i]) continue;
            else if (x[i] > y[i]) {
                if (!ch) { ch = 1; continue; }

                if (ch == 1)
                    swap(x[i], y[i]);
            }
            else {
                if (!ch) { ch = -1; continue; }

                if (ch == -1) 
                    swap(x[i], y[i]);
            }
        }
        cout << x << endl << y << endl;
    }
}