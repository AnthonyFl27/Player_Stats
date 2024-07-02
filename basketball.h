#ifndef BASKETBALL_H
#define BASKETBALL_H

#include <string>
#include <fstream>

class JugadorBasketball {
public:
    void ingresar_datos();
    double calcular_puntos_totales() const;
    double calcular_porcentaje_tiros() const;
    double calcular_porcentaje_triples() const;
    double calcular_porcentaje_libres() const;
    double calcular_rebotes_totales() const;
    double calcular_eficiencia_de_tiro() const;
    double calcular_valoracion_eficiencia() const;
    void mostrar_datos_personales();
    void mostrar_estadisticas();
    void mostrar_promedios() const;
    void guardar_datos_en_archivo(std::ofstream& archivo) const;

private:
    std::string nombre;
    int edad;
    double puntos;
    double tiros_intentados;
    double tiros_anotados;
    double triples_intentados;
    double triples_anotados;
    double tiros_libres_intentados;
    double tiros_libres_anotados;
    double rebotes;
};

#endif // BASKETBALL_H
