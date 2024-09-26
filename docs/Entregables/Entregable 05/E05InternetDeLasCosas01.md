<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 05: Internet de las Cosas (IoT) - Arduino MKR & Arduino Cloud</h1>
</p>

## Introducción

<p align="justify">¿Te imaginas que tu refrigerador te avise cuando te quedas sin tomates o te haga la lista de compras? Esto es posible gracias al Internet de las Cosas, una tecnología que conecta objetos cotidianos a la red para hacer nuestra vida más fácil [4].</p>

<p align="justify">El objetivo de esta sesión es convertir nuestro MKR IoT Carrier en un dispositivo agrícola urbano, para ello se van a utilizar los sensores del carrier y un sensor de humedad con la finalidad de analizar el ambiente para una planta, como las plantas requieren luz usaremos una luz artificial para luego introducir unos relés que sirven como componente electrónico usado para activar dispositivos de alta potencia. Pero no podremos leer los datos ni controlar los distintos componentes sino configuramos un panel de control en Arduino Cloud [1].</p>

<p align="justify">Utilizaremos “Agricultura 101” como introducción para la sesión [1], se sabe que la agricultura es el proceso de cultivar tierra, cultivar animales y plantas para producir alimento, fibras, etc. Tiene 3 diferentes tipos: la agricultura comercial, tradicional y orgánica. Además sigue un ciclo de cultivo que incluye etapas desde la preparación del suelo hasta la cosecha y post-cosecha y requiere una gestión sostenible de recursos como agua y suelo [3].</p>

<p align="justify">Los sensores IoT pueden monitorear condiciones del suelo, humedad y temperatura en tiempo real, permitiendo a los agricultores tomar decisiones informadas sobre el riego y la fertilización [1]. Esto optimiza el uso de recursos, reduce costos y mejora el rendimiento de los cultivos. Además, sistemas de riego automatizados pueden activarse según las condiciones climáticas, minimizando el desperdicio de agua.</p>

<p align="justify">El análisis de datos recopilados por dispositivos IoT también permite prever plagas y enfermedades, facilitando una gestión proactiva y reduciendo el uso de pesticidas. En conjunto, estas tecnologías no solo aumentan la productividad, sino que también promueven prácticas agrícolas más sostenibles, contribuyendo a la seguridad alimentaria y al bienestar ambiental [1].</p>

## Metodología

<p align="justify">Para esta actividad se utilizó el Arduino Explore IoT Kit que incluye componentes clave del ecosistema IoT de Arduino. Este kit permitió la integración y gestión de dispositivos conectados, facilitando la recopilación de datos en tiempo real para análisis y toma de decisiones. A continuación, se detallan los componentes utilizados y las actividades realizadas.</p>

### Componentes del Kit Utilizado:

- <strong>Placa Arduino MKR WiFi 1010:</strong> Controlador principal para la gestión de dispositivos IoT.
- <strong>MKR IoT Carrier:</strong> Un módulo diseñado para facilitar la integración de sensores y otros periféricos, que cuenta con:<br>- Dos relés de 24V para controlar dispositivos de alta potencia.<br>- Sensores de temperatura, humedad y luz.<br>- Sensor PIR (Infrarrojo Pasivo).
- <strong>Cable Micro USB:</strong> Para la alimentación del dispositivo.

<p align="center">
  <img src="https://github.com/user-attachments/assets/db437e9e-c997-495d-82d7-4df221393357" width="500" style="margin: auto;">
</p>

### Actividades Realizadas con el Kit:

- <strong>Gestión de Dispositivos IoT:</strong> Uso de Arduino Cloud para conectar y controlar dispositivos de forma remota.
- <strong>Recopilación y Análisis de Datos:</strong> Sensores integrados que permiten recolectar datos ambientales para su posterior procesamiento y análisis.
- <strong>Visualización de Información:</strong> Interpretación gráfica de los datos para tomar decisiones basadas en la información recopilada.
- <strong>Desarrollo de Soluciones Tecnológicas:</strong> Colaboración en el diseño de soluciones enfocadas en la sostenibilidad mediante IoT.
- <strong>Aplicación del Pensamiento de Diseño:</strong> Creación de soluciones innovadoras y efectivas que abordan problemas reales a través de técnicas de diseño centradas en el usuario.

<p align="justify">A continuación, describimos el proceso que seguimos, desde el montaje de los componentes hasta la configuración y pruebas del sistema, con el objetivo de desarrollar una solución IoT funcional.</p>

### Plataforma (Configuración en Arduino Cloud)

