<p align="center" style="margin-top: 50px; margin-bottom: 50px; font-family: Arial, sans-serif;">
  <p align="center">
    <img src="https://github.com/user-attachments/assets/2cae9b13-d1de-4a5a-a827-643818c98091" width="300" alt="Facultad de Ciencias e ingeniería logo">
  </p>  
  <h1 align="center" style="margin-top: 30px; margin-bottom: 0px;">Facultad de Ciencias e ingeniería “Alberto Cazorla Talleri”</h1>
</p>

<h2 align="center" style="font-family: Arial, sans-serif;">Taller 01: Introducción a los equipos e instrumentos del laboratorio</h2>

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

## Materiales y equipos utilizados

<p align="center" style="margin-top: 50px; margin-bottom: 50px; font-family: Arial, sans-serif;">

  | Modelo           | Descripción                         | Cantidad |
  | :--------------: | :---------------------------------: | :------: |
  | HY3005BC         | Fuente de Alimentación Regulable     |    1     |
  | UT139C           | Multímetro Digital                  |    1     |
  | AFG1022          | Generador de Señales                 |    1     |
  | TBS 1000C Series | Osciloscopio Digital                 |    1     |
  | -                | Cable BNC Male-Male                  |    1     |
  | -                | Punta de Osciloscopio con Conector BNC (Male) | 1 |
  | -                | Par de Cables Cocodrilos             |    1     |

</p>

## Resultados del laboratorio
### 1. Promedio de errores absoluto y relativo
<p align="justify">
Para obtener los siguientes valores, se llevaron a cabo 10 mediciones utilizando las puntas de prueba del multímetro. Además, se utilizó un display conectado a la fuente de alimentación para poder visualizar y registrar los valores de voltaje. El display nos mostraba los valores en tiempo real a medida que la fuente de alimentación suministraba energía al sistema.
</p>

<p align="center">

  | N° | Valor Real | Valor Medido | Error Absoluto | Error Relativo |
  | :------------: | :------------: | :------------: | :------------: | :------------: |
  | 1 | 1V | 0.993V | 0.007 | 0.7% |
  | 2 | 2V | 1.99V | 0.01 | 0.5% |
  | 3 | 3V | 2.999V | 0.001 | 0.033% |
  | 4 | 4V | 3.995V | 0.005 | 0.125% |
  | 5 | 5V | 4.997V | 0.003 | 0.06% |
  | 6 | 6V | 5.99V | 0.01 | 0.167% |
  | 7 | 7V | 6.99V | 0.01 | 0.143% |
  | 8 | 8V | 7.99 | 0.01 | 0.125% |
  | 9 | 9V | 8.99 | 0.01 | 0.111% |
  | 10 | 10V | 9.99 | 0.01 | 0.1% |
  | - | - | **Promedio** | 0.0076 | 0.206% |

</center>

#### Interpretación
<p align="justify">
En este caso, podemos observar que los errores absolutos son pequeños, lo que nos indica que los valores medidos están muy cerca de los valores reales. Esto es una buena noticia, ya que significa que las mediciones son precisas y confiables. Además, el promedio de los errores absolutos es de 0.0076, lo que nos indica que la diferencia promedio entre los valores medidos y los valores reales es muy pequeña.

Por otro lado, el promedio del error relativo es de 0.206%, lo que nos dice cuánto varían los valores medidos en relación con los valores reales. Un error relativo tan bajo indica que las mediciones son consistentes y tienen poca variabilidad en comparación con los valores reales.

Estos cálculos son muy útiles para evaluar la precisión de las mediciones y comprender cuánto se desvían los valores medidos de los valores reales.
</p>

### 2. Valores ajustados de la gráfica
<p align="justify">
Para obtener los valores después de haber conectado correctamente los equipos se ha configurado el Generador de señales y el Osciloscopio digital, donde:

En el Generador de Señales se proporcionó una señal sinusoidal de 1 KHz de frecuencia, 5V de Amplitud y 0 V de offset, por el canal 1, conectado al canal 1 del osciloscopio.
</p>

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen01.jpg" width="600" style="margin: auto;">
</p>

