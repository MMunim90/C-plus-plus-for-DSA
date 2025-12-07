#include<bits/stdc++.h>
using namespace std;
int main()
{
    int note;
    cin >> note;

    int total_fees = note * 2000;
    int total_500_notes = total_fees / 500;

    cout << total_500_notes << endl;
    return 0;
}