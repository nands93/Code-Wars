#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str)
{
	int i = 0;
	int j = 0;
	char *tmp = calloc(sizeof(char), (strlen(str) + 1));
	while(str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    	{
      		i++;
      		continue ;
		}
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    	{
      		i++;
      		continue ;
    	}
    	else
    	{
      		tmp[j] = str[i];
      		j++;
    	}
    	i++;
  	}
	return (tmp);
}