#include "Concierto.h"
Concierto::Concierto(string nombreBanda = "",
	double precioEntrada = 0.0,
	string fechaConcierto = "",
	double totalRecaudado = 0.0,
	int entradasVendidas = 0) {
	this->nombreBanda = nombreBanda;
	this->precioEntrada = precioEntrada;
	this->fechaConcierto = fechaConcierto;
	this->totalRecaudado = totalRecaudado;
	this->entradasVendidas = entradasVendidas;
}
string Concierto::getNombreBanda() const {
	return nombreBanda;
}
void Concierto::setNombreBanda(string& nombreBanda) {
	this->nombreBanda = nombreBanda;
}
