#include <string.h>

const char* greet(const char *name, const char *owner) 
{
  int len1, len2;
  len1 = strlen(name);
  len2 = strlen(owner);
  while (len1 == len2)
  {
    if (*name == *owner)
      return ("Hello boss");
    else
      return ("Hello guest");
  }
  if (len1 > len2 || len1 < len2)
    return ("Hello guest");
  return (0);
}