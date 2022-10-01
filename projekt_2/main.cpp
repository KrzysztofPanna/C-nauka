#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj pin" <<endl;
    cin >> PIN;


    if(PIN=="1410")
    {
        cout<<"PIN poprawny";
    }
    else
    {
        cout<<"Nieprawidlowy PIN";
    }
    return 0;
}
