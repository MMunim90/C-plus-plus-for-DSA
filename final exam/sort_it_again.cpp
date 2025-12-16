#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

};

bool comp(Student i, Student j)
{
    if(i.eng_marks == j.eng_marks)
    {
        if(i.math_marks == j.math_marks)
        {
            return i.id < j.id;
        }
        else
        {
            return i.math_marks > j.math_marks;
        }
    }
    else
    {
        return i.eng_marks > j.eng_marks;
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr+n, comp);

    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}