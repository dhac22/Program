#include <iostream>

using namespace std;

int main() {
    int totalDias, anos, meses, dias;

    cout << "Ingrese la cantidad de d�as: ";
    cin >> totalDias;

    anos = totalDias / 365;
    totalDias %= 365;

    meses = totalDias / 30;
    dias = totalDias % 30;

    cout << "Equivalente a: " << anos << " a�os, " << meses << " meses y " << dias << " d�as." << endl;

    return 0;
}

