<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 03: Magic Hand - TinyML</h1>
</p>

## Introducción
<p align="justify">TinyML (Tiny Machine Learning) es una subdisciplina de la inteligencia artificial que permite la ejecución de modelos de aprendizaje automático en dispositivos de bajo consumo y recursos limitados, como microcontroladores y sensores. A diferencia de los modelos tradicionales de ML, que requieren grandes capacidades de procesamiento, TinyML optimiza tanto el hardware como el software, permitiendo operar con recursos mínimos de procesamiento y energía, incluso en dispositivos que consumen milivatios o microvatios (Diego et al., 2021).</p>

<p align="justify">Estas innovaciones permiten realizar tareas como reconocimiento de voz, detección de imágenes y análisis de datos en tiempo real, sin necesidad de una conexión constante a internet, siendo ideales para aplicaciones en salud, agricultura, monitoreo ambiental y hogares inteligentes (Manzoni y De València, 2024).</p>

<p align="justify">En este contexto, el objetivo de este trabajo es implementar un modelo de TinyML en un Arduino Nano 33 BLE Sense para reconocer patrones de movimiento específicos. El proyecto, denominado Magic Wand, utiliza los sensores integrados del dispositivo, como el acelerómetro, para identificar gestos y figuras dibujadas en el aire.</p>

El sistema está diseñado para realizar las siguientes acciones:
- Encender el LED rojo cuando reconozca el dibujo del círculo.
- Encender el LED verde cuando reconozca el dibujo del número 1.
- Encender el LED azul cuando reconozca el dibujo del número 3.

<p align="justify">Este proyecto demuestra cómo la IA puede aplicarse en dispositivos con recursos limitados para tareas de reconocimiento de gestos, abriendo nuevas posibilidades en interfaces interactivas. A lo largo del informe, se detallarán los procedimientos de desarrollo, la implementación del modelo y los resultados obtenidos.</p>

## Metodología
<p align="justify">La metodología empleada para el desarrollo del Magic Wand se estructuró en varias fases interconectadas, cada una crucial para el éxito del objetivo final. A continuación, se detallan los pasos seguidos:</p>

### 1. Investigación y Recopilación de Información
<p align="justify">Iniciamos el proceso con una exhaustiva investigación en diversas fuentes académicas, incluyendo artículos científicos, documentación técnica y recursos audiovisuales explicativos. Esta fase fue fundamental para comprender en profundidad el funcionamiento del sistema Magic Wand y las capacidades específicas del Arduino Nano 33 BLE Sense en el contexto de aplicaciones TinyML.</p>

### 2. Análisis de Herramientas y Librerías
<p align="justify">Tras la investigación inicial, procedimos a identificar y evaluar las librerías más adecuadas para nuestro proyecto. Entre las más relevantes, destacamos:</p>

- <strong>Harvard_TinyMLx:</strong> Descubierta en la biblioteca de Arduino IDE, esta librería proporcionó herramientas esenciales para la interacción con el acelerómetro integrado en el Nano 33 BLE Sense.
- <strong>Arduino_LSM9DS1.h:</strong> Utilizada para la gestión eficiente del sensor inercial del dispositivo.
- <strong>ArduinoBLE.h:</strong> Implementada para habilitar las funcionalidades de Bluetooth Low Energy, crucial para la comunicación inalámbrica del dispositivo.

### 3. Adaptación y Optimización del Código
<p align="justify">El código base de MAGIC HAND requirió una significativa labor de actualización y optimización. Este proceso involucró:</p>

- Revisión minuciosa del código original.
- Identificación de secciones obsoletas o incompatibles con las versiones actuales de las librerías.
- Consulta de documentación actualizada para cada librería.
- Implementación de modificaciones para asegurar la compatibilidad y mejorar la eficiencia.
- Realización de pruebas iterativas para verificar la funcionalidad de cada componente del código.

### 4. Integración de Datos y Entrenamiento del Modelo
<p align="justify">Para mejorar la precisión en el reconocimiento de gestos, se llevó a cabo un proceso de integración de datos adicionales:</p>

- Recopilación de conjuntos de datos de gestos disponibles en repositorios en línea.
- Preprocesamiento y normalización de los datos para asegurar su compatibilidad con nuestro modelo.
- Entrenamiento del modelo de machine learning utilizando los datos ampliados, empleando técnicas de aprendizaje supervisado.
- Validación cruzada para evaluar la efectividad del modelo entrenado.

