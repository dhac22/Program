#include <iostream>
using namespace std;
int main()
{
    cout<<"Algoritmo para calcular �reas"<<endl;
    
    int op,baset,ladoc, lado1, lado2, ht, radio;
    double area, pi=3.1416;
    
    cout<<"1- �rea de tri�ngulo"<<endl;
    cout<<"2- �rea de cuadrado"<<endl;
    cout<<"3- �rea de rect�ngulo"<<endl;
    cout<<"4- �rea de c�rculo"<<endl;
    cin>>op;
    
    switch (op)
    {
        case 1:
        cout<<"�rea de tri�ngulo"<<endl;
        cout<<"Escribe la base del tri�ngulo"<<endl;
        cin>>baset;
        cout<<"Escribe la altura del tri�ngulo"<<endl;
        cin>>ht;
        
        area=(baset*ht)/2;
        
        case 2:
        cout<<"�rea de c�rculo"<<endl;
        cout<<"Escribe el lado del cuadrado"<<endl;
        cin>>ladoc;
        
        
        area=(ladoc*ladoc);
        
        case 3:
        cout<<"�rea de rect�ngulo"<<endl;
        cout<<"Escribe el lado 1 del rect�ngulo"<<endl;
        cin>>lado1;
        cout<<"Escribe el lado 2 del rect�ngulo"<<endl;
        cin>>lado2;
        
        
        area=(lado1*lado2);
        
        case 4:
        cout<<"�rea de c�rculo"<<endl;
        cout<<"Escribe el radio del c�rculo"<<endl;
        cin>>radio;
        
        
        area=(pi*radio*radio);
        
    }
    
        cout<<"El �rea es: "<<area;
        
        
    }
