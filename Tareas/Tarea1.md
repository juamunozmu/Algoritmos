Haga un programa que calcule cuánto varía su PAPA si algoritmos es la única materia que ve este semestre. Debe imprimir una lista que corresponda a cuánto varía su PAPA si saca X como definitiva. Para X empezando en 0 hasta 5 con saltos de 0.5  
Salida ejemplo  
0.5 -> -0.02  
1.0 -> -0.15  
…  
4.5 -> 0.01  
5.0 -> 0.02  
Solución: [variacion_papa_algoritmos.c](/Tareas/variacion_papa_algoritmos.c) 

Calcule el número de estudiantes que deben ser seleccionados al azar por clase. Para que con un 85% de probabilidad todos los estudiantes hayan sido llamados al menos una vez. Para una clase con 32 sesiones y 50 estudiantes.

Solución: 

Usé ChatGPT para corregir la redacción, la ortografía y además para revisar el razonamiento.
La probabilidad de que un estudiante sea seleccionado entre los 50 estudiantes es de 1/50.

Por lo tanto, la probabilidad de no ser seleccionado es de 1 - 1/50. Si aumentamos el número de estudiantes seleccionados k veces, entonces la probabilidad de no ser seleccionado es de 1 - k/50.

Si esto lo realizamos para las 32 clases, tenemos que la probabilidad de no ser seleccionado en ninguna clase es de (1 - k/50)^32. Si tomamos la probabilidad complementaria de esta última, obtenemos la fórmula para saber el número de estudiantes que se deben seleccionar en cada clase:

1 - ((50 - k)/50)^32 ≥ 0.85
Despejando k tenemos que:

k ≥ -50e^(ln(0.15)/32) + 50.
Realizando los cálculos respectivos, obtenemos que k, el número de estudiantes, debe ser de 3.

Lo anterior es válido si en cada selección se escoge entre los 50 estudiantes, lo cual implica que un mismo estudiante puede ser seleccionado más de una vez en una misma clase.