#include "GestorVentas.h"
#include "Concierto.h"
#include <iostream>
using namespace std;
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
