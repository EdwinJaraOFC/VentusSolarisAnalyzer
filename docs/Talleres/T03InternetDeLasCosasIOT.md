<p align="center" style="margin-top: 50px; margin-bottom: 50px; font-family: Arial, sans-serif;">
  <p align="center">
    <img src="https://github.com/user-attachments/assets/2cae9b13-d1de-4a5a-a827-643818c98091" width="300" alt="Facultad de Ciencias e ingeniería logo">
  </p>  
  <h1 align="center" style="margin-top: 30px; margin-bottom: 0px;">Facultad de Ciencias e ingeniería “Alberto Cazorla Talleri”</h1>
</p>

<h2 align="center" style="font-family: Arial, sans-serif;">Taller 03: Internet de las Cosas (IoT)</h2>

<strong> Docentes:</strong>
- Mg Umbert Lewis De La Cruz
- Mg. Paulo Camilo Vela Antón 
- Mg. Moises Stevend Meza Rodriguez 
- Dr. Harry Anderson Rivera Tito 
- Ing. Juan Manuel Zuñiga Mamani  
- Ing. Renzo José Chan Ríos

<strong>Elaborado por:</strong>
- Amparo Marleny Vidaurre Juárez
- Edwin Junior Jara Bocanegra
- Antony Iván Mendoza Villar
- Josue Jhordan Poma Arrieta
- Aracely Nicoll Dueñas Condori
</p>

<hr style="border: 1px solid #ccc; margin-top: 50px; margin-bottom: 50px;">

## 1. Introducción
<p align="justify">
El IoT se refiere  a la interconexión de dispositivos físicos a través de internet, permitiéndoles recopilar y compartir datos. Esta red de dispositivos abarca desde electrodomésticos y vehículos hasta dispositivos médicos y equipos industriales. La IoT tiene el potencial de revolucionar la forma en que interactuamos con el mundo que nos rodea, al proporcionar una mayor eficiencia, comodidad y control. Estos datos pueden ser utilizados para automatizar procesos, tomar decisiones informadas, monitorear el rendimiento de los dispositivos y mejorar la eficiencia operativa en una amplia gama de aplicaciones.
</p>

## 2. Descripción de Internet de las cosas (IoT)

### Características y componentes del  Internet de las cosas  (IoT)
- **Dispositivos Conectados:** Estos son los componentes físicos que forman parte del IoT, como sensores, actuadores, cámaras, medidores, etc.
- **Conectividad:** Los dispositivos IoT se conectan a través de redes inalámbricas, como Wi-Fi, Bluetooth, etc.
- **Plataformas de Gestión de Datos:** Estas plataformas permiten la recopilación, almacenamiento y análisis de grandes volúmenes.
- **Seguridad:** Dado que los dispositivos IoT recopilan y transmiten datos sensibles, la seguridad es fundamental para proteger la integridad y la privacidad de la información.
- **Protocolos de Comunicación:** Estos son los estándares que permiten la comunicación entre los dispositivos IoT y los sistemas de gestión.

### Importancia del  IoT  como herramienta para recopilar y transmitir información.
<p align="justify">
El Internet de las Cosas (IoT) es crucial para recopilar y transmitir información de manera automatizada, permitiendo la toma de decisiones informadas, el monitoreo remoto, la optimización de procesos y la innovación de productos y servicios.
</p>

## 3. Materiales
- Arduino MKR WiFi 1010
- MKR ioT Carrier
- Cable Micro USB
- Pug-and-play cables 
- Batería

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen01.jpg" width="400px">
</p>

## 4. Ensamblado de componentes
<p align="justify">
Este proyecto prescinde de sensores externos. La operación se logra al montar la placa Arduino MKR WIFI 1010 sobre la MKR IoT Carrier y conectarla a la computadora.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen02.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen03.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen04.jpg" width="300px"/>
</div>

## 5. Ejercicios
### Ejercicio 1: Ejecutar el código de la sección "CONOCE EL KIT"
<p align="justify">
Luego de copiar el código al editor online nos encontramos con el error técnico de conectarlo con nuestra placa. Para lo cual, se decidió usar la app arduino IDE para ejecutar el siguiente código:
</p>

