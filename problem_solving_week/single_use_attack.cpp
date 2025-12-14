#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int h, x, y; cin >> h >> x >> y;

        int total_attack_count = 0;
        int remaining = 0;
        remaining = h-y;
        total_attack_count++;
        if(remaining > 0)
        {
            remaining = remaining / x;
            if(remaining % x != 0)
            {
                total_attack_count+= remaining+1;
            }
            else
            {
                total_attack_count += remaining;
            }
        }

        cout << total_attack_count << endl;
    }
    
    return 0;
}