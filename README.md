# Primera práctica - DAA
## Principios SOLID y patón Comportamiento
A Matrix Multiplication Calculator created using the Strategy Patron.

## **Autor**: _Aarón José Cabrera Martín_

**¿En qué consisten los principios SOLID?**

Son una serie de reglas o recomendaciones que facilitan la creación de clases bien construidas y estructuradas.

**¿En qué consiste el principio de responsabilidad única?**

El principio de responsabilidad única dicta que una clase debería ser encargada de realizar una única responsabilidad, una única tarea importante. Si utilizáramos bien este principio, nuestras clases cuando tuvieran que cambiar, lo harían sólo por un único motivo (y no por varios).  
Si observamos que una clase adquiere unas dimensiones muy grandes o que tiene una complejidad elevada, puede ser señal de que esa clase debería dividirse en 2 o más clases.


**Diseño de clases**

Para el diseño de clases he utilizado el siguiente diagrama UML:

![uml](/capturas/uml.PNG)


**Ejecución**

Primero ha de compilar el programa, para esto utilice:

- `make` o `make all` (son equivalentes)

- Ejecute con `./bin/matrixCalculator`

También pude compilar en modo _debug_ con `make debug`, una compilación algo más rápida para agilizar las pruebas pero una ejecución más lenta. Con el make "normal" optimiza el código, haciendo una compilación más lenta pero una ejecución sustancialmente más rápida. 