void Tkarbon()
{
  if (karbon <= 28.75)
  {
    tkarbon = 0;
  }
  else if (karbon >= 28.75 && karbon <= 57.5)
  {
    tkarbon = (karbon - 28.75) / 28.75;
  }
  else if (karbon >= 57.5)
  {
    tkarbon = 1;
  }
}
