#include <iostream>
#include <stdio.h>   //dzieki temu getchar
#include <cstdlib>   //do czyszczenia
#include <conio.h>   // po nacisnieciu przycisku nie trzeba klikac enter

using namespace std;

float x,y;
char number;      //znak z klawiatury

int main()
{

while(true)    //nieskonczona petla
{

    cout << "Give me x!" << endl;
    cin >> x;
    cout << "Give me y!" << endl;
    cin >> y;

    cout<<endl;
    cout<<"Main menu"<< endl;
    cout<<"-----------------"<<endl;
    cout<<"1. Add"<< endl;
    cout<<"2. Subtract"<< endl;
    cout<<"3. Multiply"<< endl;
    cout<<"4. Divide"<< endl;
    cout<<"5. EXIT"<< endl;
    cout<<"Choose: ";
    number=getch();

    switch(number)
    {
    case '1':
        {
            cout<<x+y;
        }
    break;

    case '2':
        {
            cout<<x-y;
        }
    break;

    case '3':
        {
            cout<<x*y;
        }
    break;

    case '4':
        {
            if (y==0)
            cout<<"DO NOT DIVIDE BY 0!";
            else
            cout<<x/y;
        }
    break;

    case '5':
        {
            exit(0);    //funkcja wyjscia z programu switch
        }
    break;

    default: cout<<"it is not a number 1-4";

    }

     getchar();getchar(); // czekanie na enter
     system("cls");       // czyszczenie

}

    return 0;
}