Para visualizar los valores ajustados de la gráfica se ha obtenido el siguiente resultado:

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen02.jpg" width="600" style="margin: auto;">
</p>

#### Tabla de valores ajustados de la gráfica
| Datos de Medición | Resultados |
| :------------: | :------------: |
| Tiempo (ms) | 1.00 ms |
| Tiempo (µs) | 96.0000 µs |
| Tasa de muestreo | 125 KS/s |
| Puntos | 2000 points |

#### Interpretación
1. El tiempo de 1.00 ms se refiere a un intervalo de tiempo de 1 milisegundo.
2. El tiempo de 96.0000 µs se refiere a un intervalo de tiempo de 96 microsegundos.
3. La tasa de muestreo de 125 KS/s significa que se están tomando 125,000 muestras por segundo.
4. Con 2000 puntos, se refiere a la cantidad de puntos de datos registrados en la medición.

### 3. Valores medidos de la señal de entrada en un periodo
Para este resultado hemos ampliado la forma senoidal para ser más precisos con la toma del tiempo y el periodo.

#### Valor del tiempo:

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen03.jpg" width="600" style="margin: auto;">
</p>

Al utilizar la fórmula f = 1/t con nuestros datos, obtenemos:
 f = 1 / 1*10^-3
 f = 1KHz

Por lo tanto, la frecuencia sería de 1000 Hz en lugar de 1 KHz.

El resultado obtenido indica que se ha realizado una lectura precisa del voltaje. Por lo tanto, se procederá con la siguiente medición.

#### Valor del periodo:

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen04.jpg" width="600" style="margin: auto;">
</p>

#### Tabla de valores medidos de la señal de entrada en un periodo
| Unidades Físicas | Valores |
| :------------: | :------------: |
| Tiempo | 976  µs |
| Amplitud  | 100 V |
| Frecuencia | 1.00000 kHz |

#### Interpretación
<p align="justify">
El resultado de 100 voltios medidos en el osciloscopio digital, a pesar de que se introdujo un voltaje de 5 voltios en el generador de señales, sugiere que hubo un error significativo en la medición. Asumimos qué este tipo de discrepancia puede atribuirse a varios factores técnicos, como la configuración incorrecta del osciloscopio digital, la impedancia de entrada del osciloscopio no coincidente con la impedancia de salida del generador de señales, o incluso una mala conexión entre los equipos. Por lo qué, es crucial verificar las configuraciones y asegurar una buena conexión de los equipos para garantizar mediciones precisas.
</p>

## Evidencias fotográficas
### 1. Promedio de errores absolutos y relativos
<p align="justify">
Se realizaron 10 mediciones de voltaje de 0 V a 10V  para poder hallar los valores. Asumiendo que lo mostrado en el display de la fuente de alimentación es el valor real.
</p>

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen05.jpg" width="600" style="margin: auto;">
</p>

### 2. Valores ajustados de la gráfica y valores medidos de la señal de entrada en un periodo
Usamos un generador  para obtener señales periódicas, para controlar   su periodo y su amplitud (máximo valor que toma la tensión de la señal).
<table>
    <tr>
        <td style="border: 0px solid #ddd; padding: 8px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen06.jpg" alt="" width="500">
        </td>
          <td style="border: 0px solid #ddd; padding: 6px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen07.jpg" alt="" width="500">
        </td>
</table>  


También se usó un osciloscopio digital que nos transmite señales eléctricas en formas de coordenadas o en específico señales periódicas lo cual nos presenta una gráfica de amplitud,se complementa con un multímetro, una fuente de alimentación y un generador de señales.

<table>
    <tr>
        <td style="border: 0px solid #ddd; padding: 8px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen02.jpg" alt="" width="500">
        </td>
          <td style="border: 0px solid #ddd; padding: 6px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T01Imagen08.jpg" alt="" width="500">
        </td>
</table> 

### 3. Evidencias de la manipulación de los equipos electrónicos
<table>
    <tr>
        <td style="border: 0px solid #ddd; padding: 8px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/FotoGrupal02.jpg" alt="" width="500">
        </td>
          <td style="border: 0px solid #ddd; padding: 6px;">
            <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/FotoGrupal03.jpg" alt="" width="500">
        </td>
</table> 
