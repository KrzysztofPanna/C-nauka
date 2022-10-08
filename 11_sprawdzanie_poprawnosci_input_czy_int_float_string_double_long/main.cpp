#include <iostream>
#include <cstdlib>  // sprawdzanie poprawnosci wpisanych danych (cerr)
// jesli uzyjemy char to gdy bedziemy chcielimiec miesiac 11 to dostaniemy odpowiedz dla 1 miesiaca x2
// dlatego nie uzywamy char tylko int
using namespace std;


int rok,month;

int main()
{


while(true)    // for(;;)   to tez petla nieskonczona
{
    cout << "Which month are you interested in?" << endl;
    cout << "EXIT = 0\n";     // jesli uzywamy char i za exit uzyjemy '0' to przy wpisywaniu '10' wylaczy nam program bo tam jest 0
    if(!(cin>>month))   // sprawdzenie czy wprowadzajac kod podajemy wlasciwy rodzaj znakow int, float, string...
    {
        cerr<<"soft check that your input not a int number";
        exit(0);
    }


    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout<<"Month "<<month<<" has 31 days \n";
        }
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        {
            cout<<"Month "<<month<<" has 30 days \n";
        }
        break;


        case 2:
            cout<<"Give me actual year";
            cin>>rok;
            if (((rok%4==0)&&(rok%100!=0))||(rok%400==0))
            {
                cout<<"Month "<<month<<" has 29 days \n";
            }
            else
            {
                cout<<"Month "<<month<<" has 28 days\n";
            }
        break;

        case 0:
            exit(0);  // exit zapyka program cokolwiek w nawiasie

        default: cout<<"It is not a month number\n";
    }
getchar();
getchar();
system("cls");
}


    return 0;
}
