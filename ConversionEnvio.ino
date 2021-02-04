void conversionEnvio()
{
  str.toCharArray(buf, 16);
    puertoMaestro.write(buf);
    delay(10);
}

