#ifndef FUTBOL_H
#define FUTBOL_H

#include <string>
#include <fstream>

class JugadorFutbol {
public:
    void ingresar_datos();
    void mostrar_datos_personales();
    void mostrar_estadisticas();
    void mostrar_promedios() const;
    void guardar_datos_en_archivo(std::ofstream& archivo) const;

private:
    std::string nombre;
    int edad;
    double goles;
    double asistencias;
    double partidos_jugados;
};

#endif // FUTBOL_H
