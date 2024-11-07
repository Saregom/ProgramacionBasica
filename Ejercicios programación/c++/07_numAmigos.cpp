#include <iostream>
using namespace std;

int numerosAmigos (int num1, int num2){
	
	int num3, num4, contAmigos = 0;
	
	while(num1 < num2){
		num3 = 0;
		for(int i=1; i<num1; i++){
			if(num1 % i == 0){
				num3 += i;
			}	
		}
		
		if(num3 >= num1 & num3 <= num2 & num1 != num3){
			num4 = 0;
			for(int i=1; i<num3; i++){
				if(num3 % i == 0){
					num4 += i;
				}
			}
			
			if(num4 == num1){
				contAmigos++;
				cout << endl << num1 << " y " << num3 << " son amigos" << endl;;
			}
		}
		num1++;
	}
	return contAmigos;
}

main (){
	int num1, num2, numeroParejas;
	
	cout << "Ingrese el primer valor" << endl;
	cin >> num1;
	
	cout << "Ingrese el segundo valor" << endl;
	cin >> num2;
	
	if(num1 > num2){
		numeroParejas = numerosAmigos(num2, num1);
	}else{
		numeroParejas = numerosAmigos(num1, num2);
	}
	
	if(numeroParejas == 0){
		cout << endl << "NO hay ninguna pareja de numeros amigos" << endl;
	}else{
		cout << endl << "Hay " << numeroParejas << " pareja/s de amigos" << endl;
	}
}

