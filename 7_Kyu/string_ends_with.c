/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
	int len1, len2, len3;
	len1 = strlen(string);
	len2 = strlen(ending);
	len3 = len1 - len2;
	if (len2 > len1)
		return (false);
	if (strstr(string + len3, ending) != NULL)
		return (true);
	return (false);
}