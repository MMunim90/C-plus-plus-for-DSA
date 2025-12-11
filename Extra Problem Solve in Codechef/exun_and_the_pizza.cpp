#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, res; cin >> a >> b >> c;

    int remain = a - b;
    res = remain * c;
    cout << res << endl;
    return 0;
}