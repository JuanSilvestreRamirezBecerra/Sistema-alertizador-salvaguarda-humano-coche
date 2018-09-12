# SistemasProgramables

# Tecnológico Nacional de México

Instituto Tecnológico de León

Carrera: Ingeniería en Sistemas computacionales

Alumno: Juan Silvestre Ramírez Becerra.

Materia: Sistemas Programables

Profesor: Carlos Rafael Levy Rojas

León, Guanajuato 8 de Septiembre de 2018

# Sistema Alertizador Salvaguarda Humano-coche

# Descripción de la práctica

Realizar un sistema que simule un Semáforo Interactivo usando Arduino. Este debe mostrar un conjunto de semáforos que cambiarán de verde a ámbar a rojo, y viceversa, luego de un período de tiempo establecido, utilizando el sistema de cuatro estados de los semáforos en México. Este se extiende para incluir un conjunto de luces y un botón peatonal para solicitar cruzar la calle. Cuando llega el peatón y se dispone a cruzar pulsa el botón que encuentra en la parte baja del semáforo, este reconoce la orden y cierra el paso de los vehículos para que el viandante pueda cruzar con seguridad hasta el otro lado de la calle. Una vez que se acaba el tiempo estipulado para que el peatón cruce, ese semáforo permanecerá abierto para mejorar la movilidad de los vehículos. El sistema deberá de contener una perilla para controlar el tiempo mínimo en que el semáforo vehicular va a durar en verde.

# Materiales usados

-Arduino UNO -Cable USB -Placa de prototipado o protoboard -11 cables o jumpers -5 Diodos Led (Rojo, Amarillo, Verde) -7 Resistencias de 220Ω -Potenciometro de 10kΩ -Pulsador

# Solucion de la practica

Se conectaron 3 leds para el vehículo los cuales llevan sus resistencias correspondientes de 220Ω y que a su vez cada uno pertenecia a un pin determinado en el arduino en este caso era el pin digital 2,3,4 respectivamente y de igual manera se colocaron los leds por parte del peaton, solo que se conectaron 2 leds el rojo y el verde, que en el arduino los pines utilizados son 5, 6;

Se utilizo un boton para indicar cuando el peaton pasaria ya que siempre se coloca en verde el semafaro de los vehiculos se implemento el circuito PULL DOWN para enviar por el pin 13 la entrada digital para hacer todo el cambio logico de colores en los semaforos; Se añadio un potenciometoro fungiendo como una perilla de tiempo que agregaba un menor o mayor duracion al led verde del peaton
