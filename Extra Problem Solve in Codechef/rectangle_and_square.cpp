#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, rect_area, sqrt_area;
    cin >> a >> b >> c;

    rect_area = a * b;
    sqrt_area = c * c;

    if(rect_area == sqrt_area)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}