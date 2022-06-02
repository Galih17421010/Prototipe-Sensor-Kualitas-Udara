void Rasap()
{
  if (asap <= 0)
  {
    rasap = 1;
  }
  else if (asap >= 0 && asap <= 250)
  {
    rasap = (250 - asap) /250;
  }
  else if (asap >= 250)
  {
    rasap = 0;
  }
}
