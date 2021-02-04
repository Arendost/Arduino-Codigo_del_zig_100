void controlLED()
{
  if (COMANDO == "el" )
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
    limpiar();

  }
  if (COMANDO == "al")
  {
   digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
    limpiar();

  }
}

void limpiar()
{
  COMANDO = "";
  for (i = 0; i <= 16; i++) {
    dato[i] = 0;
  }
}
