#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[20];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student( char name[20], int roll, char section, int math_marks, int cls)
    {
        this->name[20] = name[20];
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student student_1( "munim" ,17, 'A', 72, 10);
    Student student_2( "amin" ,27, 'A', 68, 10);
    Student student_3( "roni" ,35, 'A', 62, 10);

    if(student_1.math_marks > student_2.math_marks && student_1.math_marks > student_3.math_marks)
    {
        cout << student_1.name << endl;
    }
    else if(student_2.math_marks > student_1.math_marks && student_2.math_marks > student_3.math_marks)
    {
        cout << student_2.name[20] << endl;
    }
    else if(student_3.math_marks > student_2.math_marks && student_3.math_marks > student_1.math_marks)
    {
        cout << student_3.name[20] << endl;
    }

    // cout << student_1.name[20] << " " << student_1.roll << " " << student_1.section << " " << student_1.math_marks << " " << student_1.cls << endl;


    return 0;
}