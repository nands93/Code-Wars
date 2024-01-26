#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int position(char letter) {
  char *alphabet = "abcdefghijklmnopqrstuvwxyz";
  int i = 1;
  while (alphabet[i - 1] != letter) {
    i++;
  }
  return (i);
}

char *alphabet_position(const char *text) {
  int len = strlen(text);
  char *lower_text = malloc(sizeof(char*) * len);
  int i = 0;
  while (text[i] != '\0') {
    if (text[i] == '\'' || text[i] == ' ')
        i++;
    lower_text[i] = tolower(text[i]);
    //printf("%c", lower_text[i]);
    i++;
  }
  lower_text[i] = '\0';
  char *text_position = malloc(sizeof(char*) * len);
  i = 0;
  while(lower_text[i] != '\0') {
    text_position[i] = position(lower_text[i]);
    i++;
  }
  text_position[i] = '\0';
  
  return text_position;
}

int main(void) {
    char *letter = "The sunset sets at twelve o' clock.";
    int i = 0;
    char *result = alphabet_position(letter);
    while(result[i] != '\0') {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    return (0);
}

// returned string has to be dynamically allocated and will be freed by the caller
/*int main() { 
    const char *originalString = "The sunset sets at twelve o' clock.";
    int letters_len = strlen(originalString);
	char *alphabet[]

    char *letters = malloc(sizeof(char) * (letters_len + 1));
    strcpy(letters, originalString);

    int i = 0;
    while (letters[i] != '\0') {
        letters[i] = tolower(letters[i]);
        i++;
    }
    int j = 0;

    while (letters[j] >= 'a' && letters[j] <= 'z') {
        j++;
    }

    printf("%s\n", letters);
    printf("%d\n", j);

    // Free dynamically allocated memory
    free(letters);

    return 0;
}*/