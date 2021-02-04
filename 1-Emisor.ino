#include <SoftwareSerial.h>
char inByte = 0;
int i = 0;
String str = "";
char buf[128];
char mensaje = 0;
int comando = 0;
int contador = 0;
char arreglo[32];
int led = LED_BUILTIN;
SoftwareSerial puertoMaestro(11,10); //led azul(10,11);led verde(11,10)

void setup() {
  Serial.begin(57600);
  while (!Serial) {
    ;
  }
  puertoMaestro.begin(57600);
  pinMode(led, OUTPUT);
}

void loop() {

  while (Serial.available() > 0) {

    comando = Serial.read();

    arreglo[i] = comando;

    str.concat(arreglo[i]);

    i++;

  }

  comandoSelecto();

}
