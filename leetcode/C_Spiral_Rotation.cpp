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
        vector<vector<char>> mat(n, vector<char>(n)), cpy(n, vector<char>(n));
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        }
        // Perform the replacement operations
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int c = min({i + 1, j + 1, n - i, n - j});
                int ni = i, nj = j;
                for (int k = 0; k < (c % 4); k++) {
                    int ti = nj, tj = n - 1 - ni;
                    ni = ti, nj = tj;
                }
                cpy[ni][nj] = mat[i][j];
            }
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
                cout<< cpy[i][j];
            cout << el;
        }
    }
    return 0;
}