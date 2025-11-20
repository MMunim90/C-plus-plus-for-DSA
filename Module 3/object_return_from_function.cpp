#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;


    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student func()
{
    Student rahim(37, 10, 4.72);
    return rahim;
}

int main()
{
    // Student munim(17, 10, 5.00);
    // cout << munim.roll << " " << munim.cls << " " << munim.gpa << endl;
    Student obj = func();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}