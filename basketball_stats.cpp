#include "basketball.h"
#include <iostream>
#include <fstream>

using namespace std;

void JugadorBasketball::ingresar_datos() {
    cout << "Ingrese nombre del jugador de basketball: ";
    cin >> nombre;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese puntos: ";
    cin >> puntos;
    cout << "Ingrese tiros intentados: ";
    cin >> tiros_intentados;
    cout << "Ingrese tiros anotados: ";
    cin >> tiros_anotados;
    cout << "Ingrese triples intentados: ";
    cin >> triples_intentados;
    cout << "Ingrese triples anotados: ";
    cin >> triples_anotados;
    cout << "Ingrese tiros libres intentados: ";
    cin >> tiros_libres_intentados;
    cout << "Ingrese tiros libres anotados: ";
    cin >> tiros_libres_anotados;
    cout << "Ingrese rebotes: ";
    cin >> rebotes;
}

double JugadorBasketball::calcular_puntos_totales() const {
    return puntos;
}

double JugadorBasketball::calcular_porcentaje_tiros() const {
    return (tiros_anotados / tiros_intentados) * 100;
}

double JugadorBasketball::calcular_porcentaje_triples() const {
    return (triples_anotados / triples_intentados) * 100;
}

double JugadorBasketball::calcular_porcentaje_libres() const {
    return (tiros_libres_anotados / tiros_libres_intentados) * 100;
}

double JugadorBasketball::calcular_rebotes_totales() const {
    return rebotes;
}

double JugadorBasketball::calcular_eficiencia_de_tiro() const {
    return (tiros_anotados + triples_anotados + tiros_libres_anotados) / (tiros_intentados + triples_intentados + tiros_libres_intentados);
}

double JugadorBasketball::calcular_valoracion_eficiencia() const {
    return (puntos + rebotes) / 2;
}

void JugadorBasketball::mostrar_datos_personales() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void JugadorBasketball::mostrar_estadisticas() {
    cout << "Puntos: " << puntos << endl;
    cout << "Porcentaje de tiros: " << calcular_porcentaje_tiros() << "%" << endl;
    cout << "Porcentaje de triples: " << calcular_porcentaje_triples() << "%" << endl;
    cout << "Porcentaje de tiros libres: " << calcular_porcentaje_libres() << "%" << endl;
    cout << "Rebotes: " << rebotes << endl;
}

void JugadorBasketball::mostrar_promedios() const {
    cout << "Promedio de puntos: " << calcular_puntos_totales() << endl;
    cout << "Eficiencia de tiro: " << calcular_eficiencia_de_tiro() << endl;
    cout << "Valoración de eficiencia: " << calcular_valoracion_eficiencia() << endl;
}

void JugadorBasketball::guardar_datos_en_archivo(std::ofstream& archivo) const {
    archivo << "Nombre: " << nombre << endl;
    archivo << "Edad: " << edad << endl;
    archivo << "Puntos: " << puntos << endl;
    archivo << "Porcentaje de tiros: " << calcular_porcentaje_tiros() << "%" << endl;
    archivo << "Porcentaje de triples: " << calcular_porcentaje_triples() << "%" << endl;
    archivo << "Porcentaje de tiros libres: " << calcular_porcentaje_libres() << "%" << endl;
    archivo << "Rebotes: " << rebotes << endl;
}
