Algoritmo SumaNumeros
    Definir cont, num, suma como Entero
	
    cont <- 0
    suma <- 0
	
    Escribir "Ingrese un n�mero:"
    Leer num
	
    Mientras cont <= num Hacer
        suma <- suma + cont
        cont <- cont + 1
    Fin Mientras
	
    Escribir "La suma es:", suma
Fin Algoritmo