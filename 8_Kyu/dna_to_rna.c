#include <stdlib.h>

char *dna_to_rna(const char *dna)
{
  char *rna = malloc(sizeof(char) * (strlen(dna) + 1));
  if (!dna || !rna)
    return (NULL);
  strcpy(rna, dna);
  int i = 0;
  while (rna[i] != '\0')
  {
    if (rna[i] == 'T')
      rna[i] = 'U';
    i++;
  }
  return (rna);
}