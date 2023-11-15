# Proyecto "Let's rate!"

- Nombre: Risako Baba
- Matrícula: A01757208
- Curso: Pensamiento computacional orientado a objetos (Gpo 302)

## Contexto
¿Qué película, serie o libro te gustó mucho o pensaste que no valía la pena verlo? Este proyecto genera clases que permiten
permite calificar y guardar tres tipos diferentes de entretenimiento: Película, Serie y Libro. En el caso de una Película, te pregunta sobre su título, duración y año de estreno. En el caso de una serie, también te pregunta cuántos episodios hay. Finalmente, para el Libro, el número de volúmenes.

Ten en cuenta que este proyecto no sirve para buscar nuevos entretenimientos porque solo gestiona los que ya has visto o leído.

## Funcionalidad
El código le pide al usuario que elija una de estas opciones:
1. Rate new article
2. End

Supongamos que selecciona "1. Rate new article". En ese caso, se mostrarán tres tipos de artículos, y dependiendo de lo que selecciones, te pedirá que completes diferente información (indicada dentro del paréntesis):
1. Movie (title, released year, rate, duration)
2. Series (title, released year, rate, episodes)
3. Book (title, released year, rate, volumes)
Luego imprima sus atributos utilizando métodos getters.

Supongamos que selecciona "2. End". En este caso, el código saldrá del ciclo while y finalizará el código.

## ¿Que es nuevo?
- Se agrega while loop para repetir el código hasta que el usuario quiera terminarlo.
- Se agregan if, switch y cin para poder elegir una opción y dar inputs.
- Agregué un nuevo método en cada clase que crea un nuevo objeto basado en las entradas del usuario.

