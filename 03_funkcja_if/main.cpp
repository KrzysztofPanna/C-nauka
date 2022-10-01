#include <iostream>

using namespace std;

string PIN, login;

int main()
{
    cout << "Podaj login" << endl;
    cin >> login;

    cout << "Podaj PIN" << endl;
    cin >> PIN;

    if((login=="admin")&&(PIN=="szarlotka"))   // "&&" - and  "||" - or
    {
        cout<<"Jestes git";
    }
    else
    {
        cout>>"nie jestes git"
    }




    return 0;
}
