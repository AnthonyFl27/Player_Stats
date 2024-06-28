#include <iostream>
#include <cstdlib>  // Para system()
#include "futbol.h"
#include "basketball.h"

using namespace std;

// función para limpiar la terminal
void clean() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void mostrar_menu() {
    cout << "Seleccione el deporte con el que desea trabajar: \n ";
    cout << "1.Baloncesto\n";
    cout << "2.Futbol\n";
    cout << "3.Salir del programa...\n";
    cout << "Seleccione una opcion: ";
    cin.ignore();
}

int main()
{
    int opcion;
    mostrar_menu();
    cin >> opcion;

    switch (opcion) {
        case 1:
            ejecutar_basketball_stats();
            break;
        case 2:
            ejecutar_futboll_stats();
            break;
        case 3:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
