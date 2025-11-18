#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    int* brr = new int[x];

    for(int i=0; i<n; i++)
    {
        brr[i] = arr[i];
    }

    delete[] arr;

    for(int i=n; i<x; i++)
    {
        cin >> brr[i];
    }

    for(int i=0; i<x; i++)
    {
        cout << brr[i] << " " ;
    }
    return 0;
}