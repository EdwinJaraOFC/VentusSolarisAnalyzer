#include "WiFi.h"  // Incluye la biblioteca WiFi para manejar la conectividad Wi-Fi

// Definimos el SSID y la contraseña de la nueva red
const char* ssid = "S23_FE_EDWIN";
const char* password = "FLDSMDFR";

void setup() {
    Serial.begin(115200);  // Inicializa la comunicación serial a 115200 baudios

    // Configura el ESP32 en modo estación (cliente) y desconecta de una AP si estaba previamente conectado
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);  // Espera 100 ms para asegurar que la desconexión esté completa

    Serial.println("Setup done");  // Mensaje para indicar que la configuración está completa

    // Intentamos conectarnos a la red especificada
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);  // Intentar conectarse al Wi-Fi con las credenciales

    // Esperamos a que la conexión se establezca
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }

    // Cuando se conecta, mostramos un mensaje con la IP asignada
    Serial.println("");
    Serial.println("WiFi connected!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());  // Muestra la dirección IP obtenida
}

void loop() {
    // En este caso puedes agregar más lógica o seguir usando el escaneo de redes si es necesario.
    delay(5000);  // Mantiene el bucle activo sin hacer nada en particular.
}
