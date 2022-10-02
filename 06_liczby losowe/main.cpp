#include <iostream>
#include <cstdlib>   // f.losowania w niej
#include <time.h>
#include <stdio.h>   // ma f. getchar()
using namespace std;
int liczba,guess, attempt=0;

int main()
{

    srand(time(NULL));  // pobranie czasu z systemu od 1.01.1970
                        // na podstawie tego powstanie liczba pseudoloowa
    liczba = rand()%100+1;
    cout<<liczba;


    cout << "Guess my number !" << endl;
    while(liczba!=guess)
    {
        cin>>guess;
        attempt++;
        if (liczba>guess)
        {
            cout<<"My number is bigger. Try again"<<endl;
        }
        else if (liczba<guess)
        {
            cout<<"My number is smaller. Try again"<<endl;
        }
        else
        {
            cout<<"You are right. My number is "<<liczba<<" You had "<<attempt<<" attempts";
        }
    }

    getchar();     //<-- czeka na klik zanim zamknie siê tak jak ->  system("pause")
    return 0;
}
