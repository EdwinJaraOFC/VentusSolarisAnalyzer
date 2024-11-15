<p align="left">
  <img src="https://github.com/user-attachments/assets/2cae9b13-d1de-4a5a-a827-643818c98091" width="200">
  <h1 align="center">VentusSolaris Analyzer: A Low-Cost Portable Kit for Renewable Energy Evaluation</h1>
</p>

## Descripción General

<p align="justify"><strong>VentusSolaris Analyzer</strong> es una solución portátil de bajo costo diseñada para evaluar el potencial de energías renovables en diversas ubicaciones. Este kit combina la medición de energía solar y eólica, ofreciendo a estudiantes, investigadores y profesionales una herramienta accesible para obtener datos precisos y en tiempo real.</p>

<p align="justify">Concebido dentro de un entorno académico, este proyecto tiene como objetivo acercar la tecnología de análisis de energías renovables a aquellos interesados en el impacto y la viabilidad de estas soluciones en diferentes regiones.</p>

### ODS 7: Energía Asequible y no Contaminante

<p align="justify">Tiene como objetivo garantizar el acceso a una energía asequible, fiable, sostenible y moderna para todos. Este objetivo busca aumentar la proporción de energía renovable en el consumo global, mejorar la eficiencia energética y proporcionar acceso a servicios energéticos básicos, especialmente en regiones rurales y en desarrollo. Además, fomenta la inversión en infraestructura y tecnologías de energía sostenible, contribuyendo así a la lucha contra el cambio climático y a la promoción de un desarrollo económico inclusivo.</p>

## Características Principales

- 🌞 **Energía Solar**: Medición eficiente de la radiación solar.
- 🌬️ **Energía Eólica**: Monitorización de la velocidad del viento para evaluar el potencial eólico.
- 📊 **Interfaz Intuitiva**: Presentación clara y visualización de los datos recopilados.
- 💼 **Portabilidad**: Diseño compacto y ligero, ideal para trabajos de campo.
- 💡 **Accesibilidad**: Tecnología asequible sin comprometer la precisión ni la funcionalidad.

## Estructura del Proyecto

```bash
VentusSolarisAnalyzer/
├── docs/         # Documentación técnica y manuales del usuario
├── examples/     # Ejemplos de uso y configuración del kit
├── hardware/     # Archivos y esquemas relacionados con el hardware
├── src/          # Código fuente del proyecto
├── test/         # Pruebas automatizadas para validación del kit
├── LICENSE       # Licencia del proyecto
└── README.md     # Este archivo
```

## Motivación y Contexto
<p align="justify">El acceso a herramientas confiables para la evaluación de energías renovables suele estar limitado por altos costos y falta de accesibilidad. VentusSolaris Analyzer nace con la intención de democratizar la evaluación energética, proporcionando una alternativa portátil y económica que puede ser implementada en áreas urbanas o rurales.</p>

<p align="justify">Este proyecto también responde a la necesidad académica de ofrecer a los estudiantes experiencias prácticas en el uso de tecnologías renovables, facilitando la comprensión de conceptos como energía solar fotovoltaica y energía eólica en escenarios reales.</p>

## Resultados Esperados
Con VentusSolaris Analyzer, se espera lograr:

- Datos precisos en la medición de energías renovables en diferentes entornos.
- Facilidad de uso en investigaciones de campo, donde la portabilidad es clave.
- Prototipos escalables, que puedan mejorarse y adaptarse a necesidades más complejas en futuras iteraciones.

<p align="justify">Estos logros contribuirán no solo al campo académico, sino también a la posibilidad de implementación en proyectos de desarrollo sostenible en comunidades con acceso limitado a recursos energéticos.</p>

## Equipo Actual (Proyecto Mejorado: VentusSolaris Analyzer)

| Miembro | Rol | Función Principal | Correo |
| :------------: | :------------: | :------------: | :------------: |
| **Florian Párraga, Josué Abel** | Desarrollo Técnico | Prototipado y desarrollo técnico | josue.florian@upch.pe |
| **Jara Bocanegra, Edwin Junior** | Desarrollo Técnico | Prototipado y desarrollo técnico | edwin.jara@upch.pe |
| **Pérez Amado, Romina Alisson** | Investigación | Investigación sobre energías renovables | romina.perez@upch.pe |
| **Pérez Damián, Cindy Mayomi** | Investigación | Investigación sobre energías renovables | cindy.perez@upch.pe |
| **Vásquez Nuñez, America Mailyn** | Investigación | Investigación sobre energías renovables | america.vasquez@upch.pe |

## Equipo Fundador (Proyecto Original: SolarWind Analyzer)

