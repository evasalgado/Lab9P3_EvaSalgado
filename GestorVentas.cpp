#include "GestorVentas.h"
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
}
void GestorVentas::venderEntrada(int indiceConcierto, int cantidad) {

}