```cpp
#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
 
float temperature = 0;
float humidity = 0;
 
void setup() {
  Serial.begin(9600);
  //Wait to open the Serial monitor to start the program and see details on errors
  
 
  //Set if it has the Enclosure mounted
  CARRIER_CASE = false;
  //Initialize the IoTSK carrier and output any errors in the serial monitor
  carrier.begin();
}
 
void loop() {
  // read the sensor values
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
 
  //Update touch buttons
  carrier.Buttons.update();
 
  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" Â°C");
 
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
 
  //function to print out values
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printTemperature();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printHumidity();
  }
}
 
 
void printTemperature() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}
 
void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(2); //medium sized text
 
  carrier.display.setCursor(20, 110); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.print(humidity);
  carrier.display.println(" %");
}
```

**Explicación de código**
<p align="justify">
- Se ha hecho uso de la librería Arduino MADRId Carrier:
<code> #incluir <Arduino_MKRIoTCarrier.h> </code><br>
- La variable <code>CARRIER_CASE</code> debe estar como <code> TRUE</code>, porque estamos usando la caja de plástico.
<code> CARRIER_CASE = true; </code><br>
- Los botones táctiles <code>printTemperature(); y printHumidity(); </code> nos permite hacer el cambio de pantalla para mostrar los valores de la temperatura y humedad respectivamente.
</p>

```cpp
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printTemperature();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printHumidity();
  }
```

<p align="justify">
- Para el funcionamiento correcto del anterior segmento de código se hizo lo siguiente dentro de cada función, donde podemos cambiar el color de la pantalla, el tamaño de letra, la ubicación del cursor para el texto y el color de letra:
</p>

```cpp
void printTemperature() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}
 
void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(2); //medium sized text
 
  carrier.display.setCursor(20, 110); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.print(humidity);
  carrier.display.println(" %");
}
```

<p align="justify">
El código fue ejecutado con éxito y a continuación se evidencia el correcto funcionamiento de está actividad, donde muestra valores reales de la temperatura y la humedad del laboratorio de prototipado.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen05.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen06.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen07.jpg" width="300px"/>
</div>

### Ejercicio 2: Implementar código para cambiar datos de la temperatura en las escalas convencionales
<p align="justify">
Para lograr este desafío nos ayudamos de las fórmulas físicas revisadas en google, obteniendo lo siguiente:
</p>

```cpp
#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
 
float temperature = 0;
float humidity = 0;
 
void setup() {
  Serial.begin(9600);
  //Wait to open the Serial monitor to start the program and see details on errors
  
 
  //Set if it has the Enclosure mounted
  CARRIER_CASE = true;
  //Initialize the IoTSK carrier and output any errors in the serial monitor
  carrier.begin();
}
 
void loop() {
  // read the sensor values
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
 
  //Update touch buttons
  carrier.Buttons.update();
 
  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" Â°C");
 
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
 
  //function to print out values
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printHumidity();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printTemperature();
  }

  if (carrier.Buttons.onTouchDown(TOUCH2)) {
    printTemperatureF();
  }

  if (carrier.Buttons.onTouchDown(TOUCH3)) {
    printTemperatureK();
  }
}

void printTemperature() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}

void printTemperatureF() {
  //configuring display, setting background color, text size and text color
  float temperatureF = (temperature * 9/5) + 32; // Convertir a Fahrenheit
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureF);
  carrier.display.print(" F");
}

void printTemperatureK() {
  //configuring display, setting background color, text size and text color
  float temperatureK = temperature + 273.15; // Convertir a Kelvin
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureK);
  carrier.display.print(" K");
}

void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //medium sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.setTextSize(4);
  carrier.display.setCursor(40, 120);
  carrier.display.print(humidity);
  carrier.display.println(" %");
}
```

**Explicación de las partes añadidas en el código:**
<p align="justify">
Dentro del <code> void loop() </code>  se llamaron a las funciones creadas para mostrar las diferentes escalas de temperatura. Esto con el fin de realizar la misma secuencia usada anteriormente para actualizar la lectura y ver los diferentes tipos de datos con los botones táctiles del MKR IoT carrier, es decir, se hizo uso de los <code> TOUCH1 TOUCH2  TOUCH3 </code>.
</p>

```cpp
void loop() {
  // read the sensor values
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
 
  //Update touch buttons
  carrier.Buttons.update();
 
  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" Â°C");
 
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
 
  //function to print out values
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printHumidity();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printTemperature();
  }

  if (carrier.Buttons.onTouchDown(TOUCH2)) {
    printTemperatureF();
  }

  if (carrier.Buttons.onTouchDown(TOUCH3)) {
    printTemperatureK();
  }
}
```

<p align="justify">
Los códigos usados en las funciones <code> printTemperatureF() y printTemperatureK() </code> se ha reutilizado de la función <code> printTemperature() </code> . Pero con el único cambio en que se imprime la nueva variable asignada a su respectiva conversión de escala.
</p>

