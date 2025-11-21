#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    int jersey_no;
    char country[30];
};

int main()
{
    Cricketer* dhoni = new Cricketer();

    dhoni->jersey_no = 66;
    char temp[30] = "India";
    strcpy(dhoni->country, temp);

    Cricketer* kohli = new Cricketer();

    kohli->jersey_no = dhoni->jersey_no;

    strcpy(kohli->country, dhoni->country);

    delete[] dhoni;

    // cout << dhoni->jersey_no << " " << dhoni->country << endl;
    cout << kohli->jersey_no << " " << kohli->country << endl;
    return 0;
}