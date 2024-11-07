Algoritmo euler_04
	
	Imprimir "Digita un numero para calcular la serie de euler"
	Leer num
	
	factorial = 1
	contador = 1
	euler = 1
	Imprimir "n = 1: ", euler
	
	Mientras contador < num Hacer
		factorial = factorial * contador
		contador = contador + 1 
		division = 1 / factorial
		euler = euler + division
		Imprimir "n = ", contador, ": ", euler
	FinMientras
	
	Imprimir "El valor de euler en la posicion ", num, " es: ", euler
	
FinAlgoritmo