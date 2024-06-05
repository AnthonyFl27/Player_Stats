#include <iostream>
#include <string.h>
#include <cstdlib>  // Para system()

using namespace std;

// función para limpiar la terminal
void clean() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Inicializamos la creación de la estructura de las estadisticas de lo jugadores
struct estadisticas{
    int puntos;
    int robos;
    int rebotes;
    int bloqueos;
    int asistencias;
};

// Acá se almacenara los datos basicos del jugador, nombre, edad, estatura, etc...
struct jugador{
    string nombre;
    int edad;
    double estatura;
    double peso;
    int numero_jugador;
    int partidos_jugados;
};

void registrar_partidos( )

int main()
{
    clean();
    cout << "en este programa estara almacenado todo lo que se hará para registrar las estadisticas de los jugadores";


    return 0;
}
