<p align="left">
  <img src="https://github.com/user-attachments/assets/2cae9b13-d1de-4a5a-a827-643818c98091" width="200">
  <h1 align="center">Entregable 04: Lista de Características y Requerimientos Principales</h1>
</p>

## Objetivo
<p align="justify">Proporcionar una herramienta portátil y precisa para evaluar la viabilidad de instalar aerogeneradores o paneles solares en una ubicación específica.</p>

## Tabla "Función"
| Característica Principal | Característica Secundaria | Estudio del Caso Industrial |
| :------------: | :------------: | :------------: |
| **Material**  |  **Propiedades de entrada y salida** | <p align="justify">Los cables y conectores deben ser duraderos y resistentes a las condiciones ambientales.</p>  |
|   | **Materiales prescritos**  | <p align="justify"><strong>Componentes Electrónicos:</strong> Hechos de silicio y plásticos especializados para placas de circuito, garantizando precisión y durabilidad. <strong>Carcasas:</strong> Fabricadas con PLA, conocido por su facilidad de impresión y buen rendimiento mecánico. <strong>Maletín:</strong> Construido con madera o plásticos resistentes, diseñados para soportar condiciones climáticas moderadas. Opcionalmente, se pueden considerar plásticos de ingeniería para mayor durabilidad en condiciones extremas.</p>  |
| **Energía**  | **Energía de conexión**  | <p align="justify">3.3V o 5V</p>  |
|   | **Almacenamiento**  | <p align="justify">Batería solar recargable o uso de baterías recargables</p>  |
| **Señal**  | **Medidas de entrada y salida**  | <p align="justify">El anemómetro y piranómetro envían datos de entrada que son procesados y luego tienen salidas específicas para visualización y almacenamiento</p>  |
|   | **Estilo de visualización**  | <p align="justify">Pantalla LED</p>  |
|   | **Componentes**  | <p align="justify">Incluye microcontrolador, sensores, módulos de comunicación, pantalla LED y LEDs</p>  |
|   | **Equipo de monitoreo**  | <p align="justify">Monitoreo en tiempo real a través de la interfaz web del sistema o con la base de datos para seguimiento y análisis</p>  |
|   | **Señal (Analógica, Digital)**  | <p align="justify">Tanto analógicas (de sensores) como digitales (de módulos de procesamiento y comunicación)</p>  |
|   | **Tiempo, Calidad**  | <p align="justify">Señales con alta precisión y en tiempo real para asegurar la calidad de las mediciones</p>  |
|   | **Intercambio de Datos**  | <p align="justify">Datos transmitidos entre el dispositivo y la base de datos hacia la página web, con módulos de ondas de baja frecuencia para uso cuando se pierda la conexión a internet</p>  |
| **Definición de Interfaces**  |  **Mecánico** | <p align="justify">Sistema que asegura un acoplamiento estable de los componentes pequeños como el anemómetro, la veleta y el piranómetro con los microcontroladores</p>  |
|   | **Interfaces de software**  | <p align="justify">La aplicación web y la base de datos están diseñadas para recibir y procesar información de los sensores, facilitando el monitoreo y análisis de datos</p>  |
|   | **Eléctrico / Electrónico**  | <p align="justify">El Arduino o ESP32 se conectará a través de interfaces específicas que permiten la comunicación efectiva con los sensores y módulos de transmisión. La pantalla LED y los LEDs aseguran una visualización clara de los datos y señales. Todo el cableado y las conexiones están optimizados para minimizar interferencias</p>  |
|   | **Ambiente**  | <p align="justify">Apto para para funcionar correctamente en diferentes condiciones ambientales (no extremas), asegurando la transmisión de datos efectiva y la operación correcta del dispositivo en campo</p>  |

## Tabla "Diseño / Estructura"

| Característica Principal  | Característica Secundaria  | Estudio del Caso Industrial  |
| :------------: | :------------: | :------------: |
| **Geometría**  | **Dimensiones**  | <p align="justify">Medidas del maletín: 28 cm × 23 cm × 6 cm, el cual dentro contendrá las carcasas y tapas de medidas 19 cm x 18 cm x 1 cm</p>  |
|   | **Número**  | <p align="justify">1 maletín que contiene dentro: 1 anemómetro, 1 veleta y 1 piranómetro, entre otros dispositivos secundarios como la pantalla LED</p>  |
|   | **Conexión**  | <p align="justify">El sistema está integrado todo dentro del maletín</p>  |
|   | **Extensión**  | <p align="justify">Opciones adicionales en carcasas y tipos de sensores</p>  |
| **Electricidad / Electrónica**  | **Voltaje nominal**  | <p align="justify">Dispositivo de monitoreo: 3.3V o 5V</p>  |
|   | **Conexión**  | <p align="justify">Dentro del maletín</p>  |
|   | **Disponibilidad de componentes**  | <p align="justify">Relevante: Al menos 5 años de disponibilidad</p>  |
|   | **Accesibilidad**  | <p align="justify">Relevante para el mantenimiento</p>  |
|   | **Intercambio**  | <p align="justify">Los sensores modulares deben ser fácilmente reemplazables por el cliente, los demás componentes pueden ser cambiados con ayuda de un técnico</p>  |
| **Software**  | **Interfaces**  | <p align="justify">Interfaces internas y externas adaptadas a los requisitos del medidor para asegurar una integración y operación eficiente</p>  |
|   | **Actualizaciones**  | <p align="justify">Posible de manera manual</p>  |
|   | **Hardware**  | <p align="justify">Compatibilidad con microcontroladores Arduinos o ESP32, garantizando un rendimiento eficiente y flexible para diversas aplicaciones del medidor</p>  |
|   | **Capacidad de prueba**  | <p align="justify">Pruebas con diferentes casos simulados de medidas regulares e irregulares para observar el comportamiento del sistema</p>  |
|   | **Modos de funcionamiento**  | <p align="justify">Con el modo automático, recibiendo información de manera contínua en la nube y el modo manual, obteniendo la información a través de una tarjeta SD</p>  |
| **Ergonomía**  | **Valor**  | <p align="justify">Relación costo-beneficio favorable, justificando la inversión en comodidad y facilidad de uso</p>  |
|   | **Operación lógica**  | <p align="justify">Interfaz intuitiva que facilita el uso del medidor sin necesidad de capacitación extensa</p>  |
|   | **Claridad e iluminación**  | <p align="justify">Esenciales para asegurar que el medidor sea fácil de leer y utilizar en diversas condiciones de luz, lo que contribuye a una experiencia de usuario satisfactoria</p>  |
|   | **Diseño de forma**  | <p align="justify">Diseño ergonómico en forma de maletín que se adapta al uso manual, proporcionando comodidad y facilidad de manejo y transporte</p>  |

