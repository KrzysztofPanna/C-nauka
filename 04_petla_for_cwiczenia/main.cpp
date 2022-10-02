#include <iostream>

using namespace std;

string name;
int number;

int main()
{
    cout << "What is your name" << endl;
    cin>>name;
    cout << "Give me some number"<<endl;
    cin>> number;

    for(int i=1; i<=number; i++)
    {
        cout<<i<<". "<<name<<endl;
    }


    return 0;
}
