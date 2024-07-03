Proceso RegistroDatosEquipo
    Definir cantpartp, victorias, derrotas, empates, puntos, golesafavortotales, golesencontratotales, golesesperadosproxpart, totaltarjetasamarillas, totaltarjetasrojas Como Entero
    Definir totalPartidos Como Entero
    Definir porcentajeVictorias, porcentajeDerrotas, porcentajeEmpates Como Real
    Definir promedioGolesAFavor, promedioGolesEnContra Como Real
	
    // Solicitar y registrar los datos
    Escribir "Ingrese la cantidad de partidos pendientes del equipo: "
    Leer cantpartp
	
    Escribir "Ingrese la cantidad de victorias del equipo: "
    Leer victorias
	
    Escribir "Ingrese la cantidad de derrotas del equipo: "
    Leer derrotas
	
    Escribir "Ingrese la cantidad de empates del equipo: "
    Leer empates
	
    Escribir "Ingrese el total de puntos del equipo: "
    Leer puntos
	
    Escribir "Ingrese la cantidad de goles a favor: "
    Leer golesafavortotales
	
    Escribir "Ingrese la cantidad de goles en contra: "
    Leer golesencontratotales
	
    Escribir "Ingrese la cantidad de goles esperados el próximo partido: "
    Leer golesesperadosproxpart
	
    Escribir "Ingrese el total de tarjetas amarillas del equipo: "
    Leer totaltarjetasamarillas
	
    Escribir "Ingrese el total de tarjetas rojas del equipo: "
    Leer totaltarjetasrojas
	
    // Calcular estadísticas
    totalPartidos = victorias + derrotas + empates
    Si totalPartidos > 0 Entonces
        porcentajeVictorias = (victorias / totalPartidos) * 100
        porcentajeDerrotas = (derrotas / totalPartidos) * 100
        porcentajeEmpates = (empates / totalPartidos) * 100
        promedioGolesAFavor = golesafavortotales / totalPartidos
        promedioGolesEnContra = golesencontratotales / totalPartidos
    SiNo
        porcentajeVictorias = 0
        porcentajeDerrotas = 0
        porcentajeEmpates = 0
        promedioGolesAFavor = 0
        promedioGolesEnContra = 0
    FinSi
	
    // Mostrar los datos registrados
    Escribir "La cantidad de partidos pendientes del equipo son de: ", cantpartp, " partidos"
    Escribir "La cantidad de victorias del equipo es de: ", victorias
    Escribir "La cantidad de derrotas del equipo es de: ", derrotas
    Escribir "La cantidad de empates del equipo es de: ", empates
    Escribir "El total de puntos del equipo es de: ", puntos
    Escribir "La cantidad de goles a favor es de: ", golesafavortotales
    Escribir "La cantidad de goles en contra es de: ", golesencontratotales
    Escribir "La cantidad de goles esperados el próximo partido es de: ", golesesperadosproxpart
    Escribir "El total de tarjetas amarillas del equipo es de: ", totaltarjetasamarillas
    Escribir "El total de tarjetas rojas del equipo es de: ", totaltarjetasrojas
	
    // Mostrar estadísticas calculadas
    Escribir "Porcentaje de victorias: ", porcentajeVictorias, "%"
    Escribir "Porcentaje de derrotas: ", porcentajeDerrotas, "%"
    Escribir "Porcentaje de empates: ", porcentajeEmpates, "%"
    Escribir "Promedio de goles a favor por partido: ", promedioGolesAFavor
    Escribir "Promedio de goles en contra por partido: ", promedioGolesEnContra
FinProceso
