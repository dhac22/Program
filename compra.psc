Algoritmo compra
	escribir"escriba la cantidad comprada"
	leer cant
	
	Si cant>8 Entonces
		v<-cant*85
	Fin Si
	
		Si cant>=4 & cant< 8  Entonces 
			v<-cant*90
		FinSi
		Si cant<4   Entonces 
			v<-cant*100
		FinSi
escribir "el total a pagar es de: L." v
FinAlgoritmo
