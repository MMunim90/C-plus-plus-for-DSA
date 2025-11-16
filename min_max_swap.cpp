#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // if(a<b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    
    cout << min({1, 8, 3, 4, 9, 6, 4, 8, 3, 4}) << endl;
    cout << max({1, 8, 3, 4, 9, 6, 4, 8, 3, 4}) << endl;

    //swap function
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}