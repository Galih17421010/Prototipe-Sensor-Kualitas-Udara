void Sasap()
{
  if (asap <= 125)
  {
    sasap = 0;
  }
  else if (asap >= 125 && asap <= 250)
  {
    sasap = (asap - 125) / 125;
  }
  else if (asap >= 250 && asap <= 375)
  {
    sasap = (375 - asap) / 125;
  }
  else if (asap >= 375)
  {
    sasap = 0;
  }
}
