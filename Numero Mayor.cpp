#include <iostream> 
using namespace std; 
int main () 
{
 int cantidad, num;
 int mayor = 0;
 int menor = 0;
 double sum = 0;
 double prome = 0;

 for (int i = 1; i <= 10; i++)
 {
  cout<<"Ingrese el numero: ";
  cin>>num;
  if(1 == i){ 
    mayor = num;
    menor = num;
  }
  else if (num > mayor){ 
    mayor = num; 
  }
  else if (num < menor){
    menor = num; 
  }
  sum += num;
 }
 prome=sum/10;
 cout<<"El numero mayor es: "<<mayor<<"\n";
 cout<<"El numero menor es: "<<menor<<"\n";
  cout<<"El promedio es: "<<prome;
 return 0;
}
