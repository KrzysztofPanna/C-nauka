#include <iostream>

using namespace std;

int limit, bacteries=1, time=0;

int main()
{
    cout << "How many bacteries to dye" << endl;
    cin>>limit;

    while( bacteries<=limit)
    {
        bacteries=bacteries*2;
        time++;
        cout<<"You will dye in "<<time<<" hours.";
        cout<<" You will have "<< bacteries<<" bacteries"<<endl;
    }
    return 0;
}
