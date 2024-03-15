#include "GestorVentas.h"
#include "Concierto.h"
#include <iostream>
using namespace std;
GestorVentas gv;
void agregar_concierto() {
	string nb, fc;
	double pe;
	int code;
	cout << "Ingrese el nombre de la banda: "<<endl;
	cin.ignore();
	getline(cin,nb);
	cout << "Ingrese el precio de la entrada: "<<endl;
	cin >> pe;
	cout << "Ingrese la fecha del concierto(dd/mm/aaaa)" << endl;
	cin.ignore();
	getline(cin,fc);
	cout << "Ingrese el codigo: " << endl;
	cin >> code;
	Concierto* c = new Concierto(nb,pe,fc,0.0,0);
	gv.agregarConcierto(c);
	cout << "concierto agregado correctamente" << endl;
}
int main(){ //inicio de programa
	int op = 0;
	do{
		cout << "---MENU---\n" //menu de opciones
			<<"1. Agregar concierto\n"
			<<"2. Eliminar concierto\n"
			<<"3. Vender entrada\n"
			<<"4. Listar Conciertos\n"
			<<"5. Cargar Conciertos desde CSV\n"
			<<"6. Guardar Conciertos en CSV";
		cin >> op;
		switch (op) {
		case 1: //ejercicio 1
			agregar_concierto();
			break;
		case 2://ejercicio 2
			break;
		case 3: //ejercicio 3
			break;
		case 4: //ejercicio 4
			break;
		case 5: //ejercicio 5
			break;
		case 6: //ejercicio 6
			break;
		default:
			cout << "Numero ingresado no es valido";
			break;
		}//fin de caso switch 
	} while (op!=7); //fin del ciclo;
}//fin del programa
