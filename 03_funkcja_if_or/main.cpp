#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "How old are you?" << endl;
    cin >>age;


    if(age>=35)
    {
        cout<<"You are good to vote"<< endl;
        cout<<"You are good to be president"<< endl;
    }

    else if ((age>=18)&&(age<35))
    {
        cout<<"you can only vote";
    }
    else
    {
        cout<<"you too young for everything";
    }


    return 0;
}
