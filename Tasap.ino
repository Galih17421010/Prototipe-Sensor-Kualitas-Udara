void Tasap()
{
  if (asap <= 250)
  {
    tasap = 0;
  }
  else if (asap >= 250 && asap <= 500)
  {
    tasap = (asap - 250) / 250;
  }
  else if (asap >= 500)
  {
    tasap = 1;
  }
}
