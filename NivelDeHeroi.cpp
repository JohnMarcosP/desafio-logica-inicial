#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nome;
    double XP;
    cin >> nome >> XP;
    if (XP <= 1.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Ferro\n";
    }
    if (XP >= 1.001 && XP <= 2.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Bronze\n";
    }
    if (XP >= 2.0001 && XP <= 5.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Prata\n";
    }
    if (XP >= 5.001 && XP <= 7.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Ouro\n";
    }
    if (XP >= 7.001 && XP <= 8.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Platina\n";
    }
    if (XP >= 8.001 && XP <= 9.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Ascendente\n";
    }
    if (XP >= 9.001 && XP <= 10.000)
    {
        cout << "O Heroi de nome " << nome << " esta no nivel de Imortal\n";
    }
    if (XP >= 10.001)
        cout << "O Heroi de nome " << nome << " esta no nivel de Radiante\n";

    return 0;
}