# INTERNET DE LAS COSAS (IoT):
## INTRODUCCIÓN: 
¿Te imaginas que tus cosas hablen entre sí? ¡Eso es IoT!
El Internet de las Cosas (IoT) conecta cualquier objeto a la red, desde tu celular hasta un coche, permitiendo que compartan información entre ellos. Esto significa que todo puede funcionar de manera más eficiente y automática. IoT no solo mejora nuestro día a día, sino que está haciendo que industrias enteras se vuelvan más inteligentes, desde la agricultura hasta las ciudades. ¡Es como darle superpoderes a tus dispositivos! [1]

En este taller, nos enfocaremos en cómo programar dispositivos como el ESP32 y el Arduino MKR para recopilar información a través de sensores y enviarla a plataformas en la nube como ThingSpeak un aspecto fundamental de IoT es la capacidad de conectar sensores a plataformas en la nube utilizando protocolos de comunicación como Wi-Fi o MQTT. Esto permite que los dispositivos recopilen datos y los envíen de manera eficiente.[1]. 

Estos datos, como la temperatura, humedad o movimiento, son analizados en tiempo real, permitiendo aplicaciones que van desde el monitoreo remoto hasta la automatización. IoT no solo hace que los objetos sean más "inteligentes", sino que también abre un mundo de posibilidades para mejorar procesos en la industria, el hogar y la vida diaria. 


## METODOLOGÍA:
La adquisición de datos capta información del entorno a través de sensores, para convertirla en señales digitales y realizar un análisis en tiempo real. Tiene una aplicación en la  automatización y monitoreo remoto. Los sensores miden variables como temperatura, luz, humedad y gases, mientras que un microcontrolador procesa la señal y la convierte en  señales analógicas a digitales y luego los datos se envían a la nube o plataformas IoT.

### Materiales a utilizar en este taller:
- 01 ESP32 Dev Kit 1
- 01 Arduino EXPLORE IOT KIT 
- 01 Kit de sensores Keystudio 48 en 1
- 01 Multímetro 
- 01 Protoboard
![image](https://github.com/user-attachments/assets/ae4eaa33-5e9b-44dc-8dba-3e82a66034dc)


Para la realización de los desafíos con el ESP32, tendremos un esquema de conexión entre la placa, un protoboard y un potenciómetro, conectados de la siguiente manera: 

![image](https://github.com/user-attachments/assets/a72a263c-fd0c-44d0-b4ad-554726e45e71)

											Observamos el potenciómetro conectado al pin 34 del ESP 32, así como a la toma a tierra y de corriente de 3.3 V, con lo que podrá recepcionar los datos y enviarlos a través de ese pin, como se verá más adelante en el código


### 1.-   Lectura de un Potenciómetro con ESP32:

Se proporcionó un código el cual se copió, compiló y recolectó datos y a partir de ese código  debemos mejorarlo con la finalidad de realizar un promedio de los datos los valores de ADC a voltaje, para ello debemos conectar el potenciómetro a uno de los pines del ESP32 en este caso el pin 34. Debemos subir el código al SP32 y obtener como resultado la serie en el monitor.  

![image](https://github.com/user-attachments/assets/6a8d85e2-bbf9-419c-af11-28b0c68e322f)

![image](https://github.com/user-attachments/assets/d195adbf-44fe-40c6-8cad-97790f182530)

### 2.- Scanner WIFI con ESP32:

Configurar el ESP32 para escanear redes Wi-Fi cercanas, mostrando el número de redes, el nombre (SSID), la intensidad de la señal (RSSI) y el tipo de cifrado. Los resultados se imprimirán en la serie del monitor, con una pausa de 5 segundos entre cada escaneo.

