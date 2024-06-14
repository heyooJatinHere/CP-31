#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        int m = v[0];
        for (int i = 1; i < n; i++)
        {
            m = max(m, v[i] - v[i - 1]);
        }
        m = max(m, 2 * (x - v[n - 1]));
        cout << m << endl;
    }
}