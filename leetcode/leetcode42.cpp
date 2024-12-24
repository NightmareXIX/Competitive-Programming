#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt4, cnt7;
    cin >> n;
    int modval = n % 7;
    int arr[] = {0,1,2,3,0,1,2};
    cnt4 = modval + 7 * arr[modval];
    cnt7 = n - cnt4;
    if (cnt7 < 0) { cout << -1 << endl; return 0; }

    for (int i = 0; i < cnt4 / 4; i++) cout << 4;
    for (int i = 0; i < cnt7 / 7; i++) cout << 7;
    cout << endl;
}
