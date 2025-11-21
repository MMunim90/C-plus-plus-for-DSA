#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr+n); // we know array starting point (arr[0]) store in the name the array.  this is ascending order sorting.

    //descending order sorting
    sort(arr, arr+n, greater<int>());
    //greater<int>() is the built in compare function.

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}