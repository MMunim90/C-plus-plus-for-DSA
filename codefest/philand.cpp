#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    str[0] = str[0] - 'A' + 'a';

    reverse(str.begin(), str.end());

    cout << str << endl;
    return 0;
}