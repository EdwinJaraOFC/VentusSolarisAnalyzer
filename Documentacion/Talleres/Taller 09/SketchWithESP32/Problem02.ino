#include "WiFi.h"  // Incluye la biblioteca WiFi para manejar la conectividad Wi-Fi

void setup()
{
    Serial.begin(115200);  // Inicializa la comunicación serial a 115200 baudios

    // Configura el ESP32 en modo estación (cliente) y desconecta de una AP si estaba previamente conectado
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);  // Espera 100 ms para asegurar que la desconexión esté completa

    Serial.println("Setup done");  // Mensaje para indicar que la configuración está completa
}

void loop()
{
    Serial.println("scan start");  // Mensaje para indicar que el escaneo de redes está comenzando

    // `WiFi.scanNetworks()` realiza un escaneo de redes Wi-Fi disponibles y devuelve el número de redes encontradas
    int n = WiFi.scanNetworks();
    Serial.println("scan done");  // Mensaje para indicar que el escaneo ha terminado
    
    if (n == 0) {
        // Si no se encontraron redes, imprime un mensaje indicando que no se encontraron redes
        Serial.println("no networks found");
    } else {
        // Si se encontraron redes, imprime el número de redes encontradas
        Serial.print(n);
        Serial.println(" networks found");
        for (int i = 0; i < n; ++i) {
            // Imprime el índice, el SSID y la intensidad de la señal (RSSI) de cada red encontrada
            Serial.print(i + 1);
            Serial.print(": ");
            Serial.print(WiFi.SSID(i));  // SSID de la red
            Serial.print(" (");
            Serial.print(WiFi.RSSI(i));  // Intensidad de la señal en dBm
            Serial.print(")");
            Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?" ":"*");  // Indica si la red está abierta o cifrada
            delay(10);  // Pequeña pausa para no saturar el monitor serie
        }
    }
    Serial.println("");  // Imprime una línea en blanco para separar los resultados

    // Espera 5 segundos antes de volver a comenzar el escaneo
    delay(5000);
}