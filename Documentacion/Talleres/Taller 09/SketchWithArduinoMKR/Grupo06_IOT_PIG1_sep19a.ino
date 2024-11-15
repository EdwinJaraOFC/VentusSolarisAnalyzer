#include "arduino_secrets.h"
#include "thingProperties.h"
#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

int moistPin = A5;

String relayState1 = "";
String relayState2 = "";

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // Defined in thingProperties.h
  initProperties();
  
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  CARRIER_CASE = true;
  carrier.begin();
  
  setDebugMessageLevel(4);   //Get Cloud Info/errors , 0 (only errors) up to 4
  ArduinoCloud.printDebugInfo();
  
  while (ArduinoCloud.connected() != 1) {
    ArduinoCloud.update();
    carrier.display.setTextSize(3);
    carrier.display.setCursor(20, 70);
    carrier.display.println("Waiting For");
    carrier.display.setCursor(5, 110);
    carrier.display.println("Connection...");
    delay(500);
  }
}

void loop() {
  ArduinoCloud.update();
 
  if (rele_1) {
    carrier.Relay1.open();
    relayState1 = "ON";
  } else {
    carrier.Relay1.close();
    relayState1 = "OFF";
  }
 
  if (rele_2) {
    carrier.Relay2.open();
    relayState2 = "ON";
  } else {
    carrier.Relay2.close();
    relayState2 = "OFF";
  }
  
  if (carrier.Light.colorAvailable()) {
    int none; // not gonna be used
    carrier.Light.readColor(none, none, none, luz);
  }
  
  temperatura = carrier.Env.readTemperature();
  humedad = carrier.Env.readHumidity();
 
  int rawMoistValue = analogRead(moistPin);
  humedadValor = map(rawMoistValue, 0, 1023, 100, 0);
}

void onHumedadChange() {
  // Do something when humedad changes
  Serial.print("Humedad changed to: ");
  Serial.println(humedad);
}

void onTemperaturaChange() {
  // Do something when temperatura changes
  Serial.print("Temperatura changed to: ");
  Serial.println(temperatura);
}

void onHumedadValorChange() {
  // Do something when humedadValor changes
  Serial.print("HumedadValor changed to: ");
  Serial.println(humedadValor);
}

void onLuzChange() {
  // Do something when luz changes
  Serial.print("Luz changed to: ");
  Serial.println(luz);
}

void onRgbColorChange() {
  // Do something when rgbColor changes
  uint8_t r, g, b;
  rgbColor.getValue().getRGB(r, g, b);
  if (rgbColor.getSwitch()) {
    carrier.leds.fill(carrier.leds.Color(g, r, b), 0, 5);
    carrier.leds.show();
  } else {
    carrier.leds.fill(0, 0, 5);
    carrier.leds.show();
  }
}

void onActualizacionPantallaChange() {
  // Do something when actualizacionPantalla changes
  carrier.display.fillScreen(ST77XX_WHITE);
  carrier.display.setTextColor(ST77XX_RED);
  carrier.display.setTextSize(2);

  carrier.display.setCursor(20, 30);
  carrier.display.print("Temperatura: ");
  carrier.display.print(temperatura);
  carrier.display.print(" C");

  carrier.display.setCursor(20, 50);
  carrier.display.print("Humedad: ");
  carrier.display.print(humedad);
  carrier.display.print(" %");

  carrier.display.setTextColor(ST77XX_ORANGE);
  carrier.display.setCursor(20, 70);
  carrier.display.print("Luz: ");
  carrier.display.print(luz);

  carrier.display.setTextColor(ST77XX_BLUE);
  carrier.display.setCursor(20, 90);
  carrier.display.print("HumedadValor: ");
  carrier.display.print(humedadValor);
  carrier.display.print(" %");

  carrier.display.setTextColor(ST77XX_BLUE);
  carrier.display.setCursor(20, 120);
  carrier.display.print("R1: ");
  carrier.display.print(relayState1);

  carrier.display.print("R2: ");
  carrier.display.print(relayState2);

  actualizacionPantalla = false;
}

void onRele1Change() {
  // Do something when rele_1 changes
  if (rele_1) {
    carrier.Relay1.open();
    relayState1 = "ON";
  } else {
    carrier.Relay1.close();
    relayState1 = "OFF";
  }
}

void onRele2Change() {
  // Do something when rele_2 changes
  if (rele_2) {
    carrier.Relay2.open();
    relayState2 = "ON";
  } else {
    carrier.Relay2.close();
    relayState2 = "OFF";
  }
}
