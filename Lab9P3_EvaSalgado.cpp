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
	Concierto* c = new Concierto(nb,pe,fc,code,0.0,0);
	gv.agregarConcierto(c);
	cout << "concierto agregado correctamente" << endl;
}
void eliminar_concierto() {
	int ind;
	cout << "Ingrese el indice de la lista del concierto a eliminar" << endl;
	cin >> ind;
	gv.eliminarConcierto(ind);
}
void vender_entrada() {
	int ind, inv;
	cout << "Ingrese el indice de la lista del concierto que desea vender entradas" << endl;
	cin >> ind;
	cout << "Ingrese la cantidad de entradas a vender";
	cin >> inv;
	gv.venderEntrada(ind,inv);
}
void listar_conciertos() {
	cout << "Lista de conciertos: " << endl;
	gv.listarConciertos();
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
			<<"6. Guardar Conciertos en CSV\n"
			<<"7. Salir"<<endl;
		cin >> op;
		switch (op) {
		case 1: //ejercicio 1
			agregar_concierto();
			break;
		case 2://ejercicio 2
			eliminar_concierto();
			break;
		case 3: //ejercicio 3
			vender_entrada();
			break;
		case 4: //ejercicio 4
			listar_conciertos();
			break;
		case 5: //ejercicio 5
			break;
		case 6: //ejercicio 6
			break;
		case 7:
			cout << "Gracias por utilizar mi programa" << endl;
			break;
		default:
			cout << "Numero ingresado no es valido"<<endl;
			break;
		}//fin de caso switch 
	} while (op!=7); //fin del ciclo;
}//fin del programa
