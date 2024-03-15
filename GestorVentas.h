#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "Concierto.h"
#include <vector>
class GestorVentas{
	vector<Concierto*> conciertosDisponibles;
public : 
	GestorVentas();
	vector<Concierto*> getConciertosDisponibles() const;
	void setConciertosDisponibles(vector<Concierto*>& conciertosDisponibles);
	void agregarConcierto(Concierto* nuevoConcierto);
	void eliminarConcierto(int& indiceConcierto);
	void venderEntrada(int indiceConcierto, int cantidad);
	void listarConciertos();
	void guardarConciertosCSV();
	void cargarConciertosCSV();
	~GestorVentas();
};

