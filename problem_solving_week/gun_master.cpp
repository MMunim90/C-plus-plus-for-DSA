#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        char gun = 'c';
        int gun_switch_count = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > r && gun == 'c')
            {
                gun_switch_count++;
                gun = 'l';
            }
            else if(arr[i] <= r && gun != 'c')
            {
                gun_switch_count++;
                gun = 'c';
            }
        }

        cout << gun_switch_count << endl;
    }
    
    return 0;
}