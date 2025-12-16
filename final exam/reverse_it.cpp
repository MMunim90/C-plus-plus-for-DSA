#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};


int main()
{
    int n;
    cin >> n;

    Student arr[n];
    Student brr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
        brr[i] = arr[i];
    }

    reverse(brr, brr+n);
    
    for(int i=0; i<n; i++)
    {
         cout << arr[i].name << " " << arr[i].cls << " " << brr[i].section << " " << arr[i].id << endl;
    }
    
    return 0;
}