Arduino Cloud es la herramienta utilizada para gestionar y controlar los dispositivos en nuestro proyecto de IoT. Esta plataforma facilita la comunicación y control remoto de dispositivos conectados a internet, proporcionando herramientas sencillas para recolección, análisis y visualización de datos en tiempo real.

<p align="center">
  <img src="https://github.com/user-attachments/assets/86d8381e-220b-4519-a26b-3f65ffe22f5e" width="500">
</p>

Para llevar a cabo el trabajo, seguimos estos pasos:

1. <strong>Registro en Arduino Cloud:</strong> Primero creamos una cuenta en la plataforma.
2. <strong>Conexión del dispositivo:</strong> Se conectó el Arduino MKR WiFi 1010 mediante el Arduino Create Agent para su reconocimiento.
3. <strong>Configuración de Things:</strong> Se crearon objetos virtuales para controlar los dispositivos desde la nube.
4. <strong>Cargar bocetos (sketches):</strong> Se subieron los códigos necesarios para gestionar los sensores y relés.
5. <strong>Diseñar el Panel de Control:</strong> Se creó un dashboard con widgets para monitorear y controlar variables como temperatura, humedad y los relés en tiempo real.

El panel incluyó widgets para controlar y visualizar los datos de los sensores y dispositivos, lo que permitió un monitoreo eficiente y una interacción directa con el sistema.

#### Datos importantes
| Declaración de Variables en 'Things'  | Configuración de widgets en 'Dashboards'  |
| :------------: | :------------: |
| <p align="center"><img src="https://github.com/user-attachments/assets/a0705c75-0fcc-4bf9-a2a4-9e92e9682669" width="500" style="margin: auto;"></p>  | <p align="center"><img src="https://github.com/user-attachments/assets/e7921433-418f-4d1d-a387-7baa12cce9e0" width="500" style="margin: auto;"></p>  |

#### Sección 'Dashboards'
<p align="center">
  <img src="https://github.com/user-attachments/assets/f27da7f6-9441-4f10-a3a3-f170eef63af9" width="500">
</p>

### Montaje

<p align="justify">El montaje de los componentes comenzó con la colocación del Arduino MKR WiFi 1010 sobre el MKR IoT Carrier, asegurándonos de que ambos estuvieran correctamente conectados. Luego, se conectó el sensor de humedad en la ranura A5 del carrier, permitiendo medir la humedad del suelo. Finalmente, el cable micro USB se conectó al ordenador para proporcionar alimentación al sistema.</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/user-attachments/assets/ddc83188-4d3e-4a37-adf7-bfdc49042213" width="430" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/f6ef4af3-3af9-435e-995d-9361ab3a8f15" width="473" style="margin: auto;">
</div>

<p align="justify">El MKR IoT Carrier está equipado con dos relés, capaces de manejar hasta 24V, que permiten controlar dispositivos de alta potencia. Las conexiones de los relés se hicieron a través de los conectores dedicados, y las luces LED L1 y L2 indican visualmente el estado de activación de cada relé. Utilizamos la configuración NO (Normalmente Abierto), lo que significa que el circuito se cierra solo cuando se envía una señal de activación.</p>

<p align="justify">Además, se incluyó un LED, conectado a través de una resistencia al pin NC (Normalmente Cerrado), que proporciona una indicación visual adicional del estado del relé. Este montaje garantizó una disposición correcta de los componentes y un funcionamiento adecuado del sistema, asegurando que todas las conexiones estuvieran correctamente establecidas.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/88be0f7a-a42e-4c63-824f-e6e349ef1ad3" width="500" style="margin: auto;">
</p>

### Implementación del Código
<p align="justify">Para que todo el sistema funcione de manera adecuada, implementamos el siguiente código en el Arduino MKR WiFi 1010. Este código permite la conexión con Arduino Cloud, la gestión de los dispositivos, la recolección de datos de los sensores y el control de los relés, garantizando así la operatividad del sistema IoT.</p>

<strong>Carpeta del sketch:</strong> https://github.com/EdwinJaraOFC/VentusSolarisAnalyzer/tree/main/docs/Entregables/Entregable%2005/SketchWithArduinoMKR

<strong>Código principal del sketch:</strong> https://github.com/EdwinJaraOFC/VentusSolarisAnalyzer/blob/main/docs/Entregables/Entregable%2005/SketchWithArduinoMKR/Grupo06_IOT_PIG1_sep19a.ino

La metodología para implementar el sistema se basa en los siguientes pasos:

<strong>1. Integración del Código en la Plataforma Arduino Cloud</strong>
<p align="justify">El código se carga en el entorno de Arduino Cloud, donde se inicializan las propiedades definidas en el archivo thingProperties.h. Esto establece las variables necesarias para el funcionamiento del dispositivo y la conexión a la nube.</p>

