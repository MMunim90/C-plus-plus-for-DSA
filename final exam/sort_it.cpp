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
    int english_marks;
};

bool comp(Student i, Student j)
{
    int total_marks_i = i.math_marks + i.english_marks;
    int total_marks_j = j.math_marks + j.english_marks;

    // return(total_marks_i == total_marks_j) ? i.id < j.id : total_marks_i > total_marks_j;

    if(total_marks_i == total_marks_j)
    {
        return i.id < j.id;
    }
    else
    {
        return total_marks_i > total_marks_j;
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].english_marks;
    }

    sort(arr, arr+n, comp);

    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].english_marks << endl;
    }
    return 0;
}