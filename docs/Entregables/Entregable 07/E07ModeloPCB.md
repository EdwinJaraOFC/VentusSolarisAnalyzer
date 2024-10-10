<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 07: Modelo PCB</h1>
</p>

## Introducción

<p align="justify">Este informe detalla el diseño y componentes del PCB para un sistema portátil que mide la velocidad del viento y la radiación solar. El sistema está basado en un **Arduino Nano** como microcontrolador principal, el cual se conecta a un **sensor SUF268J001** para medir la radiación solar y a un anemómetro casero construido con un motor **RF-500TB-14415** para medir la velocidad del viento. La visualización de los datos se realiza a través de una pantalla **I2C**, y la alimentación del sistema proviene de una batería portátil. Los componentes no están conectados directamente a la PCB, sino mediante conectores **Molex** para facilitar la modularidad y el mantenimiento del sistema.</p>

## Imagen del PCB

[Insertar imagen del diseño del PCB aquí]

## Componentes Utilizados

### 1. Arduino Nano (Microcontrolador Principal)
#### Pines importantes
- **5V**: Alimenta a los sensores y a la pantalla I2C.
- **Pines ADC**: Utilizados para la lectura de señales analógicas del sensor de radiación solar y el anemómetro.

### 2. Sensor de Radiación Solar SUF268J001
- **Función**: Medir la intensidad de la radiación solar.

#### Conexiones
- **VCC** al pin **5V** del Arduino Nano.
- **GND** al pin **GND**.
- **Señal** a un pin **ADC** (A0).

### 3. Anemómetro Casero (Motor RF-500TB-14415)
- **Función**: Mide la velocidad del viento en función de las revoluciones del motor.

#### Conexiones
- **VCC** al pin **5V** del Arduino Nano.
- **GND** al pin **GND**.
- **Señal** a un pin **ADC** (A1).

### 4. Pantalla I2C
- **Función**: Muestra los valores de radiación solar y velocidad del viento en tiempo real.

#### Conexiones
- **VCC** al pin **5V**.
- **GND** al **GND**.
- **SDA** al pin A4 y **SCL** al pin A5 para la comunicación I2C.

### 5. Conectores Molex
- **Función**: Permiten una conexión modular para los sensores y la pantalla.
- **Conexiones**: Utilizados para conectar **VCC**, **GND** y la señal de cada sensor al PCB.

### 6. Batería Portátil
- **Función**: Proporciona alimentación al sistema a través del pin **Vin** del Arduino Nano, regulando el voltaje a **5V** para todos los componentes.

## Proceso de Diseño del PCB

### 1. Esquemático
<p align="justify">Se diseñó el esquema eléctrico en **EasyEDA**, conectando los componentes mediante conectores Molex para una fácil desconexión y mantenimiento del sistema.</p>

### 2. Conversión a PCB
<p align="justify">Se convirtió el esquema en un diseño de PCB, optimizando la disposición de los componentes y conectores para reducir la longitud de las pistas y maximizar el espacio disponible.</p>

### 3. Ruteo Automático
Se utilizó el ruteo automático en **EasyEDA**, con dos capas:
- **Capa superior (Rojo)**: Para las conexiones principales de datos y alimentación.
- **Capa inferior (Azul)**: Para evitar cruces de pistas y mantener el diseño compacto.

## Flujo de Comunicación entre los Componentes

### 1.  Alimentación del Sistema
<p align="justify">La batería portátil alimenta el sistema a través del pin **Vin** del Arduino Nano, regulando el voltaje a **5V**.</p>

### 2. Lectura del Sensor de Radiación Solar (SUF268J001)
<p align="justify">El sensor envía su señal analógica al pin **A0** del Arduino Nano, donde se procesa para medir la radiación solar.</p>

### 3. Medición de Velocidad del Viento (Anemómetro Casero)
<p align="justify">El motor **RF-500TB-14415** genera pulsos que son leídos por el pin **A1** del Arduino Nano, permitiendo calcular la velocidad del viento mediante cálculos basados en las revoluciones del motor.</p>

### 4. Visualización en Pantalla I2C
<p align="justify">Los datos procesados de radiación solar y velocidad del viento se envían a la pantalla I2C a través de los pines **A4** (SDA) y **A5** (SCL) del Arduino Nano.</p>

### 5. Conexión Modular a través de Molex
<p align="justify">Los conectores Molex permiten la conexión y desconexión rápida de los sensores y la pantalla, facilitando el mantenimiento del sistema.</p>

## Consideraciones de Diseño

### 1. Modularidad
<p align="justify">Se utilizaron conectores Molex para permitir una fácil conexión y desconexión de los sensores y la pantalla.</p>

### 2. Eficiencia Energética
<p align="justify">Todos los componentes fueron seleccionados por su bajo consumo de energía, lo que optimiza la duración de la batería portátil.</p>

### 3. Diseño Compacto
<p align="justify">El diseño del PCB fue optimizado para que sea fácil de transportar y utilizar en diferentes ubicaciones.</p>

## Resultado Esperado

<p align="justify">El diseño del PCB asegura la lectura precisa y continua de la radiación solar y la velocidad del viento, con los datos mostrados en tiempo real en la pantalla I2C. Gracias al uso de conectores Molex, el sistema es altamente modular, lo que facilita la desconexión rápida de los componentes para ajustes o reparaciones. El sistema está optimizado para funcionar de manera eficiente con una batería portátil, lo que lo convierte en una herramienta práctica y fácil de usar para estudios de viabilidad de energía renovable.</p>

## Conclusión

<p align="justify">El sistema portátil para medir la velocidad del viento y la radiación solar está diseñado para proporcionar datos precisos y en tiempo real, facilitando la evaluación de proyectos de energía renovable. El uso de conectores Molex y un diseño optimizado garantiza la modularidad, eficiencia y facilidad de uso del sistema en campo.</p>
