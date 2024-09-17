## Tabla Función
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
