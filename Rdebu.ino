void Rdebu()
{
  if (debu <= 0)
  {
    rdebu = 1;
  }
  else if (debu >= 0 && debu <= 300)
  {
    rdebu = (300 - debu) /300;
  }
  else if (debu >= 300)
  {
    rdebu = 0;
  }
}
