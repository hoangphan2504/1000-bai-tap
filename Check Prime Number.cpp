bool KiemTraSoNguyenTo(int x)
{
  if(x<2)
    return false;
  else 
  {
    for(int i=2; i< sqrt(x); i++)
    {
      if(x % i == 0)
        return false;
    }
  }
  return 
