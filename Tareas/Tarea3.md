Resolver sin enviar este problema. https://vjudge.net/problem/CodeForces-1800A, es decir leer el enunciado, proponer una solución, hacer su código propio y probarlo con los casos que usted considere necesarios. Se espera que la solución de su tarea contenga las siguientes 3 partes.

	Solución (en palabras)

	Código:

	Casos de prueba (propios): 

Solución: is_it_a_cat.c

Paso 1 (Entender el problema).

¿Qué es lo que dice el problema is it a cat?


El problema nos plantea lo siguiente: vamos caminando por la calle y escuchamos algunos sonidos, cada uno de los cuales tiene su representación usando los símbolos del alfabeto latino, por ejemplo, la representación del sonido del ladrido de un perro sería algo como ¡guau! La idea detrás del problema consiste en que, de todas esas cadenas que representan sonidos distintos, tomar solo aquellas que representen el maullido de un gato, con la salvedad de que representaremos el sonido del gato como se escribiría en inglés meow y no nos limitaremos al caso básico, sino que consideraremos que sonidos como meeeeoooooww también representan el sonido de un gato totalmente válido. Intuitivamente, uno podría pensar que son válidos en el sentido de que sería un maullido alargado.

Un primer acercamiento a la comprensión del problema sería algo como: 
tenemos una lista de palabras que representan los distintos sonidos que escuchamos: 
["guau", "pum", "mew", "meow"] → Aplicamos nuestro algoritmo y decidimos si sí "YES" o "NO" cumple con la estructura para ser un maullido.

Ahora bien, el problema en lo anterior, si se piensa bien, está en la parte de decidir si determinada cadena cumple con la estructura para ser un maullido. Nuestra pregunta aquí es: ¿qué definimos como un maullido válido?

Para definir un maullido válido, partimos de la representación más sencilla en inglés para el maullido de un gato: meow. Podemos decir con base en esto que, para que un maullido sea válido, deben aparecer las cuatro letras anteriores exactamente en ese orden, y de haber más m, estas deben estar antes de la primera e que aparezca; si hay más e, estas deben estar antes de la primera o que aparezca pero después de la última m, etc...


Paso 2 (Posible solución)

La parte donde se nos especifica la manera en la que se nos pasarán las palabras, el número de casos, la longitud de la palabra, etc., podría omitirse de la solución hasta cierto punto, porque realmente no se requiere para lograr la tarea principal y esencial del problema, la cual es decir si una palabra es un maullido o no.

Existe una manera mucho más sencilla para representar al conjunto de palabras que representan un maullido válido mediante el uso de expresiones regulares de la siguiente manera:
m⁺e⁺o⁺w⁺ representa el conjunto de palabras (lenguaje) de todos los posibles maullidos válidos, al que denotaremos con L.

Como L es un lenguaje regular, podemos construir un autómata (máquina) que acepte L y, por lo tanto, nos diga si determinada palabra pertenece a L o no.

Nuestra tarea ahora es simplemente construir el autómata para L e implementarlo.





