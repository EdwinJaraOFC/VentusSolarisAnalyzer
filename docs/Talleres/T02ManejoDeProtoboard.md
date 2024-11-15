<p align="center" style="margin-top: 50px; margin-bottom: 50px; font-family: Arial, sans-serif;">
  <p align="center">
    <img src="https://github.com/user-attachments/assets/2cae9b13-d1de-4a5a-a827-643818c98091" width="300" alt="Facultad de Ciencias e ingeniería logo">
  </p>  
  <h1 align="center" style="margin-top: 30px; margin-bottom: 0px;">Facultad de Ciencias e ingeniería “Alberto Cazorla Talleri”</h1>
</p>

<h2 align="center" style="font-family: Arial, sans-serif;">Taller 02: Manejo de Protoboard</h2>

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

## 1. Descripción del Protoboard

### Características y componentes del protoboard

<p align="justify">
Las características principales del protoboard incluyen filas y columnas de orificios, con líneas de conexión internas que permiten la interconexión de los componentes. Esto facilita la creación rápida de circuitos y la realización de pruebas sin la necesidad de realizar conexiones permanentes.
</p>

### Importancia del  protoboard como herramienta para la creación y prueba de circuitos electrónicos

<p align="justify">
El protoboard es una herramienta fundamental para la creación y prueba de circuitos electrónicos debido a su capacidad para facilitar el prototipado rápido y la experimentación sin la necesidad de soldadura. Permite a los diseñadores y estudiantes realizar conexiones temporales de componentes electrónicos de manera ágil, lo que acelera el proceso de diseño y prueba de circuitos. 
</p>

## 2. Materiales
- Fuente de alimentación variable
- Kit de electrónica B (Arduino UNO, cables, resistencias, protoboard)

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen01.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen02.jpg" width="300px"/>
</div>
![image](https://github.com/user-attachments/assets/d06e2057-98b8-4788-87ab-c6fbe7110887)
![image](https://github.com/user-attachments/assets/44447c0f-a7e4-470e-b7a7-2bb9d7c30bad)

## 3. Desarrollo de ejercicios
### Ejercicio 1
En este circuito se trabajó con una resistencia de 1k ohmios, donde se apreciaba en serie y paralelo.

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen03.png" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen04.jpg" width="300px"/>
</div>
![image](https://github.com/user-attachments/assets/78d5370f-4388-4855-8f4b-dfeb47a25499)
![image](https://github.com/user-attachments/assets/552d6c8f-b59f-4290-aa8e-f199e737c0e7)

Teniendo en cuenta los datos, hicimos los cálculos tanto en serie como en paralelo, teniendo como resultado que la resistencia total es de 666.66 ohm.

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen05.jpg" width="400px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen06.jpg" width="300px"/>
</div>
![image](https://github.com/user-attachments/assets/dd87e327-e9b6-4eac-89e5-a03e42f9153f)
![image](https://github.com/user-attachments/assets/966d05a7-4606-4170-b46f-23dafc490b2f)

### Ejercicio 2
El diagrama de un circuito eléctrico que consiste en cinco resistencias etiquetadas como R1, R2, R3, R4 y R5. El circuito tiene la forma de un pentágono con una resistencia en cada lado. 

Se diseñó un esquema donde las resistencias se colocaron en paralelo en los extremos y en serie en el centro.

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen07.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen08.jpg" width="300px"/>
</div>

Al momento de calcular el valor total , se encontró que era de 400 ohmios.

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen09.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen10.jpg" width="300px"/>
</div>
<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen11.jpg" width="300px">
</p> 

### Ejercicio 3
Este experimento representa un circuito eléctrico que  está compuesto por seis resistencias (R1 a R6) de 1000 ohm cada una. Donde, se realizaron los siguientes cálculos:

**En serie**<br>
R13 = R1  +  R3 = 2000 ohm<br>
R24 = R2  +  R4 = 2000 ohm<br>
R56 = R5  +  R6 = 2000 ohm<br>
<br>
**En paralelo**<br>
RT = 1 /(1/R13 + 1/R24 + 1/R56) = 666.67 ohm

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen12.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen13.jpg" width="300px"/>
</div>

**Resultado**
<p align="justify">
Para comprobar estos resultados hemos utilizado un multímetro, para lo cuál primero hemos realizado el circuito con resistencias y el protoboard. Luego, realizamos el test y se comprobó qué es correcto el cálculo y el circuito eléctrico.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen14.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen15.jpg" width="300px"/>
</div>

### Ejercicio 4
**Circuito divisor de tensión**
- **Definición:** Es un arreglo de resistencias que divide un voltaje de entrada en una proporción específica.
- **Relación con la ley de Ohm:** el voltaje en un circuito divisor es proporcional a la resistencia utilizada.

**Componentes del Circuito**
- **Resistencias:** componentes utilizados para dividir el voltaje de entrada.
- **Funcionamiento:** las resistencias en serie dividen el voltaje total según su valor.

**Cálculo de las resistencias 1 y 2**

<p align="center">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen16.jpg" width="300px">
</p>

**Imagen del circuito divisor de tensión**
<p align="justify">
La tensión se divide entre las resistencias en serie, y luego esa tensión dividida se divide nuevamente entre las resistencias en paralelo. Esto nos permite obtener una salida con un valor de tensión específico basado en la configuración de las resistencias.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen17.jpg" width="400px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen18.jpg" width="300px"/>
</div>

**Resultado**
<p align="justify">
El multímetro es una herramienta fundamental en la medición de resistencia eléctrica. Al conectar el multitester entre los puntos A y B del circuito, obtuvimos una lectura de 1.1 k ohmios. Esta medición confirma que el valor teórico calculado coincide con la medición práctica, demostrando así la precisión del cálculo y la validez del diseño del circuito.
</p>

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen19.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/T02Imagen20.jpg" width="300px"/>
</div>

## 4. Evidencias del desarrollo de ejercicios

<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/FotoGrupal04.jpg" width="300px"/>
  <img src="https://github.com/Paradoxeado/prototypeProject/blob/main/Im%C3%A1genes/FotoGrupal05.jpg" width="300px"/>
</div>

## 5. Conclusiones
<p align="justify">
Los circuitos electrónicos y el uso del protoboard incluyen la importancia de la práctica en la consolidación de conocimientos teóricos, la necesidad de paciencia y precisión en la realización de conexiones, la valoración de la flexibilidad en el diseño y la resolución de problemas, así como la aplicación práctica de conceptos teóricos. Estas conclusiones resaltan la relevancia del aprendizaje experiencial y la importancia de adquirir habilidades prácticas para complementar la comprensión teórica en el campo de la electrónica.
</p>

<p align="justify">
Además, es importante destacar la necesidad de una organización meticulosa al trabajar con el protoboard, así como la creatividad para explorar diferentes soluciones en el desarrollo de circuitos electrónicos. Estas habilidades son fundamentales para el éxito en el diseño, análisis y resolución de problemas. 
</p>
