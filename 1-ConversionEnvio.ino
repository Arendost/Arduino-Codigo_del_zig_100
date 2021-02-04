void conversionEnvio()
{
  str.toCharArray(buf, 16);
    puertoMaestro.write(buf);
    delay(10);
}


void limpiar()
{
  str = "";
    for (i = 0; i <= 16; i++)
    {
      arreglo[i] = 0;
      buf[i] = 0;
    }

}

