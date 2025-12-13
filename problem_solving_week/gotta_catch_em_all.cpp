#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x, y; cin >> n >> x >> y;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int minimum_coin = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] * x < y)
            {
                minimum_coin += arr[i] * x;
            }
            else
            {
                minimum_coin += y;
            }
        }

        cout << minimum_coin << endl;

    }
    
    return 0;
}