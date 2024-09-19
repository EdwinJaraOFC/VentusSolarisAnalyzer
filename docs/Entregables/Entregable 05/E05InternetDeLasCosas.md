<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 05: Internet de las Cosas (IoT)</h1>
</p>

## INTRODUCCIÓN:

¿Te imaginas que tu refrigerador te avise cuando te quedas sin tomates o te haga la lista de compras? Esto es posible gracias al Internet de las Cosas, una tecnología que conecta objetos cotidianos a la red para hacer nuestra vida más fácil[4].

El objetivo de esta sesión es convertir nuestro MKR IoT Carrier en un dispositivo agrícola urbano, para ello se van a utilizar los sensores del carrier y un sensor de humedad con la finalidad de analizar el ambiente para una planta, como las plantas requieren luz usaremos una luz artificial para luego introducir unos relés que sirven como componente electrónico usado para activar dispositivos de alta potencia. Pero no podremos leer los datos ni controlar los distintos componentes sino configuramos un panel de control en Arduino Cloud[1].

Utilizaremos “Agricultura 101” como introducción para la sesión[1], se sabe que la agricultura es el proceso de cultivar tierra, cultivar animales y plantas para producir alimento, fibras, etc. Tiene 3 diferentes tipos: la agricultura comercial, tradicional y orgánica. Además sigue un ciclo de cultivo que incluye etapas desde la preparación del suelo hasta la cosecha y post-cosecha y requiere una gestión sostenible de recursos como agua y suelo[3].

Los sensores IoT pueden monitorear condiciones del suelo, humedad y temperatura en tiempo real, permitiendo a los agricultores tomar decisiones informadas sobre el riego y la fertilización[1]. Esto optimiza el uso de recursos, reduce costos y mejora el rendimiento de los cultivos. Además, sistemas de riego automatizados pueden activarse según las condiciones climáticas, minimizando el desperdicio de agua.
El análisis de datos recopilados por dispositivos IoT también permite prever plagas y enfermedades, facilitando una gestión proactiva y reduciendo el uso de pesticidas. En conjunto, estas tecnologías no solo aumentan la productividad, sino que también promueven prácticas agrícolas más sostenibles, contribuyendo a la seguridad alimentaria y al bienestar ambiental[1].



## METODOLOGÍA:

El kit que se usó en esta actividad contiene los siguientes componentes:

-   Arduino MKR WiFi 1010

-  Operador IoT MKR

-  Sensor de humedad

-  Cable micro USB

<p align="center">
  <img src="https://github.com/user-attachments/assets/db437e9e-c997-495d-82d7-4df221393357" width="500" style="margin: auto;">
</p>

### El kit permite realizar diversas tareas:

+ Gestión de dispositivos conectados mediante Arduino Cloud.

+ Recopilación y análisis de datos desde los sensores integrados.

+ Visualización de la información para interpretar y tomar decisiones basadas en los datos recopilados.

+ Colaboración en el desarrollo de soluciones tecnológicas enfocadas en sostenibilidad mediante el uso de IoT.

+ Aplicación del pensamiento de diseño para crear soluciones efectivas e innovadoras.

El Internet de las Cosas (IoT) permite la comunicación, el control y la gestión de dispositivos desde cualquier lugar con acceso a internet. Todo esto es facilitado por Arduino Cloud, una plataforma que proporciona plantillas y bocetos preconfigurados que pueden ser adaptados y utilizados de manera rápida y sencilla.

### PLATAFORMA:
Arduino Cloud es una plataforma en línea que permite a los usuarios conectar, gestionar y controlar sus dispositivos Arduino de manera sencilla y efectiva, tambien, ofrece herramientas para la creación de proyectos IoT, facilitando la recopilación y visualización de datos en tiempo real.

<p align="center">
  <img src="https://github.com/user-attachments/assets/93b809f9-c254-4ddd-b5eb-d3a4047ac99f" width="500" style="margin: auto;">
</p>


### MONTAJE:
Primero, realizamos el  montaje del Arduino MKR WiFi 1010 encima del MKR IoT Carrier, luego se debe conectar el sensor de humedad en la ranura A5 del carrier y así poder conectar el cable micro USB al ordenador.
<p align="center">
  <img src="https://github.com/user-attachments/assets/ddc83188-4d3e-4a37-adf7-bfdc49042213" width="500" style="margin: auto;">
</p>

La MKR IoT Carrier tiene dos relés capaces de manejar hasta 24V de cada uno, todas las conexiones de este circuito y los relés se harán a través de estos conectores.

<p align="center">
  <img src="https://github.com/user-attachments/assets/88be0f7a-a42e-4c63-824f-e6e349ef1ad3" width="500" style="margin: auto;">
</p>


Una vez que introducimos los cables dentro de ellos, estos se bloquearán automáticamente estabilizando en el conector y las luces LED L1 y L2 de la carrier nos permiten conocer visualmente cuál es el estado de los relés. 





- NO - Significa normalmente abierto. Esto significa que cuando escribimos un estado HIGH en el relé, el pin NO se conecta con COM.


- COM - Significa común y se utiliza como interruptor en un relé. Cuando se escribe una señal de ALTO o BAJO en un relé, el pin común estará entre NO o NC dependiendo de la configuración que estemos usando. 
CONFIGURACIÓN DEL CIRCUITO:

Los relés qué utilizamos tienen una configuración NO, y esto significa qué los terminales NO y COM están conectados por defecto. 

### CONEXIÓN:
MKR WiFi 1010:
- El pin 5V del MKR WiFi 1010 se conectará al pin central del MKR IoT Carrier.
- El pin NC (normalmente abierto) pasa a través de un resistor que se conecta al ánodo del LED (parte positiva del LED).
- El cátodo del LED (parte negativa) se conectará al pin de tierra (GND) del MKR WiFi 1010.


<p align="center">
  <img src="https://github.com/user-attachments/assets/339ed69e-06bf-401a-b83a-5e58bc36215d" width="500" style="margin: auto;">
</p>

### SENSOR MOISTURE:

Este sensor es útil para proyectos de agricultura urbana, este es básico pero uno de los más potentes que existen. tiene dos conductores expuestos y es básicamente una resistencia disminuida  a medida qué se incrementa la conductividad. A  través de este sensor podemos determinar qué tan húmeda está la planta.

<p align="center">
  <img src="https://github.com/user-attachments/assets/f6ef4af3-3af9-435e-995d-9361ab3a8f15" width="500" style="margin: auto;">
</p>



## RESULTADOS:
#### Adjuntamos videos del funcionamiento:
- Actualizacion de pantalla
- Relé_1
- Relé_2
- rgb Color


Subir video 

#### Valores de humedad:

subir video


#### LED

SUBIR VIDEO


## REFERENCIAS BIBLIOGRAFICAS:
1. Arduino.cc. 2024
   https://edu-content-preview.arduino.cc/content-preview/high_school/lesson/CONTENTPREVIEW+IOTSK
   
3. Gokhale P, Bhat O, Bhat S. Introduction to IOT. International Advanced Research Journal in Science, Engineering and Technology ISO [Internet]. 2007;3297(1).
   https://iarjset.com/upload/2018/january-18/IARJSET%207.pdf

4. Rivera J, Ramiro B, Lopera Sánchez A. Internet de las Cosas Internet de las Cosas [Internet].
   https://proyectodescartes.org/iCartesiLibri/PDF/IoT.pdf


5. Schultz T. MODERNIZACIÓN DE LA AGRICULTURA*
   https://www.mapa.gob.es/ministerio/pags/Biblioteca/fondo/pdf/13382_3.pdf




