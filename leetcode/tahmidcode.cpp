#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, c = 0, d = 0, g = 100, flag = 0;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        while (g--)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    d++;
                }
                else if (s[i] == 'S')
                {
                    d--;
                }
                else if (s[i] == 'W')
                {
                    c--;
                }
                else if (s[i] == 'E')
                {
                    c++;
                }
                if (a == c && b == d)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        // cout<<c<<" "<<d<<endl;
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
}