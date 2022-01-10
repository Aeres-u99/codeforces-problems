#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        res[p - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << i << " : " << res[i] << endl;
    }
    for (int x : res)
        cout << x << " ";
    cout << "\n";
    return 0;
}
