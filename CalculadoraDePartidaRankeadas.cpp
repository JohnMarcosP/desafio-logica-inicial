#include <iostream>
using namespace std;
void calculadora(int vitoria, int derrota)
{
    int resultado{};
    resultado = vitoria - derrota;
    if (resultado <= 10)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Ferro" << endl;
    }
    if (resultado >= 11 && resultado <= 20)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Bronze" << endl;
    }
    if (resultado >= 21 && resultado <= 50)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Prata" << endl;
    }
    if (resultado >= 51 && resultado <= 80)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Ouro" << endl;
    }
    if (resultado >= 81 && resultado <= 90)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Diamante" << endl;
    }
    if (resultado >= 91 && resultado <= 100)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Lendario" << endl;
    }
    if (resultado >= 101)
    {
        cout << "O Heroi tem saldo de " << resultado << " e esta no nivel Imortal" << endl;
    }
}

int main()
{
    int vitoria, derrota;
    cin >> vitoria >> derrota;
    calculadora(vitoria, derrota);

    return 0;
}