<strong>2. Configuración del Dispositivo</strong>
<p align="justify">En el setup(), se inicia la comunicación serie y se establece una conexión con la nube, permitiendo que el dispositivo reciba y envíe datos. Se verifica la conexión con Arduino Cloud, mostrando un mensaje en la pantalla del carrier mientras se espera la conexión.</p>

<strong>3. Lectura de Sensores y Control de Dispositivos:</strong>
<p align="justify">En el loop(), se leen de forma continua los datos de los sensores. Las variables clave en este proceso son:</p>

- <strong>temperatura:</strong> Almacena el valor de temperatura leído desde el sensor ambiental.
- <strong>humedad:</strong> Almacena el valor de humedad ambiental.
- <strong>luz:</strong> Almacena el nivel de luz.
- <strong>humedadValor:</strong> Indica el nivel de humedad del suelo, calculado a partir del valor analógico del sensor de humedad.

<strong>4. Control de Relés:</strong>
<p align="justify">Se implementan condiciones para activar y desactivar relés, permitiendo controlar dispositivos externos. Las funciones relacionadas son:</p>

- <strong>onRele1Change():</strong> Maneja el cambio en el estado del relé 1, abriendo o cerrando el relé según la variable rele_1.
- <strong>onRele2Change():</strong> Similar a onRele1Change(), pero para el relé 2.

<strong>5. Actualización de la Pantalla y Visualización de Datos:</strong>
<p align="justify">Se crean funciones específicas para manejar cambios en las variables. Algunas de estas funciones son:</p>

- <strong>onHumedadChange():</strong> Se ejecuta cuando el valor de humedad cambia, imprimiendo el nuevo valor en el monitor serie.
- <strong>onTemperaturaChange():</strong> Similar a onHumedadChange(), pero para cambios en la temperatura.
- <strong>onLuzChange():</strong> Se ejecuta cuando el nivel de luz cambia, imprimiendo el nuevo valor.
- <strong>onHumedadValorChange():</strong> Se ejecuta cuando el valor de humedad del suelo cambia, imprimiendo el nuevo valor.
- <strong>onRgbColorChange():</strong> Maneja el cambio en el color RGB, activando los LED correspondientes en el carrier.
- <strong>onActualizacionPantallaChange():</strong> Actualiza la pantalla con los valores actuales de temperatura, humedad, luz y el estado de los relés.

<strong>6. Interacción con el Usuario:</strong>
<p align="justify">Las funciones de manejo de cambios permiten responder a interacciones del usuario, proporcionando un sistema dinámico que puede adaptarse a diferentes condiciones ambientales y requisitos de control.</p>

## Resultados
<p align="justify">Los resultados obtenidos a partir de la implementación del sistema IoT demuestran su eficacia en la recolección y visualización de datos en tiempo real. A través de los sensores conectados al Arduino MKR WiFi 1010, se monitorean variables como temperatura, humedad y luz, y estos datos son enviados a la nube mediante Arduino Cloud. La información se presenta de manera clara y accesible en los dashboards, permitiendo un control efectivo de los relés y facilitando la gestión de los dispositivos conectados. A continuación, se presentan videos que ilustran el funcionamiento del sistema en acción, donde se puede observar la interacción entre los sensores y la visualización de datos en tiempo real.</p>

https://github.com/user-attachments/assets/9baa4d3f-f7d3-4bd1-8a04-bd1c22dba5bc

https://github.com/user-attachments/assets/a2b717f2-c55b-48d0-b0de-c2fd4d8f3e2a

https://github.com/user-attachments/assets/47757af4-9374-4a96-92a0-e721cacacc80

## Referencias Bibliográficas

1. Arduino.cc. 2024
   https://edu-content-preview.arduino.cc/content-preview/high_school/lesson/CONTENTPREVIEW+IOTSK
   
3. Gokhale P, Bhat O, Bhat S. Introduction to IOT. International Advanced Research Journal in Science, Engineering and Technology ISO [Internet]. 2007;3297(1).
   https://iarjset.com/upload/2018/january-18/IARJSET%207.pdf

4. Rivera J, Ramiro B, Lopera Sánchez A. Internet de las Cosas Internet de las Cosas [Internet].
   https://proyectodescartes.org/iCartesiLibri/PDF/IoT.pdf

5. Schultz T. MODERNIZACIÓN DE LA AGRICULTURA*
   https://www.mapa.gob.es/ministerio/pags/Biblioteca/fondo/pdf/13382_3.pdf
