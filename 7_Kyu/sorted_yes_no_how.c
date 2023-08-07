/*
Complete the method which accepts an array of integers, and returns one of the following:

    "yes, ascending" - if the numbers in the array are sorted in an ascending order
    "yes, descending" - if the numbers in the array are sorted in a descending order
    "no" - otherwise

You can assume the array will always be valid, and there will always be one correct answer.
*/

const char *isSortedAndHow (const int array[/* arrayLength */], int arrayLength)
{
    int i = 0;
    int asc, desc = 1;
    
    while (i < arrayLength - 1)
    {
        if (array[i] > array[i + 1])
            asc = 0;
        else if (array[i] < array[i + 1])
            desc = 0;
        if (!asc && !desc)
            break ;
        i++;
    }
    if (asc)
        return "yes, ascending";
    else if (desc)
        return "yes, descending";
    else
        return "no";
}