```cpp
void printTemperature() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}

void printTemperatureF() {
  //configuring display, setting background color, text size and text color
  float temperatureF = (temperature * 9/5) + 32; // Convertir a Fahrenheit
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureF);
  carrier.display.print(" F");
}

void printTemperatureK() {
  //configuring display, setting background color, text size and text color
  float temperatureK = temperature + 273.15; // Convertir a Kelvin
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureK);
  carrier.display.print(" K");
}
```

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen08.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen09.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen10.jpg" width="300px"/>
</div>

**Ejercicio 3: Implementar código para centrar y aumentar el tamaño de las letras de la Humedad**
<p align="justify">
Para esta parte tan solo modificamos los valores del tamaño del texto en la pantalla y donde debería de estar el curso al mostrar cada texto en su respectiva lectura.
</p>

```cpp
void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //medium sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.setTextSize(4);
  carrier.display.setCursor(40, 120);
  carrier.display.print(humidity);
  carrier.display.println(" %");
}
```

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen11.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen12.jpg" width="300px"/>
</div>

### Ejercicio 4: Cambio en el nivel de temperatura (Temperatura del laboratorio = Rojo, Temperatura del aire acondicionado = Azul)
Para lograr este ejercicio implementamos el siguiente código:

```cpp
#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
 
float temperature = 0;
float humidity = 0;
 
void setup() {
  Serial.begin(9600);
  //Wait to open the Serial monitor to start the program and see details on errors
  
 
  //Set if it has the Enclosure mounted
  CARRIER_CASE = true;
  //Initialize the IoTSK carrier and output any errors in the serial monitor
  carrier.begin();
}
 
void loop() {
  // read the sensor values
  temperature = carrier.Env.readTemperature();
  humidity = carrier.Env.readHumidity();
 
  //Update touch buttons
  carrier.Buttons.update();
 
  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" Â°C");
 
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");
 
  //function to print out values
  if (carrier.Buttons.onTouchDown(TOUCH0)) {
    printHumidity();
  }
 
  if (carrier.Buttons.onTouchDown(TOUCH1)) {
    printTemperature();
  }

  if (carrier.Buttons.onTouchDown(TOUCH2)) {
    printTemperatureF();
  }

  if (carrier.Buttons.onTouchDown(TOUCH3)) {
    printTemperatureK();
  }
}

void printTemperature() {
  // Configurar la pantalla, establecer el color de fondo, el tamaño del texto y el color del texto
  if (temperature < 29.45) {
    carrier.display.fillScreen(ST77XX_BLUE); // Fondo azul si la temperatura es menor a 30°C
  } else {
    carrier.display.fillScreen(ST77XX_RED); // Fondo rojo si la temperatura es mayor o igual a 30°C
  }

  carrier.display.setTextColor(ST77XX_WHITE); // Texto blanco
  carrier.display.setTextSize(6); // Texto de tamaño grande

  carrier.display.setCursor(30, 50); // Establecer la posición para imprimir (x y y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); // Disminuir el tamaño del texto
  carrier.display.setCursor(40, 120); // Establecer nueva posición para imprimir (x y y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}

void printTemperatureF() {
  //configuring display, setting background color, text size and text color
  float temperatureF = (temperature * 9/5) + 32; // Convertir a Fahrenheit
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureF);
  carrier.display.print(" F");
}

void printTemperatureK() {
  //configuring display, setting background color, text size and text color
  float temperatureK = temperature + 273.15; // Convertir a Kelvin
  carrier.display.fillScreen(ST77XX_RED); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //large sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); //decreasing text size
  carrier.display.setCursor(40, 120); //sets new position for printing (x and y)
  carrier.display.print(temperatureK);
  carrier.display.print(" K");
}

void printHumidity() {
  //configuring display, setting background color, text size and text color
  carrier.display.fillScreen(ST77XX_BLUE); //red background
  carrier.display.setTextColor(ST77XX_WHITE); //white text
  carrier.display.setTextSize(6); //medium sized text
 
  carrier.display.setCursor(30, 50); //sets position for printing (x and y)
  carrier.display.print("Humi: ");
  carrier.display.setTextSize(4);
  carrier.display.setCursor(40, 120);
  carrier.display.print(humidity);
  carrier.display.println(" %");
}
```

Para hacer ese código lo primero que se nos ocurrió fue hacer 2 mediciones:<br>
- Medición de la temperatura del laboratorio (29.5 °C aprox.)<br>
- Medición de la temperatura del aire acondicionado (hasta 27.5 °C aprox)<br>

