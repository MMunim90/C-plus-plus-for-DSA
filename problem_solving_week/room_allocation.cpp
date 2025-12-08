#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int total_room = 0;
        
        for(int i=0; i<n; i++)
        {
            total_room += ceil(arr[i] / 2);
        }

        cout << total_room << endl;
    }
    
    return 0;
}