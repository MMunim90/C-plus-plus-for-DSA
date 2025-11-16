// #include<iostream>
// int main()
// {
//     int x;
//     std:: cin >> x;
//     std:: cout << x << std:: endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     char c;
//     double d;
//     cin >> x >> c >> d;
//     cout << x << " " << c << endl << d << endl;
//     return 0;
// }

// print ascii value of a character and typecasting

#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x << endl;
    char c = 'M';
    int ascii = c;
    cout << ascii << endl;
    cout << (int)c << endl;

    int num = 97;
    cout << (char)num << endl;
    return 0;
}