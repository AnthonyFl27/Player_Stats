SubProceso clean
    definir archivo_futbol como archivo
    definir archivo_basketball como archivo
    
    abrir archivo_futbol como texto modo escribir, con nombre "estadisticas_futbol.txt"
    cerrar archivo archivo_futbol
	
    abrir archivo_basketball como texto modo escribir, con nombre "estadisticas_basketball.txt"
    cerrar archivo archivo_basketball
FinSubProceso

SubProceso menu_futbol
    definir jugador como JugadorFutbol
    definir opcion como entero
    repetir
        Escribir "Seleccione una opci�n:"
        Escribir "1. Crear nuevo jugador"
        Escribir "2. Mostrar estad�sticas"
        Escribir "3. Guardar estad�sticas en archivo"
        Escribir "4. Salir"
        Escribir "Opci�n: "
        Leer opcion
		
        Segun opcion Hacer
            1:
                llamar a jugador.ingresar_datos()
            2:
                llamar a jugador.mostrar_datos_personales()
                llamar a jugador.mostrar_estadisticas()
                llamar a jugador.mostrar_promedios()
            3:
                definir archivo como archivo
                abrir archivo como texto modo agregar, con nombre "estadisticas_futbol.txt"
                llamar a jugador.guardar_datos_en_archivo(archivo)
                cerrar archivo archivo
            4:
                Escribir "Saliendo..."
            De Otro Modo:
                Escribir "Opci�n no v�lida"
        FinSegun
    hasta que opcion = 4
FinSubProceso

SubProceso menu_basketball
    definir jugador como JugadorBasketball
    definir opcion como entero
    repetir
        Escribir "Seleccione una opci�n:"
        Escribir "1. Crear nuevo jugador"
        Escribir "2. Mostrar estad�sticas"
        Escribir "3. Guardar estad�sticas en archivo"
        Escribir "4. Salir"
        Escribir "Opci�n: "
        Leer opcion
		
        Segun opcion Hacer
            1:
                llamar a jugador.ingresar_datos()
            2:
                llamar a jugador.mostrar_datos_personales()
                llamar a jugador.mostrar_estadisticas()
                llamar a jugador.mostrar_promedios()
            3:
                definir archivo como archivo
                abrir archivo como texto modo agregar, con nombre "estadisticas_basketball.txt"
                llamar a jugador.guardar_datos_en_archivo(archivo)
                cerrar archivo archivo
            4:
                Escribir "Saliendo..."
            De Otro Modo:
                Escribir "Opci�n no v�lida"
        FinSegun
    hasta que opcion = 4
FinSubProceso

Proceso principal
    definir opcion como entero
    Escribir "Seleccione la opci�n:"
    Escribir "1. Estad�sticas de Futbol"
    Escribir "2. Estad�sticas de Basketball"
    Escribir "Opci�n: "
    Leer opcion
	
    Segun opcion Hacer
        1:
            llamar a menu_futbol()
        2:
            llamar a menu_basketball()
        De Otro Modo:
            Escribir "Opci�n no v�lida"
    FinSegun
FinProceso