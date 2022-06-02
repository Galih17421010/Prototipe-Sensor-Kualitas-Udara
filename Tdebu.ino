void Tdebu()
{
  if (debu <= 300)
  {
    tdebu = 0;
  }
  else if (debu >= 300 && debu <= 600)
  {
    tasap = (debu - 300) / 300;
  }
  else if (debu >= 600)
  {
    tasap = 1;
  }
}
