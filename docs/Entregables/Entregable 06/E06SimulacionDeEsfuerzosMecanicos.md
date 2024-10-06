<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 06: Simulación de Esfuerzos Mecánicos (Estáticos)</h1>
</p>

## Introducción

<p align="justify">El diseño de piezas en 3D es un área muy importante dentro de los proyectos de ingeniería, especialmente cuando se trata de la protección de componentes electrónicos, el proceso de diseño implica la incorporación de elementos claves como las nervaduras, chaflanes y redondeos, que mejoran la resistencia y reducen las tensiones concentradas en puntos críticos de las piezas. Las nervaduras son elementos extrusionados que agregan material de refuerzo en zonas específicas, aumentando la rigidez estructural sin incrementar el peso de la pieza. Por otro lado, el uso de chaflanes y redondeos ayuda a reducir el esfuerzo en las uniones y mejorar la durabilidad de las piezas impresas en 3D [4].</p>

<p align="justify">La simulación por elementos finitos mediante el software SIMSCALE es una herramienta esencial en el proceso de diseño, ya que permite predecir y analizar efectos de diversos tipos de esfuerzos, como atracción, compresión, flexión, torsión y cortante, sobre las piezas diseñadas. Esta técnica es especialmente útil para identificar posibles fallas en materiales frágiles, como fracturas por esfuerzos superiores a su resistencia máxima o fallas por fatiga debido a cargas fluctuantes [3].</p>

<p align="justify">Además, debemos considerar los factores externos, como la temperatura, estas pueden influir en la deformación y el desempeño estructural de las carcasas, existen algunas aplicaciones donde las carcasas protegen placas electrónicas cercanas a motores, es por eso qué es fundamental evaluar su resistencia térmica mediante simulaciones que modelen la deformación bajo diferentes condiciones de operación [2].</p>

<p align="justify">En el presente informe se diseñó una simulación de esfuerzos mecánicos de uno de los componentes de nuestro proyecto, se ha tenido en cuenta la correcta selección del material y la orientación de la impresión, ya que juegan un papel importante en la optimización del rendimiento de las piezas impresas en 3D.</p>

## Metodologia

<p align="justify">El análisis de esfuerzos estáticos permite estudiar cómo los materiales responden a cargas que se aplican de manera lenta y continua hasta alcanzar un equilibrio. Este enfoque asume que no hay aceleraciones ni efectos dinámicos, lo que facilita el estudio de la distribución de fuerzas y deformaciones en un entorno estable y predecible. Este análisis se basa en la mecánica de sólidos, evaluando cómo las fuerzas externas generan esfuerzos internos y deformaciones. </p>

<p align="justify">El material principal utilizado es el PLA (ácido poliláctico), un polímero biodegradable obtenido a partir de recursos renovables como el almidón de maíz, la caña de azúcar o la tapioca. Este material se presenta como una alternativa sostenible a los plásticos convencionales derivados del petróleo. Gracias a su rigidez, facilidad de manejo y sostenibilidad, el PLA es adecuado para la simulación de esfuerzos estáticos. No obstante, su fragilidad lo limita en aplicaciones que requieren alta resistencia mecánica o a impactos. A pesar de ello, resulta útil para evaluar el comportamiento de los componentes bajo cargas estáticas, permitiendo comprender mejor sus límites y capacidades [1].</p>

<p align="justify">La simulación mediante la técnica FEM descompone modelos complejos en pequeñas secciones, lo cual calcula los esfuerzos y deformaciones. SimScale permite realizar estos cálculos de manera eficiente, proporcionando representaciones visuales que muestran las concentraciones de esfuerzos y deformaciones en la estructura analizada. Esto ayuda a identificar las zonas donde la estructura puede experimentar mayores tensiones bajo la carga aplicada [3].</p>

### Paso 1: Creación del proyecto en Onshape

<p align="justify">Iniciamos el proceso creando un nuevo proyecto en Onshape, una plataforma de modelado 3D basada en la nube. El objetivo del proyecto era diseñar los cases para el Arduino Nano y el sensor SUF268J001, asegurándonos de que encajaran perfectamente y cumplieran con las especificaciones físicas de los componentes.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/80305021-accc-413a-bc5b-91cc40f04917" width="503" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/f3a12de0-2fd7-4fcd-aa6c-0dd8f6193b28" width="497" style="margin: auto;">
</p>

### Paso 2: Importación de modelos 3D

