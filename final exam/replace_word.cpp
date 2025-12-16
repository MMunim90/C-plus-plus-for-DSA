#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string str;
        cin >> str;
        string s;
        cin >> s;

        int len = s.size();

        int idx = str.find(s);
        while(idx != -1)
        {
            str.replace(idx, len, "#");
            idx = str.find(s, idx+1);
        }
        cout << str << endl;
    }
    
    return 0;
}