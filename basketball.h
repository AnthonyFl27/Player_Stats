// Programa que te registra y te da porcentajes e estadisticas de un jugador de baloncesto
// creado por Anthony King Flores Garcia, estudiante de Ingeneria en Sistemas de Informacion en la Universidad Americana Falcultad de Ingeneria e Arquitectura

// Mi twitter https://x.com/An7honyF27 enlace a este codigo en github https://github.com/AnthonyFl27/Player_Stats/tree/basketball

#include <iostream>
#include <fstream>
#include <cstdlib>  // Para system()
#include <string>   // Para emplear strings en el codigo
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
    float estatura;
    float peso;

    //Datos del jugador y equipo
    string nombre_del_equipo;
    int numero_camiseta;
    int partidos_jugados;
    int minutos_jugados;

    // Datos estadisticos del baloncesto
    int puntos_totales;

    int tiros_anotados;
    int tiros_intentados;

    int triples_anotado;
    int triples_intentados;

    int libres_anotados;
    int libres_intentados;

    int rebotes_ofensivos;
    int rebotes_defensivos;

    int asistencias;
    int robos;
    int bloqueos;
    int perdidas;

public:
    // En la siguiente estructura creamos un metodo para que el usario ingrese los datos requeridos
    void ingresar_datos() {
        clean();
        // Comenzamos pidiendo que el usario ingrese sus datos generales
        cout << "  ____      _                                      _           \n";
        cout << " |    \\ ___| |_ ___ ___    ___ ___ ___ ___ ___ ___| |___ ___   \n";
        cout << " |  |  | .'|  _| . |_ -|  | . | -_|   | -_|  _| .'| | -_|_ -|  \n";
        cout << " |____/|__,|_| |___|___|  |_  |___|_|_|___|_| |__,|_|___|___|  \n";
        cout << "                          |___|                                \n";
        // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/

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
        cout << "\nIngrese el nombre del equipo: ";
        getline(cin, nombre_del_equipo);

        cout << "Ingrese el numero usado en su camista: ";
        cin  >> numero_camiseta;

        cout << "Ingrese los minutos jugados: ";
        cin >> minutos_jugados;

        cout << "Ingrese los partidos jugados: ";
        cin  >> partidos_jugados;

        // Ahora comenzamos a pedir los datos estadisticos del jugador
        // Luego vamos a preguntarle sobre los tiros que acerto y los que intento
        clean();
        cout << "  _____     _         _ _     _   _                  _     _      _               _            \n";
        cout << " |   __|___| |_ ___ _| |_|___| |_|_|___ ___ ___    _| |___| |    |_|_ _ ___ ___ _| |___ ___    \n";
        cout << " |   __|_ -|  _| .'| . | |_ -|  _| |  _| .'|_ -|  | . | -_| |    | | | | . | .'| . | . |  _|   \n";
        cout << " |_____|___|_| |__,|___|_|___|_| |_|___|__,|___|  |___|___|_|   _| |___|_  |__,|___|___|_|     \n";
        cout << "                                                               |___|   |___|                   \n";
        // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/

        cout << "\nIngrese el número de tiros anotados: ";
        cin >> tiros_anotados;
        cout << "Ingrese el número de tiros intentados: ";
        cin >> tiros_intentados;

        // Seguiremos pidiendo informacion sobre los triples
        cout << "\nIngrese el número de tiros de 3 puntos anotados: ";
        cin >> triples_anotado;
        cout << "Ingrese el número de tiros de 3 puntos intentados: ";
        cin >> triples_intentados;

        // Ahora los tiros de libres que anoto y que intento
        cout << "\nIngrese el número de tiros libres anotados: ";
        cin >> libres_anotados;
        cout << "Ingrese el número de tiros libres intentados: ";
        cin >> libres_intentados;

        // Seguiremos con la estadistica de los rebotes defensivos y ofensivos que se realizaron
        cout << "\nIngrese el número de rebotes ofensivos realizados: ";
        cin >> rebotes_ofensivos;
        cout << "Ingrese el número de rebotes defensivos realizados: ";
        cin >> rebotes_defensivos;

        // Ahora seguerimos con estadisticas que no tiene par, como lo es robos, asistencias, bloqueos y perdidas del jugador
        cout << "\nIngrese el número de asistencias dadas: ";
        cin >> asistencias;

        cout << "Ingrese el número de robos realizados: ";
        cin >> robos;

        cout << "Ingrese el número de bloqueos repartidos: ";
        cin >> bloqueos;

        cout << "Ingrese el número de perdidas cometidas: ";
        cin >> perdidas;
    }

    // Funcion para calcular los puntos totales teniendo en cuenta los tiros anotados
    int calcular_puntos_totales() const {
        int puntos_dos = tiros_anotados * 2; // Cada tiro vale 2 puntos
        int puntos_tres = triples_anotado * 3; // Cada triple vale 3 puntos
        int puntos_libres = libres_anotados * 1;  // Cada tiro libre vale 1 punto

        int puntos_totales = puntos_dos + puntos_tres + puntos_libres;
        return puntos_totales;
    }

    // Esta funcion es para calcular el porcentaje de los tiros, diviendo los anotados e intentados y multiplicandolos por 100
    double calcular_porcentaje_tiros() const {
        return static_cast <double> (tiros_anotados) / tiros_intentados * 100.0;
    }

    // Igual que la funcion pasada para calcular el porcentaje de los triples anotados
    double calcular_porcentaje_triples() const {
        return static_cast <double> (triples_anotado) / triples_intentados * 100.0;
    }

    // Otra funcion para calcular porcentaje de tiros libres
    double calcular_porcentaje_libres() const {
        return static_cast <double> (libres_anotados) / libres_intentados * 100.0;
    }

    // Esta es un poco más diferente a las demás porque se calcula la eficiencia del tiro el cual incluye las variables de todos los tiros, libres, triples y de campo
    double calcular_eficiencia_de_tiro() const {
        int total_tiros = tiros_intentados + triples_intentados + libres_intentados;
        return static_cast <double> (total_tiros) / puntos_totales * 100.0;
    }

    // Ya esta es para calcula la eficiencia del jugador el cual toma todas las estadisticas las suma y las resta con las perdidas para luego dividirlas en los partidos jugados
    double calcular_valoracion_eficiencia() const {
        return static_cast <double> (puntos_totales + rebotes_ofensivos + rebotes_defensivos + asistencias + robos + bloqueos - perdidas) / partidos_jugados;
    }

    // La ultima funcion muy basica el cual suma los rebotes of y def para dar un rebote total
    int calcular_rebotes_totales() const {
        return rebotes_ofensivos + rebotes_defensivos;
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
    }

    // Funcion para mostrarle las estadisticas del jugador
    void mostrar_estadisticas() {
        cout << "\nEstadísticas generales del del Jugador:" << endl;

        // Tiros anotados e intentados
        cout << "Tiros anotados: " << tiros_anotados << " / Tiros intentados: " << tiros_intentados << endl;

        // Triples anotados e intentados
        cout << "Triples anotados: " << triples_anotado << " / Triples intentados: " << triples_intentados << endl;

        // Tiros libres anotados e intentados
        cout << "Tiros libres anotados: " << libres_anotados << " / Tiros libres intentados: " << libres_intentados << endl;

        // Rebotes ofensivos y denfensivos realizados
        cout << "\nOtras estadísticas:" << endl;
        cout << "Rebotes ofensivos realizados: " << rebotes_ofensivos << endl;
        cout << "Rebotes defensivos realizados: " << rebotes_defensivos << endl;

        // Otras estadisticas como, asistencias, robos, bloqueos, perdidas
        cout << "Asistencias dadas: " << asistencias << endl;
        cout << "Robos realizados: " << robos << endl;
        cout << "Bloqueos repartidos: " << bloqueos << endl;
        cout << "Perdidas cometidas: " << perdidas << endl;

        //Datos del partido
        cout << "Partidos jugados: " << partidos_jugados << endl;
        cout << "Minutos jugados: " << minutos_jugados << endl;
    }

    // Seguido de eso, se creara la funcion para mostrarle los promedios al jugador en base a sus estadisticas
    void mostrar_promedios() const {
            cout << "\nPromedios y Estadisticas por Partido:" << endl;

            cout << "Puntos totales del jugador: " << calcular_puntos_totales() << endl;
            cout << "Porcentaje de tiros de campo: " << calcular_porcentaje_tiros() << "%" << endl;
            cout << "Porcentaje de triples: " << calcular_porcentaje_triples() << "%" << endl;
            cout << "Porcentaje de tiros libres: " << calcular_porcentaje_libres() << "%" << endl;

            cout << "Rebotes ofensivos: " << rebotes_ofensivos << " y rebotes defensivos: " << rebotes_defensivos << endl;
            cout << "Rebotes totales: " << calcular_rebotes_totales() << endl;

            cout << endl << "Asistencias por partido: " << asistencias << endl;
            cout << "Robos por partido: " << robos << endl;
            cout << "Bloqueos por partido: " << bloqueos << endl;
            cout << "Perdidas cometidas por partido: " << perdidas << endl;

            cout << "Eficiencia de tiro efectiva del jugador: " << calcular_eficiencia_de_tiro() << "%" << endl;
            cout << "Valoración de eficiencia del jugador: " << calcular_valoracion_eficiencia() << "%" << endl;
        }

    // Método para guardar los datos en un archivo
        void guardar_datos_en_archivo(ofstream& archivo) const {
            if (archivo.is_open()) {
                // Datos personales y generales del jugador
                archivo << " _____         _       _   _       _ _    _____ _       _          \n";
                archivo << " | __  |___ ___| |_ ___| |_| |_ ___| | |  |   __| |_ ___| |_ ___   \n";
                archivo << " | __ -| .'|_ -| '_| -_|  _| . | .'| | |  |__   |  _| .'|  _|_ -|  \n";
                archivo << " |_____|__,|___|_,_|___|_| |___|__,|_|_|  |_____|_| |__,|_| |___|  \n";
                // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/

                archivo << "Datos Personales del Jugador:" << endl;
                archivo << "Nombre: " << nombre << endl;
                archivo << "Edad: " << edad << " años" << endl;
                archivo << "Estatura: " << estatura << " metros" << endl;
                archivo << "Peso: " << peso << " kg" << endl;
                archivo << "Equipo: " << nombre_del_equipo << endl;
                archivo << "Número de camiseta: " << numero_camiseta << endl;
                archivo << "Partidos jugados: " << partidos_jugados << endl;
                archivo << "Minutos jugados: " << minutos_jugados << endl;

                // Estadisticas basicas del jugador
                archivo << "  _____     _         _ _     _   _                  _     _      _               _            \n";
                archivo << " |   __|___| |_ ___ _| |_|___| |_|_|___ ___ ___    _| |___| |    |_|_ _ ___ ___ _| |___ ___    \n";
                archivo << " |   __|_ -|  _| .'| . | |_ -|  _| |  _| .'|_ -|  | . | -_| |    | | | | . | .'| . | . |  _|   \n";
                archivo << " |_____|___|_| |__,|___|_|___|_| |_|___|__,|___|  |___|___|_|   _| |___|_  |__,|___|___|_|     \n";
                archivo << "                                                               |___|   |___|                   \n";
                // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/

                archivo << "\nEstadísticas del Jugador:" << endl;
                archivo << "Rebotes totales: " << calcular_rebotes_totales() << endl;
                archivo << "Asistencias dadas: " << asistencias << endl;
                archivo << "Robos realizados: " << robos << endl;
                archivo << "Bloqueos repartidos: " << bloqueos << endl;
                archivo << "Perdidas cometidas: " << perdidas << endl;

                // Datos estadisticos, promedios, eficiencia del jugador
                archivo << "\nEstadísticas y porcentajes del Jugador:" << endl;

                // Tiros anotados e intentados
                archivo << "Tiros anotados: " << tiros_anotados << " / Tiros intentados: " << tiros_intentados << endl;

                // Triples anotados e intentados
                archivo << "Triples anotados: " << triples_anotado << " / Triples intentados: " << triples_intentados << endl;

                // Tiros libres anotados e intentados
                archivo << "Tiros libres anotados: " << libres_anotados << " / Tiros libres intentados: " << libres_intentados << endl;

                archivo << "Puntos totales del jugador: " << calcular_puntos_totales() << endl;
                archivo << "\nPorcentaje de tiros de campo: " << calcular_porcentaje_tiros() << "%" << endl;
                archivo << "Porcentaje de triples: " << calcular_porcentaje_triples() << "%" << endl;
                archivo << "Porcentaje de tiros libres: " << calcular_porcentaje_libres() << "%" << endl;

                archivo << "Rebotes ofensivos: " << rebotes_ofensivos << " y rebotes defensivos: " << rebotes_defensivos << endl;
                archivo << "Rebotes totales: " << calcular_rebotes_totales() << endl;

                archivo << "Eficiencia de tiro efectiva del jugador: " << calcular_eficiencia_de_tiro() << "%" << endl;
                archivo << "Valoración de eficiencia del jugador: " << calcular_valoracion_eficiencia() << "%" << endl;
                // Salto de linea
                archivo << endl;
            } else {
                cout << "No se pudo abrir el archivo." << endl;
            }
        }
    };

    // En esta funcion void, lo que se hará es crear un metodo para guardar las estadisitcas calculadas y generadas en un archivo de texto si el usario lo desea
    void guardar_jugadores(const vector <Jugador> & jugadores, const string & nombreArchivo) {
        ofstream archivo(nombreArchivo.c_str()); // Creamos el objeto archivo para que este listo para escribir en el archivo
        if (archivo.is_open()) { // Si el archivo se abre, guardar los datos de los jugadores previamente ingresados
            for (size_t i = 0; i < jugadores.size(); ++i) {
                jugadores[i].guardar_datos_en_archivo(archivo);
            }
            archivo.close(); // Si esto se cumple cerrar el archivo ya guardado
            cout << "Datos guardados en " << nombreArchivo << endl; // Mensaje para decirnos donde se guardo nuestro archivo
        } else {
            cout << "No se pudo abrir el archivo." << endl; // Si el archivo no se guarda decirle al usario que no se ha podido abrir dicho archivo
        }
    }

    // Creamos la funcion main, la cual va contener el resto de funciones programadas y el menu de inicio de sesion
    int main() {
        vector <Jugador> jugadores;
        // definimos la variable opcion para poder hacer elecciones
        int opcion;

        // Iniciamos la funcion main con un do while y toda la sentecia de opciones que queremos ejecutar
        do {
            clean();
            cout << " _____                 _____         _       _   _       _ _  \n";
            cout << " |     |___ ___ _ _    | __  |___ ___| |_ ___| |_| |_ ___| | |\n";
            cout << " | | | | -_|   | | |   | __ -| .'|_ -| '_| -_|  _| . | .'| | |\n";
            cout << " |_|_|_|___|_|_|___|   |_____|__,|___|_,_|___|_| |___|__,|_|_|\n";
            // Codigo Ascii generado en https://www.creativefabrica.com/es/tools/ascii-art-generator/?text=Menu
            cout << "1. Ingresar datos de un nuevo jugador" << endl;
            cout << "2. Mostrar datos de todos los jugadores" << endl;
            cout << "3. Guardar datos de todos los jugadores en un archivo" << endl;
            cout << "4. Salir" << endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion;
            cin.ignore(); // Ignorar el salto de línea pendiente

            // Creamos el menu, siendo la primera opcion el numero 1, esto le permetira agregar un jugador luego de uno creado o crear uno nuevo
            switch (opcion) {
                case 1: {
                    Jugador jugador;
                    jugador.ingresar_datos();
                    jugadores.push_back(jugador);
                    break;
                }
                // En la opcion dos tenemos que este se le mostrara las estadisticas, de su jugador o jugadores creados
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
                // En la opcion 3 se creara el archivo de texto para que este tenga un registro luego de salir del programa
                case 3:
                    guardar_jugadores(jugadores, "datos_jugadores.txt");
                    break;
                // En la opcion 4 se le permitira salir del programa sin ejecutar alguna combinacion de teclas y seguir usando la lineas de comando empleada
                case 4:
                    cout << "Saliendo del programa." << endl;
                    break;
                // Como predeterminado tenemos que si este ingresa un caracter no pedido se le saltara advertencia de opcion no valida y no dejara elegir ejecutar el resto de funciones
                default:
                    cout << "Opcion no valida." << endl;
                    break;
            }
        } while (opcion != 4); // Cerramos el do con un while y la opcion 4

    return 0;
}
