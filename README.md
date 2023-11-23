# Proyecto "Let's rate!"

- Nombre: Risako Baba
- Matrícula: A01757208
- Curso: Pensamiento computacional orientado a objetos (Gpo 302)

## Contexto
¿Qué película, serie o libro te gustó mucho o pensaste que no valía la pena verlo? Este proyecto genera clases que permiten
permite calificar y guardar tres tipos diferentes de entretenimiento: Película, Serie y Libro. En el caso de una Película, te pregunta sobre su título, duración y año de estreno. En el caso de una serie, también te pregunta cuántos episodios hay. Finalmente, para el Libro, el número de volúmenes.

Ten en cuenta que este proyecto no sirve para buscar nuevos entretenimientos porque solo gestiona los que ya has visto o leído.

## Funcionalidad
Automáticamente quedarás registrado al código y se creará un objeto llamado "usuario" de la clase User.

Luego, el código le pide al usuario que elija una de estas opciones:
1. Rate new article
2. End

Supongamos que selecciona "1. Rate new article". Usando el método "new_article()" del objeto user, se mostrarán tres tipos de artículos, y dependiendo de lo que selecciones, generará un nuevo objeto de la clase de tipo seleccionado y te pedirá que completes diferente información (indicada dentro del paréntesis):
1. Movie (title, released year, rate, duration)
2. Series (title, released year, rate, episodes)
3. Book (title, released year, rate, volumes)

Luego guardará la información en la lista del objeto user e imprimirá sus atributos utilizando métodos getters de cada clase de article.

Supongamos que selecciona "2. End". En este caso, el código saldrá del ciclo while y finalizará el código.

## ¿Que es nuevo?
- Agregué un header file y contiene la clase user que crea una clase de Movie, Series o Book y la guarda en sus listas de atributos (Composición)

## UML
Consulte el diagrama UML:
https://lucid.app/lucidchart/991abffb-83be-456d-9e47-c0eae41f273b/edit?viewport_loc=-2028%2C-564%2C3856%2C2101%2C0_0&invitationId=inv_8c9e835c-e4ce-4b2e-a057-a1722a99e5a5


