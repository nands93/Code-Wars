char *makeUpperCase (char *string)
{
  int i = 0;
  while (string[i] != '\0')
  {
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] -= 32;
    i++;
  }
  return (string);
}