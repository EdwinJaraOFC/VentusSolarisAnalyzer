#include <WiFi.h>
#include "ThingSpeak.h"

// Configura tu red Wi-Fi
const char* ssid = "Redmi_9T";     
const char* password = "12345678";  

// Datos de ThingSpeak
unsigned long myChannelNumber = 2662834;  
const char* myWriteAPIKey = "66163MA96FU6L0SN";  

WiFiClient client;

const int potentiometerPin = 34;  // Pin donde está conectado el potenciómetro
const int ledPin = 22;  // Pin donde está conectado el LED

void setup() {
  Serial.begin(115200);
  
  // Configurar Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Conectando a WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Conectado!");

  // Iniciar conexión con ThingSpeak
  ThingSpeak.begin(client);

  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer el valor del potenciómetro (0 - 4095)
  int potentiometerValue = analogRead(potentiometerPin);
  
  // Mostrar el valor en el monitor serie
  Serial.print("Valor del potenciómetro: ");
  Serial.println(potentiometerValue);

  // Controlar el LED: si el valor del potenciómetro es mayor a 2000, encender el LED
  if (potentiometerValue > 2000) {
    digitalWrite(ledPin, HIGH);  // Encender el LED
  } else {
    digitalWrite(ledPin, LOW);  // Apagar el LED
  }

  // Escribir el valor en el canal de ThingSpeak
  ThingSpeak.setField(1, potentiometerValue);  // Enviar a Field 1 del canal

  // Enviar datos a ThingSpeak
  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  
  if (x == 200) {
    Serial.println("Datos enviados correctamente.");
  } else {
    Serial.println("Error al enviar los datos. Código de error: " + String(x));
  }

  // Esperar 15 segundos antes de enviar nuevamente (limite ThingSpeak)
  delay(15000);
}
