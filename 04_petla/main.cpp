#include <iostream>
#include <windows.h>   //zawiera Sleep <-- funkcja czekania programu


using namespace std;


int main()
{
    for(int i=15;i>=0;i--)
    {
        Sleep(1000);   // zaczekaj 1000ms
        system("cls");  //usuwa to co bylo w konsoli
        cout<<i<<endl;
    }
    cout<<"Jebut";
     return 0;
}
