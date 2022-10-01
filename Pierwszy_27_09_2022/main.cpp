#include <iostream>

using namespace std;

int uczniowie, cukierki, przydzial, zostanie, nauczyciele, przydzial_nauczyciele;

int main()
{  //Rozdawanie cukierkow - kazdy uczen w klasie ma dostac tyle samo cukierkow a nauczyciel liczbe cukierkow razy dwa. Ile dostanie, ile zostanie w torbie

    cout << "Ilu uczniow jest w klasie";
    cin >> uczniowie;

    cout << "Ilu nauczycieli jest w klasie";
    cin >> nauczyciele;

    cout << "Ile jest cukierkow";
    cin >> cukierki;

    przydzial = cukierki/(uczniowie+nauczyciele*2);
    przydzial_nauczyciele = przydzial*2;

    zostanie = cukierki-przydzial*uczniowie-przydzial_nauczyciele*nauczyciele;

    cout << "kazdy uczen dostanie:" << przydzial <<endl;
    cout << "kazdy nauczyciel dostanie:" << przydzial_nauczyciele <<endl;
    cout << "Zostanie:" << zostanie <<endl;

    return 0;
}
