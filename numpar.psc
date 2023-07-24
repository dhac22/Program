Algoritmo numpar
	escribir"ingrese un numero: "
	leer n
	Para i=0 Hasta n Con Paso 1 Hacer
		f<-n mod(2)
	Fin Para
	Si f=0 Entonces
		escribir n " es un numero par"
	SiNo
		escribir n " es un numero  impar"
	Fin Si
FinAlgoritmo
