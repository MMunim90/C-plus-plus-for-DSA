#include<bits/stdc++.h>
using namespace std;

int *p;
int *q;

// static variable
void func()
{
    int x = 10;
    p = &x;
    cout << "Func => " << *p << endl;
    return;
}

//dynamic variable
void func2()
{
    int* y = new int;
    *y = 100;
    q = y;
    cout << "Fun -> " << *q << endl;
    return;
}

int main()
{
    printf("Static Variable\n");
    func();
    cout << "Main => " << *p << endl;
    printf("\n");
    printf("Dynamic Variable\n");
    func2();
    cout << "Main => " << *q << endl;
    // int x = 10;
    // int *p = new int;
    // *p = 100;
    // cout << *p << endl << &p << endl << p << endl;

    // for delete dynamic variable
    // int *a = new int;
    // delete a;
    return 0;
}