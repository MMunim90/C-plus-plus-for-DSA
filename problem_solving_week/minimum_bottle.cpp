#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        double total_liter = 0;
        double total_bottle_count = 0;
        for(int i=0; i<n; i++)
        {
            total_liter += arr[i];
        }

        total_bottle_count = ceil(total_liter / x);
        cout << total_bottle_count << endl;
    }
    
    return 0;
}