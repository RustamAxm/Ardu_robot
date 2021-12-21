void Run(Elements vector)
{

int n = vector.size();
  Serial << "Run " << n << " functions"<< endl;
  for (int i=0; i< n; i++)
  {
    switch (vector[i])
    {
      case 'w':
        forward();
        break;
      case 's':
        backward();
        break;
      case 'd':
        right();
        break;
      case 'a':
        left();
        break;
      case 'x':
        Stop();
        break;
    }
}
}
