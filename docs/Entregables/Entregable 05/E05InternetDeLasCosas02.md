<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 05: Internet de las Cosas (IoT) - ESP32</h1>
</p>

## Introducción

¿Te imaginas que tus cosas hablen entre sí? ¡Eso es IoT!

El Internet de las Cosas (IoT) conecta cualquier objeto a la red, desde tu celular hasta un coche, permitiendo que compartan información entre ellos. Esto significa que todo puede funcionar de manera más eficiente y automática. IoT no solo mejora nuestro día a día, sino que está haciendo que industrias enteras se vuelvan más inteligentes, desde la agricultura hasta las ciudades. ¡Es como darle superpoderes a tus dispositivos! [1]

En este taller, nos enfocaremos en cómo programar dispositivos como el ESP32 y el Arduino MKR para recopilar información a través de sensores y enviarla a plataformas en la nube como ThingSpeak. Un aspecto fundamental de IoT es la capacidad de conectar sensores a plataformas en la nube utilizando protocolos de comunicación como Wi-Fi o MQTT. Esto permite que los dispositivos recopilen datos y los envíen de manera eficiente.

Estos datos, como la temperatura, humedad o movimiento, son analizados en tiempo real, permitiendo aplicaciones que van desde el monitoreo remoto hasta la automatización. IoT no solo hace que los objetos sean más "inteligentes", sino que también abre un mundo de posibilidades para mejorar procesos en la industria, el hogar y la vida diaria.

## Metodología

La adquisición de datos capta información del entorno a través de sensores, para convertirla en señales digitales y realizar un análisis en tiempo real. Tiene aplicación en la automatización y monitoreo remoto. Los sensores miden variables como temperatura, luz, humedad y gases, mientras que un microcontrolador procesa la señal y la convierte en señales analógicas a digitales y luego los datos se envían a la nube o plataformas IoT.

### Materiales a utilizar en este taller

- 01 ESP32 Dev Kit 1
- 01 Arduino EXPLORE IOT KIT
- 01 Kit de sensores Keystudio 48 en 1
- 01 Multímetro
- 01 Protoboard

<p align="center">
  <img src="https://github.com/user-attachments/assets/ae4eaa33-5e9b-44dc-8dba-3e82a66034dc" width="500"/>
</p>

Para la realización de los desafíos con el ESP32, tendremos un esquema de conexión entre la placa, un protoboard y un potenciómetro, conectados de la siguiente manera:

<p align="center">
  <img src="https://github.com/user-attachments/assets/a72a263c-fd0c-44d0-b4ad-554726e45e71" width="500"/>
</p>

Observamos el potenciómetro conectado al pin 34 del ESP32, así como a la toma a tierra y de corriente de 3.3 V, con lo que podrá recepcionar los datos y enviarlos a través de ese pin, como se verá más adelante en el código.

### 1.- Lectura de un Potenciómetro con ESP32

Se proporcionó un código el cual se copió, compiló y recolectó datos. A partir de ese código, debemos mejorarlo con la finalidad de realizar un promedio de los datos y convertir los valores de ADC a voltaje. Para ello, debemos conectar el potenciómetro al pin 34 del ESP32. Subimos el código al ESP32 y obtenemos como resultado la serie en el monitor.

<p align="center">
  <img src="https://github.com/user-attachments/assets/6a8d85e2-bbf9-419c-af11-28b0c68e322f" width="500"/>
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/d195adbf-44fe-40c6-8cad-97790f182530" width="500"/>
</p>

### 2.- Scanner WIFI con ESP32

Configurar el ESP32 para escanear redes Wi-Fi cercanas, mostrando el número de redes, el nombre (SSID), la intensidad de la señal (RSSI) y el tipo de cifrado. Los resultados se imprimirán en la serie del monitor, con una pausa de 5 segundos entre cada escaneo.

<p align="center">
  <img src="https://github.com/user-attachments/assets/cb67d896-b57c-4fcf-b5a4-2df86913f969" width="500"/>
</p>

Adicionalmente, generamos otro código que nos permite conectarnos a la red generada por un teléfono “hotspot” para tener acceso al envío y recepción de información a través del internet.

<p align="center">
  <img src="https://github.com/user-attachments/assets/636f6e4e-4690-4e24-b7b6-7c40c412b85e" width="500"/>
</p>

Logramos conectarnos a un hotspot personal y fuimos asignados a una IP.

<p align="center">
  <img src="https://github.com/user-attachments/assets/d98fc57c-1dff-4e45-84bc-172781926d10" width="500"/>
</p>

### 3.- Enviando datos a la nube

Se desarrolló un código que permite monitorear en tiempo real la variación de un potenciómetro conectado al ESP32. Los datos se envían en tiempo real a la nube a través de la plataforma IoT, en este caso ThingSpeak. Para ello, se siguieron los siguientes pasos:

1. Creación de la cuenta de ThingSpeak:

<p align="center">
  <img src="https://github.com/user-attachments/assets/212e66be-fe95-4221-8d30-5ea5e5d28e24" width="500"/>
</p>

2. Una vez creada la cuenta, procedemos a crear un canal nuevo:

<p align="center">
  <img src="https://github.com/user-attachments/assets/dbf1f9c1-1421-4f31-9ad4-20f188cbf1ea" width="500"/>
</p>

3. Llenamos solo los campos de Nombre del Canal y los Fields que serán las variables a enviar desde nuestro microcontrolador.
4. Copiamos el Channel ID y el Write API Key creada:

<p align="center">
  <img src="https://github.com/user-attachments/assets/264dad7d-438c-4990-bd0a-818bd177b0c5" width="500"/>
</p>

### Código:

<p align="center">
  <img src="https://github.com/user-attachments/assets/475578ed-57ba-44e1-b7cd-4eef6df72f01" width="500"/>
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/bdebcd31-8b0c-48de-87aa-608110d50530" width="500"/>
</p>

## Resultados

Obtuvimos los resultados esperados en cada ejercicio, logrando capturar, procesar y enviar datos en tiempo real, además de controlar dispositivos remotamente a través de una plataforma IoT. Estos experimentos demuestran el uso eficiente de los microcontroladores y la infraestructura IoT para la automatización y monitoreo de dispositivos conectados, con los códigos mejorados y personalizados a nuestras necesidades.

## Referencias Bibliográficas

1. Gokhale P, Bhat O, Bhat S. Introduction to IOT. International Advanced Research Journal in Science, Engineering and Technology ISO [Internet]. 2007;3297(1). https://iarjset.com/upload/2018/january-18/IARJSET%207.pdf
2. Soumyalatha, S. G. H. (2016, May). Study of IoT: understanding IoT architecture, applications, issues and challenges. In 1st International Conference on Innovations in Computing & Net-working (ICICN16), CSE, RRCE. International Journal of Advanced Networking & Applications (Vol. 478).
