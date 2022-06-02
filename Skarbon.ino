void Skarbon()
{
  if (karbon <= 14.375)
  {
    skarbon = 0;
  }
  else if (karbon >= 14.375 && karbon <= 28.75)
  {
    skarbon = (karbon - 14.375) / 14.375;
  }
  else if (karbon >= 28.75 && karbon <= 43.125)
  {
    skarbon = (43.125 - karbon) / 14.375;
  }
  else if (karbon >= 43.125)
  {
    skarbon = 0;
  }
}
