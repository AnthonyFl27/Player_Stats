#include <iostream>
#include <string.h>
#include <cstdlib>  // Para system()
#include <string>
#include <vector>

using namespace std;

// función para limpiar la terminal
void clean() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

class Jugador {
private:
    // Acá se definiran las variables para los datos generales del jugador
    string nombre;
    int edad;
    int estatura;
    float peso;

    //Datos del jugador y equipo
    string nombre_del_equipo;
    int numero_camiseta;
    int partidos_jugados;

    // Datos estadisticos del baloncesto
    int puntos;
    int rebotes;
    int asistencias;
    int robos;
    int bloqueos;
    int faltas_cometidas;

public:
    // En la siguiente estructura creamos un metodo para que el usario ingrese los datos requeridos
    void ingresar_datos() {
        // Comenzamos pidiendo que el usario ingrese sus datos generales
        cout << "Ingrese el nombre del jugador de Baloncesto: ";
        getline(cin, nombre);

        cout << "Ingrese la edad del jugador: ";
        cin  >> edad;

        cout << "Ingrese la estatura del jugador (Ingrese la estatura en metros): ";
        cin  >> estatura;

        cout << "Ingrese el peso del jugador (Ingrese el peso del jugador): ";
        cin  >> peso;
        cin.ignore();

        // Acá se le estaran pidiendo datos un poco fuera de datos personales
        cout << "Ingrese el nombre del equipo: ";
        getline(cin, nombre_del_equipo);

        cout << "Ingrese el numero usado en su camista: ";
        cin  >> numero_camiseta;

        cout << "Ingrese los partidos jugados: ";
        cin  >> partidos_jugados;

        // Ahora comenzamos a pedir los datos estadisticos del jugador
        cout << "Ingrese el número de puntos: ";
        cin >> puntos;

        cout << "Ingrese el número de rebotes: ";
        cin >> rebotes;

        cout << "Ingrese el número de asistencias: ";
        cin >> asistencias;

        cout << "Ingrese el número de robos: ";
        cin >> robos;

        cout << "Ingrese el número de bloqueos: ";
        cin >> bloqueos;

        cout << "Ingrese el número de faltas cometidas: ";
        cin >> faltas_cometidas;
    }

    // Ahora vamos a crear la funcion para mostrarle estos datos al usario
    void muestra_datos() {
        cout << "\nEstadísticas del Jugador:" << endl;
        cout << "Puntos: " << puntos << endl;
        cout << "Rebotes: " << rebotes << endl;
        cout << "Asistencias: " << asistencias << endl;
        cout << "Robos: " << robos << endl;
        cout << "Bloqueos: " << bloqueos << endl;
        cout << "Faltas cometidas: " << faltas_cometidas << endl;
    }

    // Seguido de eso, se creara la funcion para mostrarle los promedios al jugador en base a sus estadisticas
    void mostrar_promedios() {
        if (partidos_jugados > 0) {
            cout << "\nPromedios por Partido:" << endl;
            cout << "Puntos por partido: " << static_cast <float> (puntos) / partidos_jugados << endl;
            cout << "Rebotes por partido: " << static_cast <float> (rebotes) / partidos_jugados << endl;
            cout << "Asistencias por partido: " << static_cast <float> (asistencias) / partidos_jugados << endl;
            cout << "Robos por partido: " << static_cast <float> (robos) / partidos_jugados << endl;
            cout << "Bloqueos por partido: " << static_cast <float> (bloqueos) / partidos_jugados << endl;
            cout << "Faltas cometidas por partido: " << static_cast <float> (faltas_cometidas) / partidos_jugados << endl;
        } else {
            cout << "No se han jugado partidos." << endl;
        }
    }
};

/*
cout << "";
cin  >> ;
*/