<p style="text-align: center;">
    <img src="https://github.com/user-attachments/assets/f4501f9d-0163-4ba1-86a5-7c709721384f" alt="Descripción de la imagen" width="300">
</p>

<p style="text-align: center;">
    <img src="https://github.com/user-attachments/assets/eb7fe2d3-0191-4c39-bc24-968321eb4f5c" alt="Descripción de la imagen" width="300">
	</p>

### 5. Implementación del Control de LEDs
<p align="justify">Como fase final del desarrollo, se diseñó e implementó un sistema de retroalimentación visual mediante LEDs:</p>

- Definición de la lógica de control para la activación de LEDs específicos en respuesta a gestos reconocidos.
- Implementación del código para controlar los LEDs, asegurando una sincronización precisa con el reconocimiento de gestos.
- Realización de pruebas exhaustivas para verificar la correcta iluminación de los LEDs en respuesta a cada gesto predefinido.

## Resultados
<p align="justify">El reconocimiento de gestos por el modelo de TinyML fue evaluado a través de múltiples pruebas realizadas con el Arduino Nano 33 BLE Sense. A continuación, se detallan los principales resultados obtenidos:</p>

### Precisión del reconocimiento de gestos
<p align="justify">Durante las pruebas, se realizaron diferentes movimientos con la mano para dibujar las figuras programadas (círculo, número 1 y número 3). El modelo entrenado fue capaz de identificar correctamente el gesto en el 88.33% de los casos. A continuación se presentan los resultados obtenidos en términos de precisión:</p>

- <strong>Círculo:</strong> El modelo tuvo una precisión del 85% en la detección del número 1, encendiendo el LED rojo cuando fue identificado correctamente.
- <strong>Número 1:</strong> El modelo reconoció correctamente el gesto en el 95% de los intentos. En estos casos, el LED verde se encendió de manera inmediata, validando la inferencia del modelo.
- <strong>Número 3:</strong> El reconocimiento del número 3 presentó una precisión del 85%, con el LED azul iluminándose al detectar el patrón.

### Tiempo de respuesta
<p align="justify">El tiempo de respuesta del sistema, medido desde la realización del gesto hasta el encendido del LED correspondiente, fue en promedio de 1000 milisegundos, lo que demuestra una inferencia rápida y adecuada para aplicaciones en tiempo real.</p>

A continuación se presentan algunas imágenes capturadas durante las pruebas:

| LED rojo encendido al reconocer el dibujo del círculo.  | LED verde encendido al reconocer el dibujo del número 1.  | LED azul encendido al reconocer el dibujo del número 3.  |
| :------------: | :------------: | :------------: |
| <p align="center"><img src="https://github.com/user-attachments/assets/37a31cd0-318b-45f5-9f9b-21db855fab5b" width="720" style="margin: auto;"></p>  | <p align="center"><img src="https://github.com/user-attachments/assets/3c683b60-300b-4925-8003-02b38483909f" width="900" style="margin: auto;"></p>  |  <p align="center"><img src="https://github.com/user-attachments/assets/359a63aa-8c91-4ac0-859b-8891f5a52ebe" width="680" style="margin: auto;"></p> |

<p align="justify">Adicionalmente, el siguiente video muestra una demostración del sistema en funcionamiento, donde se puede observar cómo los gestos dibujados son reconocidos y los LEDs se encienden de acuerdo con el patrón detectado.</p>

https://github.com/user-attachments/assets/23327670-d048-43a0-b005-80f85b4cf1dc

## Referencias
- Diego, C. S., Emilio, S. O., María, M. M. J., Juan, G. S., Marcelino, M. S., Pedro, D. M., & Regino, B. C. (2021). Tiny ML: La nueva revolución en la IoT. https://roderic.uv.es/items/bae51b9b-e128-48e7-aa73-367dd8d45081
- Manzoni, P., & De València Departamento de Informática de Sistemas y Computadores -Departament D’Informàtica de Sistemes I Computadors, U. P. (2024, 26 julio). Comparativa de plataformas software para TinyML. https://riunet.upv.es/handle/10251/206637
