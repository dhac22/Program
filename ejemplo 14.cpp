#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;

    
    cout<< "Ingrese un n�mero N: ";
    cin>>n;


    for (int i = 1; i <=n; ++i) {
        suma += i;
    }

   
    cout<<"La suma de los primeros " << n << " n�meros naturales es: " <<suma<<endl;

    return 0;
}

