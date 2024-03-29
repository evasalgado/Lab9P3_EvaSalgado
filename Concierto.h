#pragma once
#include <string>
#include <iostream>
using namespace std;
class Concierto {
	string nombreBanda;
	double precioEntrada;
	string fechaConcierto;
	int codigo;
	double totalRecaudado;
	int entradasVendidas;
public:
	Concierto(string nombreBanda="",
	double precioEntrada=0.0,
	string fechaConcierto="",
	int codigo=0,
	double totalRecaudado=0.0,
	int entradasVendidas=0);
	string getNombreBanda() const;
	void setNombreBanda(string& nombreBanda);
	double getPrecioEntrada() const;
	void setPrecioEntrada(double& precioEntrada);
	string getFechaConcierto() const;
	void setFechaConcierto(string& fechaConcierto);
	int getCodigo() const;
	void setCodigo(int& codigo);
	double getTotalRecaudado() const;
	void setTotalRecaudado(double& totalRecaudado);
	int getEntradasVendidas() const;
	void setEntradasVendidas(int& entradasVendidas);
	~Concierto();
};

