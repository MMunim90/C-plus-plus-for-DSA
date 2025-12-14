#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int jars, children;
        cin >> jars >> children;

        int cookies[jars];

        for (int i = 0; i < jars; i++)
        {
            cin >> cookies[i];
        }

        int min_cookies_waste = INT_MAX;
        int min = 0;
        int cooie_found = 0;
        for (int i = 0; i < jars; i++)
        {
            if (cookies[i] >= children)
            {
                min = cookies[i] % children;
                if (min_cookies_waste > min)
                {
                    min_cookies_waste = min;
                }
                cooie_found = 1;
            }
        }

        if (cooie_found)
        {
            cout << min_cookies_waste << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}