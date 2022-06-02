void Rkarbon()
{
  if (karbon <= 0)
  {
    rkarbon = 1;
  }
  else if (karbon >= 0 && karbon <= 28.75)
  {
    rkarbon = (28.75 - karbon) /28.75;
  }
  else if (karbon >= 28.75)
  {
    rkarbon = 0;
  }
}
