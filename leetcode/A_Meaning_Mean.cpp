#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t = 1;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        int mean = arr[0];
        for (int i = 1; i < n; i++) {
            mean = (arr[i] + mean) >> 1;
        }
        cout << mean << "\n";
    }
}