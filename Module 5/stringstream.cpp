#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    stringstream s(str);
    string word;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    // s >> word;
    // cout << word << endl;

    int count = 0;
   
    while (s >> word)
    {
        cout << word << endl;
        count++;
    }

    cout << "Number of word is: " << count << endl;
    
    
    return 0;
}