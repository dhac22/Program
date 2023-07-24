Algoritmo concatenarnum
	i=0
	escribir"Ingrese los valores"
	Repetir
	
		leer n
		Si n>0 Entonces
			j <- j + Concatenar(cadena,ConvertirATexto(n));
		SiNo
		Fin Si
		i<-i+1
	Hasta Que i=5
	escribir j
FinAlgoritmo
