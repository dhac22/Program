#include <iostream>
using namespace std;

int main()
{
    int num, numi;

    cout << "Ingrese un n�mero: ";
    cin >> num;

    while (num>0) 
    {
        int digito = num % 10;
        numi = numi * 10 + digito;
        num=num / 10;
    }

    cout << "El n�mero invertido es: " << numi << endl;

    return 0;
}
