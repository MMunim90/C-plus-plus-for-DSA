#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string s = "Jessica";
    string word;

    getline(cin, str);

    stringstream ss(str);

    int found = 0;

    while (ss >> word)
    {
        if(word == s)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}