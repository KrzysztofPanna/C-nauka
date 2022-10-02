// https://www.youtube.com/watch?v=QapjTCGV7GM&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo&index=5&ab_channel=Pasjainformatyki

#include <iostream>
#include <windows.h>
#include <time.h> // wykorzystana do wziecia czasu z pc dla rand()
using namespace std;

int liczba_lotto;

int main()
{
    cout << "Za 3 sekundy nastapi zwolnienie blokady!" << endl;

    for(int i=3; i>0;i--)
    {
        cout<<i<<endl;
        Sleep(1000);
    }

    srand(time(NULL));

    for (int i=6;i>0;i--)
    {
        liczba_lotto = rand()%49+1;
        Sleep(1000);
        cout<<liczba_lotto<<"\a"<<endl;
    }


    return 0;
}
