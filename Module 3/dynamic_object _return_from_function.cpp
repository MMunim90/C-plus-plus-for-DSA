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
    Student* munim = new Student(10, 10, 4.80);

    return munim;
}

int main()
{
    
    Student* munim = func();
    
    cout << munim->roll << " " << munim->cls << " " << munim->gpa << endl;
    return 0;
}