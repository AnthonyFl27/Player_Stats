#include "futbol.h"
#include <iostream>

using namespace std;

void JugadorFutbol::ingresar_datos() {
    cout << "Ingrese nombre del jugador de futbol: ";
    cin >> nombre;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese goles: ";
    cin >> goles;
    cout << "Ingrese asistencias: ";
    cin >> asistencias;
    cout << "Ingrese partidos jugados: ";
    cin >> partidos_jugados;
}

void JugadorFutbol::mostrar_datos_personales() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void JugadorFutbol::mostrar_estadisticas() {
    cout << "Goles: " << goles << endl;
    cout << "Asistencias: " << asistencias << endl;
    cout << "Partidos jugados: " << partidos_jugados << endl;
}

void JugadorFutbol::mostrar_promedios() const {
    cout << "Promedio de goles: " << (goles / partidos_jugados) << endl;
    cout << "Promedio de asistencias: " << (asistencias / partidos_jugados) << endl;
}

void JugadorFutbol::guardar_datos_en_archivo(std::ofstream& archivo) const {
    archivo << "Nombre: " << nombre << endl;
    archivo << "Edad: " << edad << endl;
    archivo << "Goles: " << goles << endl;
    archivo << "Asistencias: " << asistencias << endl;
    archivo << "Partidos jugados: " << partidos_jugados << endl;
}
