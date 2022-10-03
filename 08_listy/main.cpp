#include <iostream>

using namespace std;

float greed[5];
float suma = 0,ave;

int main()
{


    for(int i=0;i<5;i++)
    {
        cout << "Write "<<i+1<<" marks" << endl;
        cin>>greed[i];
        suma +=greed[i];    //suma +=suma+greed[i];
    }
    ave = suma/5;

    cout<<suma<<"\n";
    cout<<"this is average "<<ave;

    return 0;
}
