<p align="left">
  <img src="https://github.com/user-attachments/assets/7d175927-ada3-49d1-9feb-c539e3595c73" width="200">
  <h1 align="center">Entregable 01: Regresión Lineal</h1>
</p>

## Introducción
<p align="justify">La EPA (Agencia de Protección Ambiental de los Estados Unidos) es una institución clave en el rubro de la salud pública y el ecosistema. Su misión es desarrollar e implementar políticas y regulaciones que aseguren la calidad del aire, agua y suelo, protegiendo así tanto a las personas como a los ecosistemas. La EPA no sólo establece normas estrictas para la emisión de contaminantes, sino que también realiza investigaciones científicas, monitorea la calidad ambiental y promueve prácticas sostenibles a nivel nacional (Our Mission and What We Do | US EPA, 2024).</p>

<p align="justify">El ozono en el aire es un gas que se encuentra tanto en las capas inferiores y en las capas superiores de la atmósfera, y su impacto varía según su ubicación. En la baja atmósfera o troposfera, el ozono es un contaminante dañino que contribuye a la formación del smog y puede causar problemas en la salud como enfermedades pulmonares como el asma, y otras enfermedades respiratorios. Además, este ozono es perjudicial para las plantas y la biodiversidad en general. (United States Environmental Protection Agency, 2007).</p>

<p align="justify">Según Cáceres (2024), la EPA regula los niveles de ozono troposférico debido a su capacidad para causar daños significativos. En este informe, se ha elegido el ozono (O3) como el principal contaminante para analizar la calidad del aire, utilizando datos recopilados durante los años 2022 y 2023 en Minnesota, Estados Unidos. La elección del ozono se basa en su relevancia que sirve como indicador de la calidad del aire y su impacto perjudicial en la salud pública y el medio ambiente.</p>

<p align="justify">Este análisis tiene como objetivo comprender las tendencias en la concentración de ozono, identificar posibles fuentes de emisión y mitigar el problema mediante un modelo de regresión. Nos enfocaremos en variables clave como la concentración máxima diaria de ozono en 8 horas, el índice de calidad del aire (AQI) y el porcentaje de datos capturados, que incluyen información como la fecha de medición, la concentración de ozono y la ubicación. Filtraremos las variables más relevantes para el desarrollo del modelo de regresión lineal, ignorando elementos irrelevantes, con el fin de obtener una mejor comprensión de la situación actual.</p>

## Metodología
<p align="justify">Nuestro análisis comienza con la carga de los conjuntos de datos correspondientes a los años 2022 y 2023, utilizando la biblioteca pandas para leer los archivos CSV. Estos datos se combinan en un único DataFrame para facilitar un análisis global y comprehensivo. Acto seguido, realizamos una exploración inicial de los datos para comprender su estructura, dimensiones y la presencia de valores faltantes o anómalos. Esta etapa incluye la verificación y manejo de datos faltantes, asegurando que el análisis subsiguiente no se vea afectado por la ausencia de información crítica.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/06dd756f-d511-4160-931a-a6415802c11f" width="900" style="margin: auto;">
</p>
<div align="center"; style="display: flex; justify-content: space-between;">
  <img src="https://github.com/user-attachments/assets/ebad87d4-8ef3-49bd-9d6f-dbb5f8573992" width="439px"/>
  <img src="https://github.com/user-attachments/assets/46a0f469-88e3-4128-9ce7-358940a54ba1" width="462px"/>
</div>

<p align="justify">Una vez establecida la integridad de los datos, procedemos a organizarlos en orden cronológico, desde las mediciones más antiguas hasta las más recientes. Este ordenamiento es crucial para evitar inconsistencias en etapas posteriores, especialmente al dividir los datos en conjuntos de entrenamiento y prueba. Paralelamente, llevamos a cabo la normalización o estandarización de las variables necesarias, garantizando que todas las características tengan el mismo peso y relevancia en el análisis, lo cual es fundamental para que el modelo de regresión lineal pueda procesarlas adecuadamente.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/1228029a-f160-461a-ad82-f1aca789bf48" width="700" style="margin: auto;">
</p>

<p align="justify">Con la información debidamente preparada, avanzamos hacia la realización de nuestra regresión lineal. Utilizamos un mapa de calor para identificar las variables con mayor correlación, las cuales serán consideradas para la predicción de nuestro objetivo: la "Daily Max 8-hour Ozone Concentration". Empleando la función LinearRegression de la librería sklearn, construimos un modelo al que introducimos nuestros datos, aprovechando el orden cronológico para evitar problemas temporales, para así no predecir valores del pasado entrenándonos con datos del futuro. Finalmente, entrenamos este modelo con los valores de X_train para la predicción de la concentración de ozono, estableciendo así las bases para nuestro análisis predictivo.</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/5ad84333-f06b-4d51-a71b-a4af678f7fe8" width="700" style="margin: auto;">
</p>

## Resultados
<p align="justify">Tras obtener un modelo entrenado, evaluamos su rendimiento utilizando diversas medidas de dispersión. Los resultados obtenidos son los siguientes:</p>

- Desviación Cuadrática Media (RMSD): 0.877, un valor próximo al esperado de 1
- Error Medio Absoluto (MAE): 0.00374
- Error Cuadrático Medio (MSE): 2.71e-05
- Raíz del Error Cuadrático Medio (RMSE): 0.00520

<p align="justify">Estos valores, especialmente el RMSD cercano a 1, indican un buen rendimiento del modelo. Para visualizar la calidad de nuestras predicciones, generamos un histograma que compara los valores predichos con los valores reales. Este histograma muestra una distribución normal, con una campana de Gauss que sugiere una predicción adecuada de los valores de "Daily Max 8-hour Ozone Concentration".</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/260c83bb-0668-4432-9c63-239b13101e86" width="700" style="margin: auto;">
</p>

## Referencias [IEEE]
- Cáceres, S. B. (2024). Efectos de la salud en infantes por contaminación atmosférica: Una revisión. Revista Científica Higía de la Salud, 10(1). https://www.itsup.edu.ec/myjournal/index.php/Higia/article/view/971
- Our Mission and What We Do | US EPA. (2024, 1 mayo). US EPA. https://www.epa.gov/aboutepa/our-mission-and-what-we-do
- United States Environmental Protection Agency. (2007). Un Resumen de la Ley del Aire Limpio. www.epa.com. https://espanol.epa.gov/sites/default/files/2020-05/documents/050720_cleanairact_un_resumen_de_la_ley_de_aire_limpio.pdf