<p align="justify">Para garantizar que los cases se ajustaran adecuadamente, comenzamos importando los modelos 3D del Arduino Nano y del sensor SUF268J001, disponibles en línea. Esto nos proporcionó las dimensiones exactas de los dispositivos, lo que nos permitió diseñar los cases con un nivel de precisión óptimo.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/bee7ac89-3fe8-4f19-9bba-ea8aa1fd8dfd" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/76a13de6-4985-4082-bbcf-9fcc0162545d" width="500" style="margin: auto;">
</p>

### Paso 3: Modelado de los cases

<p align="justify">Comenzamos el modelado creando perfiles en 2D usando la herramienta **Sketch**. Estos perfiles representaban la forma básica de los cases para el Arduino Nano y el sensor, basándonos en las dimensiones importadas previamente.</p>

<p align="justify">Posteriormente, utilizamos la herramienta **Extrude** para transformar estos perfiles en sólidos 3D, especificando el grosor de las paredes y el tamaño de cada elemento. En este paso, agregamos detalles como los agujeros para tornillos, ranuras para conectores y soportes internos que aseguran un ajuste preciso.</p>

<p align="justify">Para reducir el peso y la cantidad de material utilizado en la impresión 3D, aplicamos la herramienta **Shell** a los modelos, vaciando su interior y manteniendo solo las paredes con el grosor necesario para garantizar su resistencia estructural. Este paso fue fundamental para optimizar el diseño sin comprometer la funcionalidad de los cases.</p>

<p align="justify">Una vez modeladas las piezas, realizamos pruebas de ensamblaje virtual en Onshape para asegurarnos de que cada componente encajara correctamente con el Arduino Nano y el sensor. De esta forma, garantizamos que los cases pudieran alojar los dispositivos de manera precisa y segura.</p>

### Case para Arduino Nano
<p align="center">
  <img src="https://github.com/user-attachments/assets/31465de7-9abe-4d2a-a3fe-dbc2c54fcfa0" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/4fe7a348-aba4-4ffd-8907-00475d5e2538" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/9d793a62-19c3-4665-9c23-42aaefedcc2e" width="513" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/51545072-4f85-45ae-ae44-70f9a0c97980" width="487" style="margin: auto;">
</p>

### Case para sensor SUF268J001
<p align="center">
  <img src="https://github.com/user-attachments/assets/d00238e6-2cac-4ec9-82fc-12f821e538a2" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/d2888813-5b0f-4d6e-9de7-74ce8061496c" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/80fd8039-0a83-48ec-9960-244b05a38261" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/7606a1d6-7919-40a0-9ed1-0b3fc60c0f46" width="500" style="margin: auto;">
</p>

### Paso 4: Exportación del modelo

<p align="justify">Con el modelado completo, el siguiente paso fue exportar los diseños en formato **STL** desde Onshape, lo que nos permitió utilizarlos en la plataforma SimScale para llevar a cabo simulaciones de esfuerzo y deformación. Esta exportación se realizó asegurando que todos los detalles del diseño estuvieran correctamente definidos, lo cual es esencial para obtener resultados precisos en las simulaciones.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/59027319-a40b-4f7d-913f-99a2e1f7b514" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/e17f071c-ac2f-43b0-8433-72308969ed6c" width="500" style="margin: auto;">
</p>

### Paso 5: Importación del modelo en SimScale

<p align="justify">Ingresamos a SimScale, una plataforma de simulación en línea, y creamos un nuevo proyecto. Una vez en la plataforma, importamos los modelos 3D en formato **STL** que previamente habíamos exportado desde Onshape. Este proceso nos permitió cargar los diseños y preparar las condiciones necesarias para las simulaciones de esfuerzo.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/7ce21ec3-4c74-46e0-98f7-9d244a29fea8" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/394fde23-d0df-4910-b9d3-1ce5958ed628" width="500" style="margin: auto;">
</p>

### Paso 6: Configuración de soportes fijos

<p align="justify">Para asegurar que algunas partes del case permanecieran inmóviles durante la simulación, añadimos restricciones usando la opción **Fixed Support**. Seleccionamos las caras donde los cases estarían anclados en su uso práctico, fijándolas para simular un entorno realista y evaluar cómo reaccionarían otras áreas del diseño ante las fuerzas aplicadas.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/81be6d7d-f68a-4514-82ea-3d8b618710f0" width="535" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/e0723716-d00a-4be7-8a63-bf6234fcaec2" width="535" style="margin: auto;">
</p>

### Paso 7: Configuración de las condiciones de contorno

