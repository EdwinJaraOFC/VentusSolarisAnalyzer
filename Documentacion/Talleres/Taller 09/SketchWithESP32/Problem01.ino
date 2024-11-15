//Código Básico:
int potPin = 34; // Pin donde está conectado el potenciómetro
void setup() {
Serial.begin(115200); // Inicializar el monitor serie
}
void loop() {
int valor = analogRead(potPin); // Leer valor del potenciómetro
Serial.println(valor); // Mostrar valor en el monitor serie
delay(500); // Esperar medio segundo
}