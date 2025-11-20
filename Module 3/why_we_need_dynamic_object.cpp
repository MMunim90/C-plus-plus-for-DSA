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

Student* func()
{
    Student munim(17, 10, 5.00);
    Student* p = &munim;
    return p;
}

int main()
{
    Student* p = func();
    cout << p->roll << " "  << p->cls << " " << p->gpa << endl;
    return 0;
}