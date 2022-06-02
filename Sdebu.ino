void Sdebu()
{
  if (debu <= 150)
  {
    sdebu = 0;
  }
  else if (debu >= 150 && debu <= 300)
  {
    sdebu = (debu - 150) / 150;
  }
  else if (debu >= 300 && debu <= 450)
  {
    sdebu = (450 - debu) / 150;
  }
  else if (debu >= 450)
  {
    sdebu = 0;
  }
}
