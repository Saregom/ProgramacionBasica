#include <iostream>
using namespace std;

int main(){
	int a, b, c, a2, c2, num1=0, num2=0, solucion=0, numMayor=0, numMenor=0;
	bool condicion;
	string signo1= " + ", signo2= " + ";
	
	cout << "Digite 3 numeros para calcular la ecuacion cuadratica:\n";
	cout << "Digita el coeficiente para x^2 (a)\n";
	cin >> a;
	cout << "Digita el coeficiente para x (b)\n";
	cin >> b;
	cout << "Digita el coeficiente independiente (c)\n";
	cin >> c;
	
	cout << "La ecucion es: " << a << "x^2 + (" << b << ")x + (" << c << ")\n\n";
	
	if(a < 0){
		a2 = -a;
		b = -b;
		c = a2 * -c;
	}else{
		c = a * c;
	}
	
	if(c < 0){
		c2 = -c;
	}else{
		c2 = c;	
	}

	for(int i=1; i<=c2; i++){
		if(c2 % i == 0){
			for(int j=1; j<=c2; j++){
				if(c2 % j == 0){
					num1 = i;
					num2 = j;
					if(num1*num2 == c && num1+num2 == b){
						solucion = 1;
					}else if(-num1*num2 == c && -num1+num2 == b){
						solucion = 2;
					}else if(-num1*-num2 == c && -num1+-num2 == b){
						solucion = 3;
					}
				}
				if(solucion>0){
					break;
				}
			}
		}
		if(solucion>0){
			break;
		}
	}
	
	condicion = num1 > num2;
	
	if(solucion == 2){
		num1 = -num1;
	}else if(solucion == 3){
		num1 = -num1;
		num2 = -num2;
	}
	
	if(condicion){
		numMayor = num1;
		numMenor = num2;
	}else{
		numMayor = num2;
		numMenor = num1;
	}
	
	if(numMayor < 0){
		numMayor = -numMayor;
		signo1 = " - ";
	}
	
	if(numMenor < 0){
		numMenor = -numMenor;
		signo2 = " - ";
	}
	
	if(solucion == 0){
		cout << "La ecuacion no se puede resolver por factorizacion o no tiene solucion en los numeros reales";
	}else if(a>1){
		if(numMayor % a != 0 & numMenor % a != 0){
			cout << "(x" << signo1 << numMayor << "/" << a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else if(numMayor % a == 0){
			cout << "(x" << signo1 << numMayor/a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else{
			cout << "(x" << signo2 << numMenor/a << ") (" << a << "x" << signo1 << numMayor << ")";
		}
	}else if(a<-1){
		if(numMayor % a != 0 & numMenor % a != 0){
			cout << "-(x" << signo1 << numMayor << "/" << a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else if(numMayor % a == 0){
			cout << "-(x" << signo1 << numMayor/a2 << ") (" << a2 << "x" << signo2 << numMenor << ")";
		}else{
			cout << "-(x" << signo2 << numMenor/a2 << ") (" << a2 << "x" << signo1 << numMayor << ")";
		}
	}else if(a == 1){
		cout << "(x" << signo1 << numMayor << ") (x" << signo2 << numMenor << ")";
	}else if(a == -1){
		cout << "-(x" << signo1 << numMayor << ") (x" << signo2 << numMenor << ")";
	}
}
	
