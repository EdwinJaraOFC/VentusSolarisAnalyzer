<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 07: Modelo PCB</h1>
</p>

## Introducción

<p align="justify">Este informe presenta el diseño y los componentes clave de un sistema portátil diseñado para medir la velocidad del viento y la radiación solar. El objetivo de este proyecto es evaluar la viabilidad de instalar aerogeneradores y paneles solares en áreas específicas, proporcionando datos precisos y en tiempo real. El sistema está basado en un microcontrolador Arduino Nano, que se conecta a un sensor SUF268J001 para medir la radiación solar y a un anemómetro casero, construido a partir de un motor RF-500TB-14415, para medir la velocidad del viento. Los datos se visualizan en una pantalla I2C, y todo el sistema es alimentado por una batería portátil, lo que lo hace ideal para ser utilizado en campo. Además, el uso de conectores Molex facilita la conexión modular de los componentes, permitiendo un mantenimiento y ajustes sencillos.</p>

## Esquemático Electrónico

<p align="center">
  <img src="https://github.com/user-attachments/assets/30182c21-5197-4e82-b07f-862d4ccb4049" width="700" style="margin: auto;">
</p>
<p align="center">
  <img src="https://github.com/user-attachments/assets/26c5bb51-4184-41ec-8af5-9c248778529e" width="700" style="margin: auto;">
</p>

## Modelo PCB

<p align="center">
  <img src="https://github.com/user-attachments/assets/9bbae37b-7598-4bc8-be18-5dedee6ca94e" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/2bc65acb-ffb0-460c-b054-a89afdf2ce23" width="500" style="margin: auto;">
</p>

## Componentes Utilizados

### 1. Arduino Nano (Microcontrolador Principal)
#### Pines importantes
- **5V**: Proporciona alimentación a los sensores y la pantalla I2C.
- **GND**: Conecta a tierra todos los componentes.
- **A0**: Entrada analógica conectada a la salida del **sensor de radiación solar SUF268J001**.
- **A1**: Entrada analógica conectada al **anemómetro casero (Motor RF-500TB-14415)** para medir la velocidad del viento.
- **A4**: Conecta al pin **SDA** de la **pantalla I2C** para la comunicación serial.
- **A5**: Conecta al pin **SCL** de la **pantalla I2C** para la comunicación serial.

### 2. Sensor de Radiación Solar SUF268J001
- **Función**: Medir la intensidad de la radiación solar.

#### Conexiones
- **Pin 1 (VCC)**: Conecta al **pin 5V** del Arduino Nano.
- **Pin 2 (Señal)**: Conectado a una resistencia de 1 kΩ (R1), y de ahí a la **entrada analógica A0** del Arduino Nano.
- **Resistencia R2 (100 Ω)**: Conectada en paralelo entre el nodo A0 y un capacitor de 100 nF (C1) que va a GND.
- **GND**: Conecta directamente a tierra (GND) del Arduino Nano.

### 3. Anemómetro Casero (Motor RF-500TB-14415)
- **Función**: Mide la velocidad del viento en función de las revoluciones del motor.

#### Conexiones
- **VCC**: Conecta al pin **5V** del Arduino Nano.
- **GND**: Conecta al pin **GND** del Arduino Nano.
- **Señal**: Conectado a la **entrada A1** del Arduino Nano.

### 4. Pantalla I2C
- **Función**: Muestra los valores de radiación solar y velocidad del viento en tiempo real.

#### Conexiones
- **VCC**: Conecta al pin **5V** del Arduino Nano.
- **GND**: Conecta al pin **GND** del Arduino Nano.
- **SDA**: Conectado al pin **A4** del Arduino Nano.
- **SCL**: Conectado al pin **A5** del Arduino Nano.

### 5. Conectores Molex
- **Función**: Facilitan la conexión modular de los sensores y la pantalla.

#### Conexiones
- Cada conector Molex tiene tres pines: alimentación (**VCC**), tierra (**GND**), y señal de salida. Estos se conectan entre los sensores/pantalla y los pines correspondientes del Arduino Nano:
  - **Sensor SUF268J001**: Conector Molex de 2 pines (VCC y Señal).
  - **Anemómetro (Motor)**: Conector Molex de 3 pines (VCC, GND y Señal).
  - **Pantalla I2C**: Conector Molex de 4 pines (VCC, GND, SDA, SCL).

