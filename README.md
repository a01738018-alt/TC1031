# TC1031

DSA (Data Structures and Algorithms)

### Problema 1 (Algoritmo Ordenamiento)
##### Link video: 
##### Link submission: 

### Problema 2 (Estructura lineal)
##### Link video: 
##### Link submission: 

### Problema 3 (Estructura no lineal)
##### Link video: 
##### Link submission: 


# Proyecto: Simulador de Base de Datos de NBA
> Este proyecto utiliza datos extraídos de la página [basketball-reference](https://www.basketball-reference.com/leagues/NBA_2025.html) siguiendo su formato de organización de listas.  
> El programa ofrece las siguientes funcionalidades:  
1. Mostrar los datos del archivo CSV (tabla de posiciones).  
2. Ordenar los datos mediante el algoritmo merge sort.  
3. Buscar un equipo por nombre utilizando búsqueda lineal.  
4. Acceder a un equipo por su ranking mediante una estructura de árbol de búsqueda binaria (BST).  
5. Insertar un nuevo equipo tanto en el árbol como en el vector.  
6. Al salir del programa, se genera o sobrescribe un archivo de texto llamado 'reporteNBA.txt', que incluye la tabla de posiciones actualizada con los equipos añadidos durante la ejecución.

## Descripción del avance 1
> Este avance implementa el algoritmo de ordenamiento merge sort para clasificar equipos según sus porcentajes de tiros de tres y dos puntos, así como el algoritmo de búsqueda lineal para localizar equipos específicos por nombre.  

## Descripción del avance 2
> Aquí se introduce una estructura de datos de árbol de búsqueda binaria (BST), utilizada para localizar equipos por su ranking. Además, se implementa la funcionalidad de insertar nuevos equipos al árbol y evaluarlos dentro del mismo.  

## Descripción del avance 3
> En este avance, se añade la función de lectura de datos externos, como los equipos añadidos durante la ejecución, para incluirlos en la impresión final. Se emplea la biblioteca `<fstream>` para realizar esta tarea.  

## Instrucciones para compilar el avance del proyecto  
Ejecutar el siguiente comando en la terminal:  
`g++ bst.h bst.cpp NBAdata.h NBAdata.cpp main.cpp -o nba`  

## Instrucciones para ejecutar el avance del proyecto  
Ejecutar el siguiente comando en la terminal:  
`./nba`  

> Posteriormente, interactúa con el menú a través de las opciones disponibles.  

## Descripción de las entradas del avance del proyecto  
Entrada: Archivo llamado `nba_data.csv`.  
Formato: Valores separados por comas (CSV).  
Por ejemplo si te interesa saber los datos del equipo de Stephen Curry que son GDW:  
`17,Golden State Warriors,0.364,0.528,48,34,40.8,90.4,0.451,15.4,42.4,82,25.3,48.0,240.6,16.9,22.1,0.764,12.5,32.8,45.4,29.1,9.4,4.8,14.0,19.2,113.8`.  
En este proyecto solo se utilizan las 6 variables: ranking, nombre, porcentaje de tiros de tres puntos (%3P) y porcentaje de tiros de dos puntos (%2P) partidos ganados y partidos perdidos.  

## Descripción de las salidas del avance del proyecto  
**Ejemplo:**  
1. Selecciona la opción 5 (Insertar nuevo equipo) en el menú.  
2. Ingresa el nombre del equipo, por ejemplo, "Borregos QRO".  
3. Ingresa el porcentaje de triples, por ejemplo, "0.34".  
4. Ingresa el porcentaje de tiros de dos puntos, por ejemplo, "0.46".
5. Ingresa la cantidad de Victorias, por ejemplo, "12".
6. Ingresa la cantidad de Derrotas, por ejemplo, "70". 
7. Recibirás un mensaje confirmando que el equipo fue agregado.  
8. Regresa al menú principal y selecciona la opción 1 (Mostrar tabla de posiciones).  
9. Verifica que el equipo se agregó correctamente.  
10. Regresa al menú y selecciona la opción 4 (Acceder por número de ranking).  
11. Ingresa el ranking del equipo agregado, por ejemplo, "31".  
12. Verifica que los datos del equipo sean correctos.  
13. Sal del programa seleccionando la opción 0.  
14. Al finalizar, se genera el archivo `reporteNBA.txt` con la tabla de posiciones actualizada, incluyendo el equipo "Borregos QRO con sus respectivos datos".  

---

### Desarrollo de competencias 

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
> El algoritmo merge sort tiene una complejidad de O(n log n): el bucle externo en merge sort se ejecuta O(log n) veces, esto se debe a que en cada iteración, el tamaño del vector se divide aproximadamente a la mitad. También se realizan divisiones y fusiones repetidas, estas se ejecutan en O(n) debido a que dentro de la función auxiliar se copian elementos en vectores temporales y luego se combinan en un solo vector ordenado, Por lo que la combinación de O(log n) y O(n) = O(n log n)

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
**Análisis de estructuras de datos (BST):** 
>   Al buscar por ranking:  se basa en la busqueda binaria por lo que esto implica dividir el árbol en aproximadamente la mitad en cada paso lo que en promedio encuentra los elementos con una complejidad de O(log n) que es la complejidad promedio de un BST.Pero en el peor de los casos, si un arbol esta desequilibrado se convierte en una lista ligada por lo tanto la complejidad es de O(n).
>   Al agregar un equipo: si el árbol esta equilibrado tiene complejidad de O(log n) debido a que cada inserción se realiza dividiendo el árbol en aproximadamente la mitad, ya que se compara el valor a insertar con los valores en los nodos para decidir si irá a la izquierda o derecha. si el árbol esta desequilibrado de igual manera se convierte en una lista ligada por lo tanto la complejidad es de O(n).
> Por lo tanto:
- **Búsqueda:** Al ser un BST su complegidad es de \(O(\log n)\) en promedio, ya que divide el árbol en mitades. En el peor de los casos, un árbol desbalanceado tiene complejidad \(O(n)\).  
- **Inserción:** También \(O(\log n)\) promedio y \(O(n)\) en el peor caso si el árbol está desbalanceado.
  **Nota: se podria implementar un AVL para evitar los casos donde el rbol este desequilibrado** 

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
**Ordenamiento:**
>   Merge sort O(n log n): el bucle externo en merge sort se ejecuta O(log n) veces, esto se debe a que en cada iteración, el tamaño del vector se divide aproximadamente a la mitad. También se realizan divisiones y fusiones repetidas, estas se ejecutan en O(n) debido a que dentro de la función auxiliar se copian elementos en vectores temporales y luego se combinan en un solo vector ordenado, Por lo que la combinación de O(log n) y O(n) = O(n log n)


### **Main**
- **Lectura de datos – `O(n · L)`**  
  Donde `n` es el número de líneas en el archivo `nba_data.csv` y `L` la longitud promedio de cada línea.  
  Dentro del bucle principal, cada llamada a `getline()` tiene un costo `O(L)` y se repite `n` veces, por lo tanto la complejidad total de lectura es `O(n · L)`.

- **Escritura de datos – `O(n)`**  
  El archivo `reporteNBA.txt` se genera recorriendo todos los elementos almacenados en el vector `data`.  
  Como el ciclo `for` recorre una vez cada elemento, la complejidad es lineal `O(n)`.


### **Menú**
- **Mostrar menú – `O(1)`**  
  La función `showMenu()` imprime opciones fijas en pantalla, sin bucles ni operaciones dependientes del tamaño de los datos, por lo tanto su complejidad es constante.  

- **Gestionar menú (`manageMenu`) – depende de la opción seleccionada:**  

  | Caso |             Descripción            |                      Complejidad                          |
  |  0   |           Salir del menú           |                         `O(1)`                            |
  |  1   |       Mostrar tabla de datos       |                         `O(n)`                            |
  |  2   |     Ordenar datos (Merge Sort)     |                      `O(n log n)`                         |
  |  3   |     Buscar por nombre de equipo    |                       `O(n · L)`                          |
  |  4   | Acceso por número de ranking (BST) |            `O(log n)` promedio, `O(n)` peor caso          |
  |  5   |        Insertar nuevo equipo       | `O(log n)` promedio, `O(n)` peor caso, + `O(1)` al vector |

  El ciclo `while` que controla el menú depende del número de acciones del usuario, por lo que su duración total varía según la interacción.

### **Otros métodos**
- **Buscar por nombre – `O(n · L)`**  
  Donde `n` es el número de equipos en el vector y `L` la longitud promedio de los nombres.  
  En el mejor caso, si el equipo buscado se encuentra al inicio, la complejidad se reduce a `O(L)`.  


- **Convertir a minúsculas – `O(m)`**  
  Donde `m` es el número de caracteres en la cadena de entrada.  
  Se recorre una sola vez el string, por lo que el costo es lineal.  

### **Complejidad total del programa**
La complejidad total del programa está dominada por las operaciones de ordenamiento (`mergeSort`), cuya complejidad es **`O(n log n)`**.  
Por lo tanto, el **peor caso teórico de ejecución completa** (considerando lectura, operaciones del menú y ordenamientos) es **`O(n log n)`**, aunque el tiempo total depende directamente de las acciones del usuario durante la simulación.

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
> Para este programa utilicé un algoritmo de tipo **Merge Sort** para organizar los datos de los equipos de la NBA de mayor a menor según el criterio seleccionado (porcentaje de 2P o porcentaje de 3P). Elegí Merge Sort porque tiene una complejidad eficiente y constante en todos los casos, lo cual lo hace adecuado para conjuntos de datos grandes, garantizando un ordenamiento estable y rápido. Las funciones donde se puede observar esta implementación son `mergeSort()`, `mergeSortBy2Ppercent()` y `mergeSortBy3Ppercent()`, ubicadas entre las líneas **221–317** del archivo **NBAdata.cpp**.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
> Para este programa utilicé una estructura de datos tipo **árbol binario de búsqueda (BST)** con el propósito de buscar rápidamente un equipo por su ranking y permitir la inserción de nuevos equipos al árbol. Elegí el BST debido a su eficiencia en las operaciones de búsqueda, inserción y ordenamiento de datos. Esta estructura resulta especialmente útil para búsquedas basadas en un criterio específico, como el ranking de los equipos en este proyecto. Las funciones donde se puede observar su implementación son `insert()` y `searchByRanking()`, ubicadas entre las líneas **9–49** del archivo **bst.cpp**.


### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructuras correctos.
> La implementación del **árbol binario de búsqueda (BST)** permite consultar de manera eficiente la información de los equipos registrados. El método de búsqueda por ranking está diseñado para acceder e imprimir los datos del equipo correspondiente a un número de ranking específico, manteniendo los elementos organizados de acuerdo con dicho criterio. Esto facilita la consulta y la presentación de información relacionada con la clasificación general de los equipos de la NBA, aunque también se cuenta con la opción de ordenarlos según otros factores. La consulta e impresión de estos datos se puede observar entre las líneas **174–186** del archivo **NBAdata.cpp**.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
> La lectura de datos desde un archivo CSV se implementó entre las líneas **16–38** del archivo **main.cpp**, donde se extraen únicamente los campos necesarios para el funcionamiento del programa. Se utiliza la función `getline()` para recorrer cada línea del archivo y obtener los datos, que posteriormente se almacenan en un vector mediante el método `push_back()`. Además, para insertar los datos en el árbol BST, se utiliza la referencia `this->` dentro del constructor de la clase `NBAdata`, lo que permite crear un objeto de tipo `NBAdata` y asignarlo al nodo correspondiente antes de insertarlo en el árbol.

#### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta.
> La escritura de datos en un archivo de texto se implementó entre las líneas **43–52** del archivo **main.cpp**, donde se recorre el vector `NBAData` e imprime la información de cada equipo en un archivo `.txt`. Este proceso permite almacenar los resultados obtenidos y mantener un registro actualizado con los datos procesados desde las estructuras utilizadas en el programa.


