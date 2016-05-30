#include <iostream>
#include <string>
using namespace std;
int main () {
	cout << " Bienbenido. Ya puede calcular las notas de sus alumnos. " << endl;
	cout << " ¿Nombre y Apellido del alumno?" << endl;
	string nombre;
	cin >> nombre;
	string apellido;
	cin >> apellido;
	
	cout << " Muy bien, ya puede introducir las notas de "<< nombre << apellido << endl;
	cout << "" << endl;
	cout << " Nota numero 1- 10% " << endl;
	int notaa;
	cin >> notaa;
	int a;
	a=notaa*10/100;
	cout << " En la primera nota obtuvo " << a << " puntos. "<< endl;
	cout << "" << endl;
	
	cout << " Nota numero 2- 20% " << endl;
	int notab;
	cin  >> notab;
	int b;
	b=notab*20/100;
	cout << " En la segunda nota obtuvo " << b << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 3- 15% " << endl;
	int notac;
	cin >> notac;
	int c;
	c=notac*15/100;
	cout << " En la tercera nota obtuvo " << c << " puntos. " << endl;
	cout << "" << endl;

	cout << " Nota numero 4- 15% " << endl;
	int notad;
	cin >> notad;
	int d;
	d=notad*15/100;
	cout << " En la cuarta nota obtuvo " << d << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 5- 20% " << endl;
	int notae;
	cin >> notae;
	int e;
	e=notae*20/100;
	cout << " En la quinta nota obtuvo " << e << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 6- 20% " << endl;
	int notaf;
	cin >> notaf;
	int f;
	f=notaf*20/100;
	cout << " En la sexta nota obtuvo " << f << " puntos. " << endl;
	cout << "" << endl;
	int nfinal;
	nfinal=a+b+c+d+e+f;
	cout << "La nota final del alumno "<< nombre << apellido << "fue: " << nfinal << endl;
	
	cout << " Si desea calcular las nosta de otro alumno escriba (1), de lo contrario escriba (0) " << endl;
	int x;
	cin >> x;
	if (x<0) {
		cout << "Gracias por usar este programa. " << endl;
		while (x>0){
        	 cout << " ¿Nombre y Apellido del alumno?" << endl;
	         string nombre;
	         cin >> nombre;
  	         string apellido;
	         cin >> apellido;
	
	         cout << " Muy bien, ya puede introducir las notas de "<< nombre << apellido << endl;
	         cout << "" << endl;
	         cout << " Nota numero 1- 10% " << endl;
	         int notaa;
	         cin >> notaa;
	         int a;
         	 a=notaa*10/100;
	         cout << " En la primera nota obtuvo " << a << " puntos. "<< endl;
	         cout << "" << endl;
	
	         cout << " Nota numero 2- 20% " << endl;
	         int notab;
         	 cin  >> notab;
	         int b;
	         b=notab*20/100;
             cout << " En la segunda nota obtuvo " << b << " puntos. " << endl;
	         cout << "" << endl;
	
	         cout << " Nota numero 3- 15% " << endl;
	         int notac;
	         cin >> notac;
  	         int c;
	         c=notac*15/100;
	         cout << " En la tercera nota obtuvo " << c << " puntos. " << endl;
	         cout << "" << endl;

	         cout << " Nota numero 4- 15% " << endl;
	         int notad;
	         cin >> notad;
	         int d;
	         d=notad*15/100;
	         cout << " En la cuarta nota obtuvo " << d << " puntos. " << endl;
	         cout << "" << endl;
	
	         cout << " Nota numero 5- 20% " << endl;
	         int notae;
	         cin >> notae;
	         int e;
	         e=notae*20/100;
	         cout << " En la quinta nota obtuvo " << e << " puntos. " << endl;
	         cout << "" << endl;
	
	         cout << " Nota numero 6- 20% " << endl;
	         int notaf;
	         cin >> notaf;
	         int f;
	         f=notaf*20/100;
	         cout << " En la sexta nota obtuvo " << f << " puntos. " << endl;
	         cout << "" << endl;
     	     int nfinal;
	         nfinal=a+b+c+d+e+f;
	         cout << "La nota final del alumno "<< nombre << apellido << "fue: " << nfinal << endl;	
		}
	}
	
	
		
	

	
	
	
}
