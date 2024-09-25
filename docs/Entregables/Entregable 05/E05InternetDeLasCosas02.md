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
![image4](https://github.com/user-attachments/assets/cb67d896-b57c-4fcf-b5a4-2df86913f969)

Adicionalmente, generamos otro código que nos permite conectarnos a la red generada por un teléfono “hotspot” para tener acceso al envío y recepción de información a través del internet

![image15](https://github.com/user-attachments/assets/636f6e4e-4690-4e24-b7b6-7c40c412b85e)


Logrando conectarnos a un hotspot personal y siendo asignados a una IP

![image17](https://github.com/user-attachments/assets/d98fc57c-1dff-4e45-84bc-172781926d10)

# 3.Enviando datos a la nube
Se desarrolló un código que permite monitorear en tiempo real la variación de un potenciómetro conectado al ESP32. Los datos se envían en tiempo real a la nube a través de la plataforma IoT que en este caso es ThingSpeak.
Para ello se siguieron los siguientes pasos:
- 1:Creación de la cuenta de ThingSpeak


![image10](https://github.com/user-attachments/assets/212e66be-fe95-4221-8d30-5ea5e5d28e24)

- 2:Una vez creada la cuenta, procedemos a crear un canal nuevo, como se muestra en la imagen:


![image21](https://github.com/user-attachments/assets/dbf1f9c1-1421-4f31-9ad4-20f188cbf1ea)


- 3:Ahora, procederemos a llenar solo los campos de Nombre del Canal, y los Field que serán las variables a enviar desde nuestro microcontrolador.
- 4:Una vez creado el canal, nos mostrará la interfaz a continuación. Ahora, nos movemos hacia el punto API Keys.
- 5:Una vez allí, copiamos el Channel ID y el Write API Key creada:

![image2](https://github.com/user-attachments/assets/264dad7d-438c-4990-bd0a-818bd177b0c5)

### Código:

![image20](https://github.com/user-attachments/assets/475578ed-57ba-44e1-b7cd-4eef6df72f01)

![image14](https://github.com/user-attachments/assets/bdebcd31-8b0c-48de-87aa-608110d50530)

- 5: Por último, se conectó un LED en uno de los pines digitales del ESP32 y se controló su encendido desde una de las plataforma web:

```

#include <WiFi.h>
#include "ThingSpeak.h"

// Configura tu red Wi-Fi
const char* ssid = "Redmi_9T";     
const char* password = "12345678";  

// Datos de ThingSpeak
unsigned long myChannelNumber = 2662834;  
const char* myWriteAPIKey = "66163MA96FU6L0SN";  

WiFiClient client;

const int potentiometerPin = 34;  // Pin donde está conectado el potenciómetro
const int ledPin = 22;  // Pin donde está conectado el LED

void setup() {
  Serial.begin(115200);
  
  // Configurar Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Conectando a WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Conectado!");

  // Iniciar conexión con ThingSpeak
  ThingSpeak.begin(client);

  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer el valor del potenciómetro (0 - 4095)
  int potentiometerValue = analogRead(potentiometerPin);
  
  // Mostrar el valor en el monitor serie
  Serial.print("Valor del potenciómetro: ");
  Serial.println(potentiometerValue);

  // Controlar el LED: si el valor del potenciómetro es mayor a 2000, encender el LED
  if (potentiometerValue > 2000) {
    digitalWrite(ledPin, HIGH);  // Encender el LED
  } else {
    digitalWrite(ledPin, LOW);  // Apagar el LED
  }

  // Escribir el valor en el canal de ThingSpeak
  ThingSpeak.setField(1, potentiometerValue);  // Enviar a Field 1 del canal

  // Enviar datos a ThingSpeak
  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  
  if (x == 200) {
    Serial.println("Datos enviados correctamente.");
  } else {
    Serial.println("Error al enviar los datos. Código de error: " + String(x));
  }

  // Esperar 15 segundos antes de enviar nuevamente (limite ThingSpeak)
  delay(15000);
}


```

![image7](https://github.com/user-attachments/assets/d3b06042-b6d4-49af-8ba4-300a21fd02c2)

## RESULTADOS:
Obtuvimos los resultados esperados en cada ejercicio, logrando capturar, procesar y enviar datos en tiempo real, además de controlar dispositivos remotamente a través de una plataforma IoT. Estos experimentos demuestran el uso eficiente de los microcontroladores y la infraestructura IoT para la automatización y monitoreo de dispositivos conectados con los códigos mejorados y personalizados a nuestras necesidades

### REFERENCIAS BIBLIOGRÁFICAS:

- 1 Gokhale P, Bhat O, Bhat S. Introduction to IOT. International Advanced Research Journal in Science, Engineering and Technology ISO [Internet]. 2007;3297(1). https://iarjset.com/upload/2018/january-18/IARJSET%207.pdf

- 2 Soumyalatha, S. G. H. (2016, May). Study of IoT: understanding IoT architecture, applications, issues and challenges. In 1st International Conference on Innovations in Computing & Net-working (ICICN16), CSE, RRCE. International Journal of Advanced Networking & Applications (Vol. 478).
