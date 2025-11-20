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

int main()
{
    Student halim(13, 10, 5.00); // here halim is a static object
    Student* munim = new Student(10, 10, 4.80);  //here munim is a pointer and this is an dynamic object
    cout << halim.roll << " " << halim.cls << " " << halim.gpa << endl;
    cout << munim->roll << " " << munim->cls << " " << munim->gpa << endl;
    return 0;
}