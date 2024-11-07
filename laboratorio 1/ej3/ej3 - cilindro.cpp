#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int altura, radio;
	double pi = M_PI, volumen, area_lateral;
	//cout << "Hola usuario\n";
	//cout << "Este programa es para saber el volumen y el area lateral de un cilindro\n";

	cout<< "Por favor introduzca el valor de la altura del cilindro\n";
	cin >> altura;
	cout << "Por favor introduzca el valor del radio del cilindro\n";
    cin >> radio;
    
	volumen= (pi * altura * pow((radio), 2));
	area_lateral= (2 * pi * altura * radio);

	//cout<<" El volumen del cilindro con radio " << radio;
	//cout<<" y con altura " << altura; 
	cout << setprecision(3) << fixed << endl; 
	
	cout << "El area lateral del cilindro es: " << area_lateral << endl;
	cout << "El volumen es: " << volumen << endl;
	
}
