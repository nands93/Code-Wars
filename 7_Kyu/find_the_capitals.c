/*
Write a function that takes a single string (word) as argument. The function must return an ordered 
list containing the indexes of all capital letters in the string.

size_t *find_capitals (const char *word, size_t *nb_uppercase)
{
// report the number of uppercase letters
// return a heap-allocated array, it will be freed
  *nb_uppercase = 0;
  return NULL;
}

Example:
Test.assertSimilar( capitals('CodEWaRs'), [0,3,4,6] );

https://www.codewars.com/kata/539ee3b6757843632d00026b/train/c
*/

#include <stdio.h>
#include <stdlib.h>

size_t *find_capitals (const char *word, size_t *nb_uppercase)
{
	size_t i;
	size_t j;
	size_t len;
	size_t *arr;

	len = 0;
	i = 0;
	while (word[i])
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			len++;
		i++;
	}
	if (!(arr = malloc(sizeof(size_t) * len)))
  	{
		*nb_uppercase = 0;
		return (NULL);
	}
	i = 0;
	j = 0;
	while (word[i])
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			arr[j] = i;
			j++; 
		}
		i++;
	}
	return (arr);
}

int main()
{
	char test[] = "CodEWaRs";
	size_t *array = find_capitals(test, 0);

	for (size_t i = 0; i < 4; i++)
	{
		printf("%zu ", array[i]);
	}
	
	return 0;
}