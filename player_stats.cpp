#include "futbol.h"
#include "basketball.h"
#include <iostream>
#include <fstream>

using namespace std;

void clean() {
    ofstream archivo_futbol("estadisticas_futbol.txt");
    archivo_futbol.close();

    ofstream archivo_basketball("estadisticas_basketball.txt");
    archivo_basketball.close();
}

void menu_futbol() {
    JugadorFutbol jugador;
    int opcion;
    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Crear nuevo jugador\n";
        cout << "2. Mostrar estadísticas\n";
        cout << "3. Guardar estadísticas en archivo\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                jugador.ingresar_datos();
                break;
            case 2:
                jugador.mostrar_datos_personales();
                jugador.mostrar_estadisticas();
                jugador.mostrar_promedios();
                break;
            case 3:
                {
                    ofstream archivo("estadisticas_futbol.txt", ios::app);
                    jugador.guardar_datos_en_archivo(archivo);
                    archivo.close();
                }
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 4);
}

void menu_basketball() {
    JugadorBasketball jugador;
    int opcion;
    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Crear nuevo jugador\n";
        cout << "2. Mostrar estadísticas\n";
        cout << "3. Guardar estadísticas en archivo\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                jugador.ingresar_datos();
                break;
            case 2:
                jugador.mostrar_datos_personales();
                jugador.mostrar_estadisticas();
                jugador.mostrar_promedios();
                break;
            case 3:
                {
                    ofstream archivo("estadisticas_basketball.txt", ios::app);
                    jugador.guardar_datos_en_archivo(archivo);
                    archivo.close();
                }
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 4);
}

int main() {
    int opcion;
    cout << "Seleccione la opción:\n";
    cout << "1. Estadísticas de Futbol\n";
    cout << "2. Estadísticas de Basketball\n";
    cout << "Opción: ";
    cin >> opcion;

    if (opcion == 1) {
        menu_futbol();
    } else if (opcion == 2) {
        menu_basketball();
    } else {
        cout << "Opción no válida" << endl;
    }

    return 0;
}
