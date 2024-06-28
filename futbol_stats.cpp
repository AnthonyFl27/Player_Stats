#include <iostream>
#include <vector>
#include <string>
#include "futbol.h"

using namespace std;

struct partidos {
    int golesafavor;   // Eliminar la inicialización aquí
    int golesencontra; // Eliminar la inicialización aquí
};

void ejecutar_futboll_stats() {
    cout << "Ejecutando modulo de Futbol Stats...\n";
}

int main() {
    string equipo;
    int cantpartj, cantpartp, victorias = 0, derrotas = 0, empates = 0, puntos = 0;

    printf("Bienvenido a la seccion futbolitica\n");
    printf("Ingrese el nombre del equipo:\n");
    getline(cin, equipo);

    cout << "\nDigita la cantidad de partidos pendientes: " << endl;
    cin >> cantpartp;

    cout << "\nDigita la cantidad de partidos jugados: " << endl;
    cin >> cantpartj;
    while (cantpartj <= 0) {
        cout << "Digite un numero valido (mayor que 0): ";
        cin >> cantpartj;
    }
    partidos partidostotales[cantpartj];
    for (int i = 0; i < cantpartj; ++i) {
        partidostotales[i].golesafavor = 0;   // Inicializar manualmente aquí
        partidostotales[i].golesencontra = 0; // Inicializar manualmente aquí

        cout << "\nresultado partido " << i + 1 << ":" << endl;
        cout << "Goles a favor: ";
        cin >> partidostotales[i].golesafavor;
        cout << "Goles en contra: ";
        cin >> partidostotales[i].golesencontra;
    }

    int golesafavortotales = 0, golesencontratotales = 0;
    for (int i = 0; i < cantpartj; ++i) {
        golesafavortotales += partidostotales[i].golesafavor;
        golesencontratotales += partidostotales[i].golesencontra;

        if (partidostotales[i].golesafavor > partidostotales[i].golesencontra) {
            victorias++;
            puntos += 3;
        } else if (partidostotales[i].golesafavor < partidostotales[i].golesencontra) {
            derrotas++;
        } else {
            empates++;
            puntos += 1;
        }
    }
    double golesesperadosproxpart = static_cast<double>(golesafavortotales) / cantpartj;

    const int maxjugadores = 100;
    struct jugadores {
        string nombre, posicion;
        int dorsal;
        int edad;
        int goles;
        int asistencias;
        int tarjetasamarillas;
        int tarjetasrojas;
        int totaltarjetas;
        int golesmasasistencias;
    };
    jugadores equipoplant[maxjugadores];
    int numjugadores;
    int totaltarjetasamarillas = 0;
    int totaltarjetasrojas = 0;
    cout << "\nDigita la cantidad de jugadores de la plantilla(maximo " << maxjugadores << "):";
    cin >> numjugadores;
    if (numjugadores < 1 || numjugadores > maxjugadores) {
        cout << "Numero de jugadores fuera del rango permitido." << endl;
        return 1;
    }
    for (int i = 0; i < numjugadores; ++i) {
        cout << "Registro de jugadores";
        cout << "\nIngrese los datos del jugador " << i + 1 << ":" << endl;
        cin.ignore();
        cout << "Nombre del jugador: ";
        getline(cin, equipoplant[i].nombre);
        cout << "Posicion del jugador: ";
        getline(cin, equipoplant[i].posicion);
        cout << "Dorsal del jugador: ";
        cin >> equipoplant[i].dorsal;
        cout << "Edad del jugador :";
        cin >> equipoplant[i].edad;
        cout << "Goles del jugador: ";
        cin >> equipoplant[i].goles;
        cout << "Asistencias del jugador: ";
        cin >> equipoplant[i].asistencias;
        cout << "Total tarjetas amarillas: ";
        cin >> equipoplant[i].tarjetasamarillas;
        totaltarjetasamarillas += equipoplant[i].tarjetasamarillas;
        cout << "Total tarjetas rojas: ";
        cin >> equipoplant[i].tarjetasrojas;
        totaltarjetasrojas += equipoplant[i].tarjetasrojas;
        equipoplant[i].totaltarjetas = equipoplant[i].tarjetasamarillas + equipoplant[i].tarjetasrojas;
        equipoplant[i].golesmasasistencias = equipoplant[i].goles + equipoplant[i].asistencias;
    }
    cout << "\nEstadisticas del equipo :" << endl;
    cout << "La cantidad de partidos pendientes del equipo son de : " << cantpartp << "\npartidos" << endl;
    cout << "La cantidad de victorias del equipo es de :" << victorias << endl;
    cout << "La cantidad de derrotas del equipo es de :" << derrotas << endl;
    cout << "La cantidad de empates del equipo es de: " << empates << endl;
    cout << "El total de puntos del equipo es de: " << puntos << endl;
    cout << "La cantidad de goles a favor es de :" << golesafavortotales << endl;
    cout << "La cantidad de goles en contra es de :" << golesencontratotales << endl;
    cout << "La cantidad de goles esperados el proximo partido es de: " << golesesperadosproxpart << endl;
    cout << "El total de tarjetas amarillas del equipo es de: " << totaltarjetasamarillas << endl;
    cout << "El total de tarjetas rojas del equipo es de: " << totaltarjetasrojas << endl;

    cout << "\nEstadisticas de jugadores: " << endl;
    for (int i = 0; i < numjugadores; ++i) {
        cout << "La cantidad de jugadores de la plantilla es de: " << numjugadores;
        cout << "\nJugador " << i + 1 << ":" << endl;
        cout << "Nombre: " << equipoplant[i].nombre << endl;
        cout << "posicion: " << equipoplant[i].posicion << endl;
        cout << "Dorsal: " << equipoplant[i].dorsal << endl;
        cout << "Edad: " << equipoplant[i].edad << endl;
        cout << "Goles: " << equipoplant[i].goles << endl;
        cout << "Asistencias: " << equipoplant[i].asistencias << endl;
        cout << "Tarjetas amarillas: " << equipoplant[i].tarjetasamarillas << endl;
        cout << "Tarjetas rojas: " << equipoplant[i].tarjetasrojas << endl;
        cout << "Total de tarjetas: " << equipoplant[i].totaltarjetas << " (Amarillas: " << equipoplant[i].tarjetasamarillas << ", Rojas: " << equipoplant[i].tarjetasrojas << ")" << endl;
        cout << "Total de goles + asistencias: " << equipoplant[i].golesmasasistencias << " (Goles: " << equipoplant[i].goles << ", Asistencias: " << equipoplant[i].asistencias << ")" << endl;
    }
    return 0;
}
