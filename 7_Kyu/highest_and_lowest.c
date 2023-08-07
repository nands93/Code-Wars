#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void high_and_low (const char *strnum)
{
	int i, j;
	int str, num, high, low;
	char *strg;
	
	i = j = str = num = high = low = 0;
	strg = malloc(sizeof(char) * (strlen(strnum) + 1));
	strcpy(strg, strnum);
	while (strg[i])
	{
		if (strg[i] == ' ')
		i++;
		if (strg[i] != ' ')
		{
		str = strg[i];
		str = atoi(&strg[i]);
		if (str > high)
		{
			num = str;
			high = num;
		}
		if (str < low)
		{
			num = str;
			low = num;
		}
		i++;
		}
	}
	char result[5];
	sprintf(result, "%d %d", high, low);
}