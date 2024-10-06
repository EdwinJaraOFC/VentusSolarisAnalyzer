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

- Iniciamos el proceso creando un nuevo proyecto en Onshape, una plataforma de modelado 3D basada en la nube. El objetivo del proyecto era diseñar los cases para el Arduino Nano y el sensor SUF268J001, asegurándonos de que encajaran perfectamente y cumplieran con las especificaciones físicas de los componentes.

### Paso 2: Importación de modelos 3D

- Para garantizar que los cases se ajustaran adecuadamente, comenzamos importando los modelos 3D del Arduino Nano y del sensor SUF268J001, disponibles en línea. Esto nos proporcionó las dimensiones exactas de los dispositivos, lo que nos permitió diseñar los cases con un nivel de precisión óptimo.

### Paso 3: Modelado de los cases

- Comenzamos el modelado creando perfiles en 2D usando la herramienta **Sketch**. Estos perfiles representaban la forma básica de los cases para el Arduino Nano y el sensor, basándonos en las dimensiones importadas previamente.

- Posteriormente, utilizamos la herramienta **Extrude** para transformar estos perfiles en sólidos 3D, especificando el grosor de las paredes y el tamaño de cada elemento. En este paso, agregamos detalles como los agujeros para tornillos, ranuras para conectores y soportes internos que aseguran un ajuste preciso.

- Para reducir el peso y la cantidad de material utilizado en la impresión 3D, aplicamos la herramienta **Shell** a los modelos, vaciando su interior y manteniendo solo las paredes con el grosor necesario para garantizar su resistencia estructural. Este paso fue fundamental para optimizar el diseño sin comprometer la funcionalidad de los cases.

- Una vez modeladas las piezas, realizamos pruebas de ensamblaje virtual en Onshape para asegurarnos de que cada componente encajara correctamente con el Arduino Nano y el sensor. De esta forma, garantizamos que los cases pudieran alojar los dispositivos de manera precisa y segura.

### Paso 4: Exportación del modelo

- Con el modelado completo, el siguiente paso fue exportar los diseños en formato **STL** desde Onshape, lo que nos permitió utilizarlos en la plataforma SimScale para llevar a cabo simulaciones de esfuerzo y deformación. Esta exportación se realizó asegurando que todos los detalles del diseño estuvieran correctamente definidos, lo cual es esencial para obtener resultados precisos en las simulaciones.

### Paso 5: Importación del modelo en SimScale

- Ingresamos a SimScale, una plataforma de simulación en línea, y creamos un nuevo proyecto. Una vez en la plataforma, importamos los modelos 3D en formato **STL** que previamente habíamos exportado desde Onshape. Este proceso nos permitió cargar los diseños y preparar las condiciones necesarias para las simulaciones de esfuerzo.

### Paso 6: Configuración de las condiciones de contorno

- El siguiente paso fue configurar las condiciones de contorno para las simulaciones. Definimos los parámetros de las fuerzas aplicadas sobre los modelos, asignando una fuerza de **400 N** en las direcciones X e Y sobre las caras seleccionadas, simulando las condiciones de carga que los cases enfrentarían en el uso real.

- Para esto, utilizamos la opción **Force** dentro de SimScale y seleccionamos las superficies correspondientes de los modelos donde se aplicarían las fuerzas. Establecimos los valores de las fuerzas para evaluar cómo se comportarían los cases bajo presión en situaciones reales.

### Paso 7: Configuración de soportes fijos

- Para asegurar que algunas partes del case permanecieran inmóviles durante la simulación, añadimos restricciones usando la opción **Fixed Support**. Seleccionamos las caras donde los cases estarían anclados en su uso práctico, fijándolas para simular un entorno realista y evaluar cómo reaccionarían otras áreas del diseño ante las fuerzas aplicadas.

### Paso 8: Generación de la malla

- El modelo se malló utilizando una malla tetraédrica. Refinamos la malla en las áreas clave, como las zonas donde se aplicaron las fuerzas y las áreas cercanas a las restricciones. Seleccionamos una malla más densa en estas áreas para obtener una mayor precisión en los resultados de la simulación.

### Paso 9: Lanzamiento de las simulaciones

- Con las fuerzas y las restricciones aplicadas, procedimos a lanzar las simulaciones. Este proceso nos permitió calcular cómo las fuerzas aplicadas afectarían las distintas áreas del case, generando mapas de tensiones y deformaciones.

### Paso 10: Análisis de los resultados

- Los resultados de las simulaciones nos proporcionaron mapas de tensiones y desplazamientos que indicaban las zonas más críticas del diseño. Las áreas con mayor concentración de fuerzas y las zonas con posibles deformaciones fueron identificadas y evaluadas para asegurar que el diseño fuera capaz de soportar las condiciones reales.

- Simulamos, además, una carga de viento representativa con velocidades de hasta **90 km/h**, que reflejaba situaciones extremas en el entorno de instalación del dispositivo. Este análisis nos permitió validar la resistencia del case y confirmar que su diseño era adecuado para las condiciones previstas.

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
