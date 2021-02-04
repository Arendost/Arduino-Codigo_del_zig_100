#include <SoftwareSerial.h>
SoftwareSerial comunicacion(10, 11); //led azul(10,11);led verde(11,10)
int led = LED_BUILTIN;
int pos = 0;
char comando;
char dato[16];
int i = 0;
String COMANDO = "";

void setup()
{

  Serial.begin(57600);

  while (!Serial) {
    ;
  }

  comunicacion.begin(57600);

  pinMode(led, OUTPUT);


}

void loop()
{
  while (comunicacion.available() > 0)
  {
    comando = comunicacion.read();

    dato[i] = comando;

    COMANDO.concat(comando);

    i++;
  }
  controlLED();
}
