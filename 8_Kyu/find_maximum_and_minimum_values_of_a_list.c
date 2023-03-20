/*
Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that 
receive a list of integers as input, and return the largest and lowest number in that list, respectively.

Examples (Input -> Output)

* [4,6,2,1,9,63,-134,566]         -> max = 566, min = -134
* [-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56
* [42, 54, 65, 87, 0]             -> min = 0, max = 87
* [5]                             -> min = 5, max = 5

Notes: You may consider that there will not be any empty arrays/vectors.
*/

#include <stdio.h>

int min(int* array, int arrayLength)
{
    int i = 0;
    int mini = array[i];
    while(i < arrayLength)
    {
        if (mini > array[i])
            mini = array[i];
        i++;
    }
  return (mini);
}

int max(int* array, int arrayLength)
{
    int i = 0;
    int maxi = array[i];
    while(i < arrayLength)
    {
        if (maxi < array[i])
            maxi = array[i];
        i++;
    }
  return (maxi);
}

int main(void)
{
    int test[] = {1436426384, 877972317, 821402829, 2108922245, 173931090};
    int maxi = max(test, sizeof(test)/sizeof(test[0]));
    int mini = min(test, sizeof(test)/sizeof(test[0]));

    printf("max: %d\nmin: %d\n", maxi, mini);

    return(0);
}