/*
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more: http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

Example: (input --> output)

"ATTGC" --> "TAACG"
"GTAT" --> "CATA"
*/

#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
	char *str;
	int i;
	int len;
	
	i = -1;
	len = strlen(dna);
	str = malloc(sizeof(char) * len + 1);
	while(dna[++i])
	{
		if (dna[i] == 'A')
			str[i] = 'T';
		else if (dna[i] == 'T')
			str[i] = 'A';
		else if (dna[i] == 'G')
			str[i] = 'C';
		else if (dna[i] == 'C')
			str[i] = 'G';
	}
	str[i] = '\0';
	return (str);
}