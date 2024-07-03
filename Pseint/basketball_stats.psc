Proceso RegistroEstadisticasBaloncesto
    Definir numero_camiseta, partidos_jugados, minutos_jugados Como Entero
    Definir puntos_totales, tiros_anotados, tiros_intentados Como Entero
    Definir triples_anotados, triples_intentados Como Entero
    Definir libres_anotados, libres_intentados Como Entero
    Definir rebotes_ofensivos, rebotes_defensivos Como Entero
    Definir asistencias, robos, bloqueos, perdidas Como Entero
    Definir porcentajeTiros, porcentajeTriples, porcentajeLibres Como Real
    Definir promedioPuntos, promedioRebotes, promedioAsistencias Como Real
	
    // Solicitar y registrar los datos
    Escribir "Ingrese el número de camiseta: "
    Leer numero_camiseta
	
    Escribir "Ingrese la cantidad de partidos jugados: "
    Leer partidos_jugados
	
    Escribir "Ingrese la cantidad de minutos jugados: "
    Leer minutos_jugados
	
    Escribir "Ingrese la cantidad de puntos totales: "
    Leer puntos_totales
	
    Escribir "Ingrese la cantidad de tiros anotados: "
    Leer tiros_anotados
	
    Escribir "Ingrese la cantidad de tiros intentados: "
    Leer tiros_intentados
	
    Escribir "Ingrese la cantidad de triples anotados: "
    Leer triples_anotados
	
    Escribir "Ingrese la cantidad de triples intentados: "
    Leer triples_intentados
	
    Escribir "Ingrese la cantidad de libres anotados: "
    Leer libres_anotados
	
    Escribir "Ingrese la cantidad de libres intentados: "
    Leer libres_intentados
	
    Escribir "Ingrese la cantidad de rebotes ofensivos: "
    Leer rebotes_ofensivos
	
    Escribir "Ingrese la cantidad de rebotes defensivos: "
    Leer rebotes_defensivos
	
    Escribir "Ingrese la cantidad de asistencias: "
    Leer asistencias
	
    Escribir "Ingrese la cantidad de robos: "
    Leer robos
	
    Escribir "Ingrese la cantidad de bloqueos: "
    Leer bloqueos
	
    Escribir "Ingrese la cantidad de perdidas: "
    Leer perdidas
	
    // Calcular estadísticas
    Si tiros_intentados > 0 Entonces
        porcentajeTiros = (tiros_anotados / tiros_intentados) * 100
    SiNo
        porcentajeTiros = 0
    FinSi
	
    Si triples_intentados > 0 Entonces
        porcentajeTriples = (triples_anotados / triples_intentados) * 100
    SiNo
        porcentajeTriples = 0
    FinSi
	
    Si libres_intentados > 0 Entonces
        porcentajeLibres = (libres_anotados / libres_intentados) * 100
    SiNo
        porcentajeLibres = 0
    FinSi
	
    Si partidos_jugados > 0 Entonces
        promedioPuntos = puntos_totales / partidos_jugados
        promedioRebotes = (rebotes_ofensivos + rebotes_defensivos) / partidos_jugados
        promedioAsistencias = asistencias / partidos_jugados
    SiNo
        promedioPuntos = 0
        promedioRebotes = 0
        promedioAsistencias = 0
    FinSi
	
    // Mostrar los datos registrados
    Escribir "Número de camiseta: ", numero_camiseta
    Escribir "Partidos jugados: ", partidos_jugados
    Escribir "Minutos jugados: ", minutos_jugados
    Escribir "Puntos totales: ", puntos_totales
    Escribir "Tiros anotados: ", tiros_anotados
    Escribir "Tiros intentados: ", tiros_intentados
    Escribir "Triples anotados: ", triples_anotados
    Escribir "Triples intentados: ", triples_intentados
    Escribir "Libres anotados: ", libres_anotados
    Escribir "Libres intentados: ", libres_intentados
    Escribir "Rebotes ofensivos: ", rebotes_ofensivos
    Escribir "Rebotes defensivos: ", rebotes_defensivos
    Escribir "Asistencias: ", asistencias
    Escribir "Robos: ", robos
    Escribir "Bloqueos: ", bloqueos
    Escribir "Pérdidas: ", perdidas
	
    // Mostrar estadísticas calculadas
    Escribir "Porcentaje de tiros anotados: ", porcentajeTiros, "%"
    Escribir "Porcentaje de triples anotados: ", porcentajeTriples, "%"
    Escribir "Porcentaje de libres anotados: ", porcentajeLibres, "%"
    Escribir "Promedio de puntos por partido: ", promedioPuntos
    Escribir "Promedio de rebotes por partido: ", promedioRebotes
    Escribir "Promedio de asistencias por partido: ", promedioAsistencias
FinProceso
