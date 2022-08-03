// Complete the solution so that it reverses the string passed into it.

#include <string.h>
#include <stdlib.h>

char *strrev (char *string)
{
  int i = 0;
  int len = strlen(string);
  char *tmp = calloc(sizeof(char), len + 1);
  strcpy(tmp, string);
  while (string[i] != '\0')
  {
    string[i] = tmp[len - 1];
    i++;
    len--;
  }
  string[i] = '\0';
  return string; // reverse the string in place and return it
}