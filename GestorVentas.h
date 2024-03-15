#pragma once
#include "Concierto.h"
#include <vector>
class GestorVentas{
	vector<Concierto> conciertosDisponibles;
public : 
	GestorVentas();
	vector<Concierto> getConciertosDisponibles() const;
	void setConciertosDisponibles(vector<Concierto>& conciertosDisponibles);
	void agregarConcierto(Concierto* nuevoConcierto);
	void eliminarConcierto(int indiceConcierto);
	void venderEntrada(int indiceConcierto, int calidad);
	void listarConciertos();
	void guardarConciertosCSv();
	void cargarConciertosCSV();
	~GestorVentas();
};

