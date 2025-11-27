#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    string s2 = "hello kemon acho";

    // int i = 50;
    // int j = 949;

    // i += j;

    // cout << i << endl;

    // s+=s2;

    // s.append(s2);

    // s.push_back('D');
    // s.push_back('sadasD'); // it is not possible

    // s += 'B';

    // cout << s << endl;


    string str = "hello world";

    // str[1] = 'u'; // this is possible
    //str[5] = 'M'; // this is not possible because of string size.

    // str.pop_back();
    // str.pop_back();

    // str = "gello";
    
    string str2 = "hi";

    // str = str2;

    // str.assign("hihihihi");
    // str.assign(str2);

    // str.erase(3, 5);

    // str.replace(6, 5, "Bangladesh");
    // str.replace(6, 0, "Bangladesh");

    str.insert(5, "_");
    // str.replace(5, 0, "_");

    cout << str << endl;
    return 0;
}