| Miembro | Rol | Función Principal | Correo |
| :------------: | :------------: | :------------: | :------------: |
| **Dueñas Condori, Aracely Nicoll** | Manufactura Digital | Encargada de manufactura digital | aracely.duenas@upch.pe |
| **Jara Bocanegra, Edwin Junior** | Desarrollo Técnico | Prototipado y desarrollo técnico | edwin.jara@upch.pe |
| **Mendoza Villar, Antony Iván** | Diseño y Modelado 3D | Coordinación del diseño y modelado 3D | antony.mendoza@upch.pe |
| **Poma Arrieta, Josue Jhordan** | Investigación | Investigación y desarrollo de la página web | josue.poma@upch.pe |
| **Vidaurre Juárez, Amparo Marleny** | Coordinadora General | Coordinación general del proyecto | amparo.vidaurre@upch.pe |

## Documentación y Recursos
<p align="justify">Toda la documentación técnica y manuales de usuario pueden encontrarse en la carpeta docs/, donde se detalla el funcionamiento interno del sistema, guías de uso y especificaciones de hardware. Además, en la carpeta examples/ se incluyen ejemplos para facilitar la configuración del kit en diferentes entornos.</p>

## Identificación del TRL del Proyecto
### Motor DC para el anemómetro

<p align="justify">En este proyecto, se va a medir la velocidad del viento en (m/s) mediante un sistema basado en un anemómetro conectado a un motor. El funcionamiento del sistema se activa cuando el viento hace girar las hélices del anemómetro. Estas hélices, al girar, no solo registran el movimiento del viento, sino que también generan electricidad al cortar las líneas del campo magnético en el motor. Este proceso, a través del motor DC nos permite generar una corriente eléctrica que se relaciona directamente con la velocidad del viento, facilitando así una medición precisa a partir del voltaje generado.</p>
  
<p align="center">
  <img src="https://github.com/user-attachments/assets/3f31eb08-3cad-4a52-a900-b60ca799d16d" width="200"/>
</p>

### Sensor de radiación

<p align="justify">En este proyecto, vamos a medir uno de los parámetros qué es  la irradiancia solar, a través del sensor de 527-SUF268J00, el cual mide la irradiación en watts por metro cuadrado (W/m²). Este sensor funciona mediante la captura de luz solar que incide sobre un material semiconductor, comúnmente silicio. La energía de los fotones de la luz excita los electrones en el semiconductor, creando pares de electrones y huecos. Al separarse, estos generan una corriente eléctrica; cuanto mayor es la luz recibida, mayor es la corriente producida. Esta corriente se convierte en un voltaje que representa la cantidad de luz que está recibiendo el sensor. Para garantizar que las lecturas sean precisas. Además, cuenta con recubrimientos protectores que resguardan su funcionamiento frente a la humedad y la radiación UV, asegurando así su durabilidad y eficacia en diversas condiciones ambientales.</p>

Especificaciones técnicas: 

- Fuente de luz: Luz del sol
- Método de conexión: 2-Pin
- Configuración de salida: Fotodiodo
- Temperatura de trabajo mínima: -30 C
- Temperatura de trabajo máxima: +80 C
- Características: Tiempo de respuesta rápido

<p align="center">
  <img src="https://github.com/user-attachments/assets/52cc6b66-f9fb-439a-8800-4a5e504d36d9" width="300"/>
</p>

### Sensor de Ondas de Radio

<p align="justify">El funcionamiento del sensor de ondas de radio, es fundamental para la recepción de señales que viajan a través del aire. Este sensor utiliza una antena para captar las ondas de radio, que son oscilaciones electromagnéticas. Cuando estas ondas llegan a la antena, inducen el movimiento de electrones en el material conductor de la antena, lo que genera pequeñas corrientes eléctricas. Estas corrientes son directamente proporcionales a la energía de las ondas de radio que están siendo recibidas. La corriente generada se convierte en una señal eléctrica que representa la información contenida en las ondas, como voz, música o datos digitales. Esta señal eléctrica se amplifica para mejorar su calidad y se procesa mediante circuitos electrónicos que extraen la información deseada.</p>

Especificaciones técnicas:

- Voltaje de alimentación: 1.9 ~ 3.6V DC
- Voltaje lógico SPI: 0 ~ 3.3V / 5V (Tolerante a 5V)
- Consumo corriente: 115 mA (max.)
- Chip RF: NRF24L01+
- Chip PA+LNA: RFX2401C
- Interfaz digital: SPI
- Potencia de transmisión: +20 dBm
  
<p align="center">
  <img src="https://github.com/user-attachments/assets/02ea2a26-bd7e-4bad-927e-fc2dd4c1b610" width="200"/>
</p>

## Licencia
<p align="justify">Este proyecto está licenciado bajo la Licencia Apache-2.0, lo que permite su uso, modificación y distribución para fines académicos y comerciales, siempre y cuando se otorgue el crédito adecuado.</p>

## Contacto
<p align="justify">Si tienes alguna duda, sugerencia o interés en colaborar con el proyecto, no dudes en ponerte en contacto con nosotros a través de nuestros correos electrónicos.</p>