#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//Winston Venderbush

int main() {

  char *input = malloc(256);

  printf("Enter a command: ");
  fgets(input, sizeof(input), stdin);

  input = strsep(&input, "\n");
  char *args[10];

  int i = 0;
  while (input != 0) {
    args[i] = strsep(&input, " ");
    printf("%s", args[i]);
    i++;
  }
  args[i] = NULL;

  execvp(args[0], args);
  
}