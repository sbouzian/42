# Libft

*Este proyecto ha sido creado como parte del currículo de 42 por <sbouzian>.*

---

## Descripción

Libft es una biblioteca personalizada en C desarrollada como parte del currículo de 42. El objetivo de este proyecto es reimplementar una selección de funciones estándar de la biblioteca C y crear funciones utilitarias adicionales que serán reutilizadas a lo largo del cursus.

Este proyecto se centra en construir una comprensión sólida de cómo funcionan internamente las funciones de bajo nivel en C, incluyendo la manipulación de memoria, el manejo de strings y la gestión de estructuras de datos dinámicas como las listas enlazadas.

El resultado de este proyecto es una biblioteca estática, libft.a, que puede enlazarse a futuros proyectos en C para proporcionar una base reutilizable y fiable.

---

## Instrucciones

Para compilar la biblioteca, se debe ejecutar el comando make. Esto generará el archivo libft.a en el directorio raíz del repositorio.

El Makefile incluye las siguientes reglas:

- make o make all: compila la biblioteca.  
- make clean: elimina los archivos objeto.  
- make fclean: elimina los archivos objeto y la biblioteca.  
- make re: recompila el proyecto desde cero.

Para utilizar la biblioteca en otro proyecto, se debe incluir el archivo de cabecera libft.h y enlazar la biblioteca durante la compilación.

---

## Contenido

El contenido de la biblioteca se divide en tres partes principales.

### Parte 1 - Funciones Libc

Incluye reimplementaciones de funciones estándar de la libc, como funciones de clasificación de caracteres, funciones de longitud y comparación de strings, funciones de manipulación de memoria, conversión de mayúsculas y minúsculas, búsqueda y análisis de strings, así como conversión numérica y asignación de memoria.

### Parte 2 - Funciones Adicionales

Incluye funciones adicionales que amplían la funcionalidad estándar de C. Entre ellas se encuentran la creación de substrings y concatenación de strings, recorte y división de strings, conversión de enteros a string, iteración y mapeo de strings, y funciones de salida utilizando descriptores de archivo.

### Parte 3 - Listas Enlazadas

Corresponde a las funciones obligatorias para el manejo de listas enlazadas. Incluye la creación y adición de nodos, el acceso y conteo de elementos, la iteración y el mapeo de listas, así como la liberación correcta de memoria y la limpieza de estructuras.

Estas funciones permiten utilizar estructuras de datos dinámicas de forma segura y eficiente en futuros proyectos.

---

## Recursos

Durante el desarrollo de este proyecto se utilizaron los siguientes recursos:

- Las páginas oficiales del manual de C.
- La documentación de la intra de 42.
- Referencias estándar de programación en C.

---

## AI Usage

Las herramientas de inteligencia artificial fueron utilizadas como recurso de apoyo y aprendizaje durante el proyecto.

Se utilizaron para:

- Ayudar a comprender el comportamiento esperado de las funciones estándar de la biblioteca C.  
- Asistir con la estructura y organización del proyecto.  
- Apoyar la comprensión de temas complejos como la gestión de memoria y las listas enlazadas.  
- Evitar bloqueos durante momentos de frustración o sobrecarga mental al enfrentarse a muchos conceptos nuevos al mismo tiempo.

El uso de la inteligencia artificial tuvo como objetivo permitir seguir avanzando en el proyecto manteniendo una mentalidad de aprendizaje, con la intención de revisar y comprender completamente el código después de la entrega principal.

---

## Notes

Esta biblioteca está pensada para ser reutilizada y ampliada a lo largo del cursus de 42.

Libft sirve como un proyecto fundamental que da soporte a muchos proyectos futuros en C y ayuda a reforzar los conceptos básicos de programación.