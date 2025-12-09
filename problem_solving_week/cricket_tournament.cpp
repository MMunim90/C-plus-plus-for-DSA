#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if(m >= n)
        {
            cout << "NO" << endl;
        }
        else if(m < n)
        {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}