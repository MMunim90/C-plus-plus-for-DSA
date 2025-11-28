#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int joursey;

    Cricketer(string country, int joursey)
    {
        this->country = country;
        this->joursey = joursey;
    }
};

int main()
{
    Cricketer* dhoni = new Cricketer("India", 10);
    Cricketer* kohli = new Cricketer("India", 18);

    // kohli = dhoni; // this is not the right way to copy a object.
    // cout << dhoni->joursey << " " << kohli->joursey << endl;

    // right way to copy a object.
    // kohli->country = dhoni->country;
    // kohli->joursey = dhoni->joursey;

    // another simple way to write this thing
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->joursey << endl;

    return 0;
}