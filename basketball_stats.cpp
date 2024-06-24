#include <iostream>
#include <fstream>
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
    void mostrar_datos_personales() {
        cout << "\nDatos Personales del Jugador:" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Estatura: " << estatura << " metros" << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Equipo: " << nombre_del_equipo << endl;
        cout << "Número de camiseta: " << numero_camiseta << endl;
        cout << "Partidos jugados: " << partidos_jugados << endl;
    }

    // Funcion para mostrarle las estadisticas del jugador
    void mostrar_estadisticas() {
        cout << "\nEstadísticas pers del Jugador:" << endl;
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

    // Método para guardar los datos en un archivo
        void guardarDatosEnArchivo(ofstream& archivo) const {
            if (archivo.is_open()) {
                archivo << "Datos Personales del Jugador:" << endl;
                archivo << "Nombre: " << nombre << endl;
                archivo << "Edad: " << edad << " años" << endl;
                archivo << "Estatura: " << estatura << " metros" << endl;
                archivo << "Peso: " << peso << " kg" << endl;
                archivo << "Equipo: " << nombre_del_equipo << endl;
                archivo << "Número de camiseta: " << numero_camiseta << endl;
                archivo << "Partidos jugados: " << partidos_jugados << endl;
                archivo << "\nEstadísticas del Jugador:" << endl;
                archivo << "Puntos: " << puntos << endl;
                archivo << "Rebotes: " << rebotes << endl;
                archivo << "Asistencias: " << asistencias << endl;
                archivo << "Robos: " << robos << endl;
                archivo << "Bloqueos: " << bloqueos << endl;
                archivo << "Faltas cometidas: " << faltas_cometidas << endl;
                if (partidos_jugados > 0) {
                    archivo << "\nPromedios por Partido:" << endl;
                    archivo << "Puntos por partido: " << static_cast<float>(puntos) / partidos_jugados << endl;
                    archivo << "Rebotes por partido: " << static_cast<float>(rebotes) / partidos_jugados << endl;
                    archivo << "Asistencias por partido: " << static_cast<float>(asistencias) / partidos_jugados << endl;
                    archivo << "Robos por partido: " << static_cast<float>(robos) / partidos_jugados << endl;
                    archivo << "Bloqueos por partido: " << static_cast<float>(bloqueos) / partidos_jugados << endl;
                    archivo << "Faltas cometidas por partido: " << static_cast<float>(faltas_cometidas) / partidos_jugados << endl;
                }
                archivo << endl;
            } else {
                cout << "No se pudo abrir el archivo." << endl;
            }
        }
    };

    void guardar_jugadores(const vector<Jugador>& jugadores, const string& nombreArchivo) {
        ofstream archivo(nombreArchivo.c_str());
        if (archivo.is_open()) {
            for (size_t i = 0; i < jugadores.size(); ++i) {
                jugadores[i].guardarDatosEnArchivo(archivo);
            }
            archivo.close();
            cout << "Datos guardados en " << nombreArchivo << endl;
        } else {
            cout << "No se pudo abrir el archivo." << endl;
        }
    }

    int main() {
        vector<Jugador> jugadores;
        int opcion;

        do {
            clean();
            cout << " _____               \n";
            cout << " |     |___ ___ _ _  \n";
            cout << " | | | | -_|   | | | \n";
            cout << " |_|_|_|___|_|_|___| \n";
            // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/?text=Menu
            cout << "1. Ingresar datos de un nuevo jugador" << endl;
            cout << "2. Mostrar datos de todos los jugadores" << endl;
            cout << "3. Guardar datos de todos los jugadores en un archivo" << endl;
            cout << "4. Salir" << endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion;
            cin.ignore(); // Ignorar el salto de línea pendiente

            switch (opcion) {
                case 1: {
                    Jugador jugador;
                    jugador.ingresar_datos();
                    jugadores.push_back(jugador);
                    break;
                }
                case 2:
                    for (size_t i = 0; i < jugadores.size(); ++i) {
                        cout << "\nJugador " << i + 1 << ":" << endl;
                        jugadores[i].mostrar_datos_personales();
                        jugadores[i].mostrar_estadisticas();
                        jugadores[i].mostrar_promedios();
                        // Espera a que el usuario presione Enter antes de limpiar la pantalla
                        cout << "\nPresione Enter para continuar...";
                        cin.ignore();
                    }
                    clean(); // Mover clean() aquí para limpiar solo después de mostrar todos los datos
                    break;
                case 3:
                    guardar_jugadores(jugadores, "datos_jugadores.txt");
                    break;
                case 4:
                    cout << "Saliendo del programa." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
                    break;
            }
        } while (opcion != 4);

    return 0;
}

/*
cout << "";
cin  >> ;
*/
