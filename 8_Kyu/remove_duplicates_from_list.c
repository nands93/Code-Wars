/*Define a function that removes duplicates from an array of numbers and returns it as a result.

int *distinct(const int *values, size_t count, size_t *pResultCount);

The order of the sequence has to stay the same.
Please make sure you store the number of distinct values 
in the memory pointed to by pResultCount. If values == NULL or count == 0, then *pResultCount == 0.*/

#include <stdlib.h>

int *distinct(const int *values, size_t count, size_t *pResultCount)
{
	size_t i;
	size_t j;
	size_t k;
	size_t counter;
	int *result;
	
	counter = 0;
	if (values == NULL || count == 0)
	{
		*pResultCount = 0;
		return (NULL);
	}
	if(!(result = malloc(count * sizeof(int))))
		return (NULL);
	i = 0;
	while(i < count)
	{
		result[i] = values[i];
		i++;
	}
	i = 0;
	while(i < count)
	{
		j = i + 1;
		while(j < count)
		{
			if (result[i] == result[j])
			{
				k = j;
				while (k < count)
				{
					result[k] = result[k + 1];
					k++;
				}
				j--;
				count--;
			}
			j++;
		}
		i++;
		counter++;
	}
	*pResultCount = counter;
	return (result);
}