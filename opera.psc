Algoritmo opera
	escribir "Ingrese el primer numero"
	leer n1
	escribir "Ingrese el Segundo numero"
	leer n2
	escribir "escribir la operacion que desea ejecutar: + - x / mod"
	leer oper
	Si oper="x" | oper="*" Entonces
		resu<-n1*n2
		escribir "La multiplicacion es: " resu
	Fin Si
	Si oper="+" Entonces
		resu<-n1+n2
		escribir "La Suma es: " resu
	Fin Si
	Si oper="-" Entonces
		resu<-n1-n2
		escribir "La resta es: " resu
	Fin Si
	Si oper="/" Entonces
		resu<-n1*n2
		escribir "La division es: " resu
	Fin Si
	Si oper="mod" Entonces
		resu<-n1 mod(n2)
		escribir "El Residuo es: " resu
	Fin Si
	
FinAlgoritmo