### 6. Batería Portátil
- **Función**: Proporciona alimentación al sistema a través del pin **Vin** del Arduino Nano, regulando el voltaje a **5V** para todos los componentes.

## Proceso de Diseño del PCB

### 1. Esquemático
<p align="justify">Se diseñó el esquema eléctrico utilizando EasyEDA, asegurando que todos los componentes estuvieran conectados de manera eficiente y modular mediante conectores Molex. La disposición de los componentes en la PCB fue optimizada para reducir la longitud de las pistas y maximizar el espacio, manteniendo las conexiones limpias y bien organizadas. Durante el ruteo automático, se prestó especial atención a evitar cruces entre las pistas y asegurar que la señal de los sensores no sufriera interferencias, lo cual se logró dividiendo las conexiones entre la capa superior (rojo) y la capa inferior (azul).</p>

### 2. Conversión a PCB
<p align="justify">Se convirtió el esquema en un diseño de PCB, optimizando la disposición de los componentes y conectores para reducir la longitud de las pistas y maximizar el espacio disponible.</p>

### 3. Ruteo Automático
Se utilizó el ruteo automático en EasyEDA, con dos capas:
- **Capa superior (Rojo)**: Para las conexiones principales de datos y alimentación.
- **Capa inferior (Azul)**: Para evitar cruces de pistas y mantener el diseño compacto.

## Flujo de Comunicación entre los Componentes

### 1. Alimentación del Sistema
<p align="justify">La batería portátil suministra energía al sistema a través del pin Vin del Arduino Nano, el cual regula el voltaje a 5V. Esta alimentación es compartida con los sensores y la pantalla I2C mediante los conectores Molex.</p>

### 2. Lectura del Sensor de Radiación Solar (SUF268J001)
<p align="justify">El sensor de radiación solar se alimenta a través del pin 5V del Arduino Nano. La señal de radiación solar se transmite desde el sensor hacia el pin A0 del Arduino Nano. Esta señal analógica es convertida en un valor digital por el microcontrolador para su procesamiento.</p>

### 3. Medición de Velocidad del Viento (Anemómetro Casero)
<p align="justify">El anemómetro casero, basado en el motor RF-500TB-14415, envía pulsos analógicos al pin A1 del Arduino Nano. Estos pulsos, generados por las revoluciones del motor, son interpretados por el Arduino Nano y convertidos en datos de velocidad de viento a través de cálculos predefinidos.</p>

### 4. Visualización en Pantalla I2C
<p align="justify">La pantalla I2C recibe los valores procesados de la radiación solar y la velocidad del viento mediante la comunicación I2C, utilizando los pines A4 (SDA) y A5 (SCL) del Arduino Nano. Los datos se muestran en tiempo real en la pantalla, permitiendo una lectura continua de los parámetros monitoreados.</p>

### 5. Conexión Modular a través de Molex
<p align="justify">Todos los sensores y la pantalla están conectados mediante conectores Molex. Esto permite una desconexión rápida y sencilla de los componentes, facilitando el mantenimiento y el reemplazo sin afectar el funcionamiento del sistema.</p>

## Consideraciones de Diseño

### 1. Modularidad
<p align="justify">Se utilizaron conectores Molex para permitir una fácil conexión y desconexión de los sensores y la pantalla.</p>

### 2. Eficiencia Energética
<p align="justify">Se seleccionaron componentes de bajo consumo para maximizar la duración de la batería portátil.</p>

### 3. Diseño Compacto
<p align="justify">El diseño del PCB fue optimizado para ser compacto y portátil, asegurando que sea fácil de transportar y utilizar en campo.</p>

## Conclusión

<p align="justify">Este sistema portátil no solo es una solución práctica para la medición precisa de la velocidad del viento y la radiación solar, sino que también ofrece un enfoque eficiente y modular para evaluar la viabilidad de proyectos de energía renovable. Al ser fácil de transportar y configurar, es ideal para estudios en campo que requieran una rápida instalación y operación. Esto lo convierte en una herramienta esencial para ingenieros y profesionales que buscan optimizar la toma de decisiones sobre la instalación de aerogeneradores y paneles solares en distintas zonas