<p align="justify">El siguiente paso fue configurar las condiciones de contorno para las simulaciones. Definimos los parámetros de las fuerzas aplicadas sobre los modelos, asignando fuerzas en las direcciones X, Y e Z sobre las caras seleccionadas, simulando las condiciones de carga que los cases enfrentarían en el uso real.</p>

<p align="justify">Para esto, utilizamos la opción **Force** dentro de SimScale y seleccionamos las superficies correspondientes de los modelos donde se aplicarían las fuerzas. Establecimos los valores de las fuerzas para evaluar cómo se comportarían los cases bajo presión en situaciones reales.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/97619bad-8d4f-45a4-9831-5bc4df6ea79d" width="535" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/f25b65cd-d35f-4a05-beb5-e349f5d76caf" width="535" style="margin: auto;">
</p>

### Paso 8: Lanzamiento de las simulaciones

<p align="justify">Con las fuerzas y las restricciones aplicadas, procedimos a lanzar las simulaciones. Este proceso nos permitió calcular cómo las fuerzas aplicadas afectarían las distintas áreas del case, generando mapas de tensiones y deformaciones.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/18526f2a-f5db-409c-b7b9-801138abd9a9" width="535" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/0d20e6df-a88d-4710-96d2-e6fdfe214687" width="535" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/3b4505ec-2715-4199-a8fe-e26d5c3ec9a8" width="535" style="margin: auto;">
</p>

## Resultados

<p align="justify">Luego del realizado del modelado en 3D de los cases para alojar el arduino nano y el sensor fotoeléctrico, asegurándonos que las dimensiones y la estructura del diseño permiten la correcta fijación gracias a los agujeros de soporte para tornillos, exportamos e integramos a SimScale los modelos gracias a la plataforma Onshape, preparados para llevar a cabo las simulaciones de esfuerzos estáticos, usando como material principal PLA, según fue establecido en este documento.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/7a99e1f8-a043-4c2a-ad1a-4d7b639e1d93" width="511" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/1c781880-6a27-4bc8-b460-46477db66676" width="488" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/f775fe8e-586b-4d27-a14d-38395bb6c92b" width="499" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/f37e50c8-d6f2-498c-b6a1-4c28c2d77d77" width="501" style="margin: auto;">
</p>

<p align="justify">Analizamos los mapas de tensiones y deformaciones generadas por la fuerza aplicada en una de las caras del sistema, con esto logramos identificar las zonas críticas del diseño. Los mapas de color obtenidos destacan las concentraciones de fuerzas, que evaluamos para determinar si el case era capaz de soportar las condiciones que se presenten en la ubicación que elegimos para instalar el maletín. Simulamos una carga de viento representativa con velocidades de hasta 90 km/h.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/267f3c2a-9574-40e7-bdc3-c60e9e6842d1" width="535" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/242b988d-a4f9-492d-9fe1-7e6bc8d156ed" width="465" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/7decb55b-5954-4a99-b8d0-869f96b51f01" width="500" style="margin: auto;">
  <img src="https://github.com/user-attachments/assets/fc880566-a384-4d93-96c0-5c18e9fd91a8" width="500" style="margin: auto;">
</p>

<p align="justify">Las deformaciones fueron menores a 0.5 mm, confirmando que el modelo actual del caso no requiere modificaciones adicionales en términos de resistencia mecánica, listo para su implementación en el proyecto, siempre que las condiciones de operación no superen las especificadas en esta simulación.</p>

## Referencias Bibliograficas

1. Ferri Azor, J. M., Carbonell Verdú, A., Montañés Muñoz, N., Jorda-Vilaplana, A., & Fenollar Gimeno, O. Á. (2014). Optimización de las propiedades mecánicas del compuesto PLA/PCL para su aplicación como material biocompatible.

2. Gutiérrez Quintero, W. (2014). Resistencia al desgaste abrasivo de recubrimientos producidos por proyección térmica para aplicaciones navales (Doctoral dissertation).

3. Suárez, M. H., Coronel, C. E. I., Cueto, O. G., Bravo, E. L., & Iznaga, Á. S. (2008). Simulación mediante el Método de Elementos Finitos de la respuesta mecánica de un Oxisol. Revista Ciencias Técnicas Agropecuarias, 17(2), 55-61.

4. Tipán-Suárez, A. M., Beltran-Chamba, C. M., Jima-Matailo, J. C., & Vinueza-Sánchez, R. D. (2020). Diseño Mecatrónico para la fabricación de una impresora 3D. Dominio de las Ciencias, 6(3), 694-714.