## Tabla "Realización y Producción"

| Característica Principal  | Característica Secundaria  | Estudio del Caso Industrial  |
| :------------: | :------------: | :------------: |
| **Fabricación**  | **Dispositivo de control, monitoreo**  | <p align="justify">El material seleccionado proporcionará el soporte adecuado para alojar los módulos de comunicación y otros componentes esenciales para el funcionamiento del medidor</p>  |
| **Control**  | **Capacidad de medición y prueba**  | <p align="justify">Pruebas rigurosas de medición realizadas en diferentes etapas para verificar el rendimiento y la precisión del medidor</p>  |

## Tabla "Uso / Reciclaje"

| Característica Principal  | Característica Secundaria  | Estudio del Caso Industrial  |
| :------------: | :------------: | :------------: |
| **Uso**  | **Área de aplicación y venta**  | <p align="justify">Diseñado para evaluar la viabilidad de instalaciones de energías renovables en diversas ubicaciones</p>  |
|   | **Ubicación**  | <p align="justify">Áreas de evaluación para energías renovables, preferentemente en zonas despejadas para evitar interferencias y garantizar precisión</p>  |
|   | **Comodidad**  | <p align="justify">Diseño ergonómico que facilita su manejo en campo, y permite un cómodo reemplazo de los sensores modulares cuando sea necesario</p>  |
|   | **Servicio**  | <p align="justify">Provisión de soporte técnico y mantenimiento para asegurar el correcto funcionamiento del medidor</p>  |
|   | **Fiabilidad**  | <p align="justify">Precisión y durabilidad bajo cualquier condición climática, con sensores modulares que se pueden cambiar cuando sea necesario, asegurando su funcionalidad durante toda su vida útil</p>  |
|   | **Disponibilidad**  | <p align="justify">24/7</p>  |
| **Reciclaje**  | **Reutilizar**  | <p align="justify">90% de los componentes, como sensores modulares y carcasas intercambiables, son reutilizables</p>  |
|   | **Reciclaje**  | <p align="justify">75%, uso de plásticos reciclables en componentes que requieren carcasas</p>  |
|   | **Desecho**  | <p align="justify">Manejo de componentes metálicos, plásticos y electrónicos al final de la vida útil del producto</p>  |
|   | **Dispositivos nocivos**  | <p align="justify">Gestión y reciclaje de componentes metálicos, plásticos y electrónicos que podrían ser nocivos</p>  |
|   | **Accesibilidad**  | <p align="justify">Alta accesibilidad para programas de reciclaje y puntos de recogida de dispositivos usados</p>  |

## Tabla "Organización"

| Característica Principal  | Característica Secundaria  | Estudio del Caso Industrial  |
| :------------: | :------------: | :------------: |
| **Planificación**  | **Costo de fabricación y herramientas**  | <p align="justify">300 - 700 PEN</p>  |
|   | **Inversión**  | <p align="justify">700 - 1500 PEN</p>  |
|   | **Normas, directrices**  | <p align="justify">ISO 9001 (Sistema de Gestión de la Calidad), IEC 61010 (Seguridad de equipos de medición electrónica) e ISO 14001 (Gestión ambiental).</p>  |
|   | **Conocimientos técnicos del proyecto (En particular: ideas no patentadas)**  | <p align="justify">Ajuste preciso para mejorar la lectura de sensores. Ensamblaje en módulos intercambiables para facilidad de reparación.</p>  |
| **Sostenibilidad**  | **Equilibrio ecológico**  | <p align="justify">Muy bueno, diseño del medidor con materiales y procesos que minimizan el impacto ambiental y promueven la conservación de recursos</p>  |
|   | **Eficiencia energética**  | <p align="justify">Lo mejor posible, implementación de tecnologías de bajo consumo energético para reducir el uso de energía</p>  |
|   | **Costos del sistema**  | <p align="justify">Económicamente viables a lo largo del ciclo de vida del producto</p>  |
