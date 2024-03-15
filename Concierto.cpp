#include "Concierto.h"
Concierto::Concierto(string nombreBanda,
	double precioEntrada,
	string fechaConcierto,
	int codigo,
	double totalRecaudado,
	int entradasVendidas) {
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
double Concierto::getPrecioEntrada() const {
	return precioEntrada;
}
void Concierto::setPrecioEntrada(double& precioEntrada) {
	this->precioEntrada = precioEntrada;
}
string Concierto::getFechaConcierto() const{
	return fechaConcierto;
}
void Concierto::setFechaConcierto(string& fechaConcierto) {
	this->fechaConcierto = fechaConcierto;
}
int Concierto::getCodigo() const {
	return codigo;
}
void Concierto::setCodigo(int& codigo) {
	this->codigo = codigo;
}
double Concierto::getTotalRecaudado() const {
	return totalRecaudado;
}
void Concierto::setTotalRecaudado(double& totalRecaudado) {
	this->totalRecaudado = totalRecaudado;
}
int Concierto::getEntradasVendidas() const {
	return entradasVendidas;
}
void Concierto::setEntradasVendidas(int& entradasVendidas) {
	this->entradasVendidas = entradasVendidas;
}
Concierto::~Concierto() {
	nombreBanda = "";
	precioEntrada = 0.0;
	fechaConcierto = "";
	totalRecaudado = 0.0;
	entradasVendidas = 0;
}