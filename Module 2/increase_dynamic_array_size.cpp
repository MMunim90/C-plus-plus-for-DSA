#include<bits/stdc++.h>
using namespace std;
int main()
{

    //static array
    // int a[3];
    // for(int i=0; i<3; i++)
    // {
    //     cin >> a[i];
    // }

    // int b[5];
    // for(int i=0; i<3; i++)
    // {
    //     b[i] = a[i];
    // }

    // b[3] = 4;
    // b[4] = 5;

    // for(int i=0; i<5; i++)
    // {
    //     cout << b[i] << " ";
    // }

    //dynamic array
    int * a = new int[3];
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }

    int * b = new int[5];
    for(int i=0; i<3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 4;
    b[4] = 5;

    delete[] a; // for deleting an array we use []

    for(int i=0; i<5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}