<p align="justify">
Luego hicimos algunas modificaciones en el código para que se ponga de color azul cuando estemos midiendo la temperatura del aire acondicionado y rojo cuando estemos midiendo la temperatura del laboratorio (específicamente en nuestra área de trabajo), tal como se muestra a continuación:

```cpp
  if (temperature < 29) {
    carrier.display.fillScreen(ST77XX_BLUE); // Fondo azul si la temperatura es menor a 29°C
  } else {
    carrier.display.fillScreen(ST77XX_RED); // Fondo rojo si la temperatura es mayor o igual a 29°C
  }
```

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen13.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen14.jpg" width="300px"/>
</div>

<p align="justify">
Luego, desde nuestras casas, quisimos implementar las luces led para que enciendan del mismo color de la pantalla y una alerta con el buzzer que tenía incorporado el dispositivo, por lo que decidimos añadir esa parte del código:
</p>

```cpp
void printTemperature() {
  // Configurar la pantalla, establecer el color de fondo, el tamaño del texto y el color del texto
  if (temperature < 29) {
    carrier.display.fillScreen(ST77XX_BLUE); // Fondo azul si la temperatura es menor a 29°C
  	// Iluminar los leds de color azul
  	carrier.leds.setPixelColor(0, 0, 0, 255); 
    carrier.leds.setPixelColor(1, 0, 0, 255);
    carrier.leds.setPixelColor(2, 0, 0, 255);
    carrier.leds.setPixelColor(3, 0, 0, 255);
    carrier.leds.setPixelColor(4, 0, 0, 255); 
	  carrier.leds.show();
  } else {
    carrier.display.fillScreen(ST77XX_RED); // Fondo rojo si la temperatura es mayor o igual a 29°C
	  // Iluminar los leds de color rojo
	  carrier.leds.setPixelColor(0, 255, 0, 0);
    carrier.leds.setPixelColor(1, 255, 0, 0);
    carrier.leds.setPixelColor(2, 255, 0, 0);
    carrier.leds.setPixelColor(3, 255, 0, 0);
    carrier.leds.setPixelColor(4, 255, 0, 0);
	  carrier.leds.show();
  }

  carrier.Buzzer.sound(500); // Se activa la alerta del buzzer
  delay(1000);
  carrier.Buzzer.noSound(); // Se desactiva la alerta del buzzer

  carrier.display.setTextColor(ST77XX_WHITE); // Texto blanco
  carrier.display.setTextSize(6); // Texto de tamaño grande

  carrier.display.setCursor(30, 50); // Establecer la posición para imprimir (x y y)
  carrier.display.print("Temp: ");
  carrier.display.setTextSize(4); // Disminuir el tamaño del texto
  carrier.display.setCursor(40, 120); // Establecer nueva posición para imprimir (x y y)
  carrier.display.print(temperature);
  carrier.display.print(" C");
}
```

Logrando así lo que necesitabamos en este ejercicio.

## 6. Observaciones
<p align="justify">
En cuanto al uso de pilas en los dispositivos IoT, es cierto que muchos de ellos utilizan pilas como fuente de energía. Esto se debe principalmente a que los dispositivos IoT suelen ser pequeños y diseñados para ser autónomos, lo que significa que no siempre tienen acceso a una fuente de alimentación externa, como una toma de corriente. Por lo tanto, las pilas son 
una opción conveniente y práctica para alimentar estos dispositivos. En todos los ejercicios realizados anteriormente se confirmó ello, ya que al colocar una pila al dispositivo ioT, lo hizo más práctico al momento de utilizarlo.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen15.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen16.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen17.jpg" width="300px"/>
</div>

## 7. Evidencias del desarrollo de ejercicios

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T03Imagen18.jpg" width="250px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/FotoGrupal06.jpg" width="400px"/>
</div>

## 8. Conclusión

<p align="justify">
El Internet de las Cosas (IoT) ofrece un potencial significativo para la interconexión y el control de dispositivos físicos a través de Internet. Además, la capacidad de convertir temperaturas entre diferentes escalas a medida que se adapta y ajustar el formato de la humedad. Asimismo, se vio la capacidad de reconocer la temperatura y cambiar el color de la pantalla, indicando la temperatura ambiente de color rojo y la temperatura en el aire acondicionado de color azul. Esta interconexión brinda la posibilidad de controlar y monitorear dispositivos de manera remota, lo que conduce a beneficios significativos en términos de automatización, eficiencia y comodidad.
</p>
