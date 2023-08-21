#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main(void)
{
	  int n1, n2,n3,pf,sf,an;
	   time_t s, val = 1;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
  
    pf=current_time->tm_mday;
     sf=current_time->tm_mon+1;
    cout << "\Introduzca el dia de nacimiento: ";
    cin >> n1 ;
    cout << "\Introduzca el mes de nacimiento: ";
    cin >> n2;
      cout << "\Introduzca el año de nacimiento: ";
    cin >> n3;
    
if(n2 > sf)
   {
       an=2022-n3;
   }
else if(n2 < sf)
{
   an=2023-n3;
}

cout << "Su edad es de: " << an;
}
