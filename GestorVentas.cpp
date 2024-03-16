#include "GestorVentas.h"
#include <sstream>
GestorVentas::GestorVentas() {
	this->conciertosDisponibles = conciertosDisponibles;
}
vector<Concierto*> GestorVentas::getConciertosDisponibles() const {
	return conciertosDisponibles;
}
void GestorVentas::setConciertosDisponibles(vector<Concierto*>& conciertosDisponibles) {
	this->conciertosDisponibles = conciertosDisponibles;
}
void GestorVentas::agregarConcierto(Concierto* nuevoConcierto) {
	conciertosDisponibles.push_back(nuevoConcierto);
	cout << "concierto agregado correctamente"<<endl;
}
void GestorVentas::eliminarConcierto(int& indiceConcierto) {
	if (!conciertosDisponibles.empty()){
		if (indiceConcierto>=0&&indiceConcierto<conciertosDisponibles.size()){
			conciertosDisponibles.erase(conciertosDisponibles.begin() + indiceConcierto);
			cout << "Concierto eliminado correctamente"<<endl;
		}
	}
	else {
		cout << "lista vacia"<<endl;
	}
}
void GestorVentas::venderEntrada(int indiceConcierto, int cantidad) {
	int vendidos = conciertosDisponibles[indiceConcierto]->getEntradasVendidas() + cantidad;
	double entradas = conciertosDisponibles[indiceConcierto]->getPrecioEntrada() * cantidad;
	if (!conciertosDisponibles.empty()) {
		if (indiceConcierto >= 0 && indiceConcierto < conciertosDisponibles.size()) {
			conciertosDisponibles[indiceConcierto]->setEntradasVendidas(vendidos);
			cout << "Boletos vendidos exitosamente" << endl;
			cout << "Resumen de Venta" << endl
				<< "Banda: " << conciertosDisponibles[indiceConcierto]->getNombreBanda() << endl
				<< "Fecha: " << conciertosDisponibles[indiceConcierto]->getFechaConcierto() << endl
				<< "Entradas Compradas: " << cantidad << endl
				<<"Total Pagado: $" << entradas << endl;
		}
	}
	else {
		cout << "lista vacia" << endl;
	}
}
void GestorVentas::listarConciertos() {
	if (!conciertosDisponibles.empty()){
		for (int i = 0; i < conciertosDisponibles.size(); i++) {
			cout << i << " Banda: " << conciertosDisponibles[i]->getNombreBanda()
				<< ", Fecha: " << conciertosDisponibles[i]->getFechaConcierto()
				<< ", Precio: " << conciertosDisponibles[i]->getPrecioEntrada()
				<< ", Codigo: " << conciertosDisponibles[i]->getCodigo() << endl;
		}
		cout << endl;
	}
	else {
		cout << "Lista esta vacia"<<endl;
	}
}
void GestorVentas::guardarConciertosCSV() {
	if (!conciertosDisponibles.empty()){
		string n = "", fc = "";
		double pe = 0.0, tr = 0.0;
		int ev = 0;
		char delimitador = ',';
		ofstream archivo("Conciertos.csv", ios::app);
		if (!archivo) {
			cerr << "No se puede abrir el archivo";
		}
		for (int i = 0; i < conciertosDisponibles.size(); i++) {
			n = conciertosDisponibles[i]->getNombreBanda();
			pe = conciertosDisponibles[i]->getPrecioEntrada();
			fc = conciertosDisponibles[i]->getFechaConcierto();
			tr = conciertosDisponibles[i]->getTotalRecaudado();
			ev = conciertosDisponibles[i]->getEntradasVendidas();
			archivo << n << delimitador << pe << delimitador <<
				fc << delimitador << tr << delimitador << ev << endl;
			cout << "?";
		}
		cout << "listas agregadas correctamente" << endl;
	}
	else {
		cout << "Lista vacia" << endl;
	}
}
void GestorVentas::cargarConciertosCSV() {
	ifstream archivo("Conciertos.csv", ios::in);
	if (!archivo) {
		cerr << "No se puede abrir el archivo";
		exit(EXIT_FAILURE);
	}
	string n = "", fc = "";
	double pe = 0.0, tr = 0.0;
	int code=0, ev = 0;
	getline(archivo, n);
	istringstream iss(n);
	iss.ignore();
	getline(archivo, fc);
	iss.ignore();
	Concierto* conciertos = new Concierto(n,pe,fc,code,tr,ev);
	agregarConcierto(conciertos);
	cout << "Cargado correctamente" << endl;

	/*cout << left << setw(0) << n << setw(1) << pe << setw(7)
		<< fc << setw(8) << tr << setw(14) << ev << setw(12)
		<< setprecision(5) << right << ev << endl;*/
	cout << "Ventas cargadas correctamente" << endl;
}
GestorVentas::~GestorVentas() {
	for (Concierto* c : conciertosDisponibles) {
		delete c;
	}
}