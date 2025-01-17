/*
  @author: Rui Reogo
  @license: CC-BY-4.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("Calculator:\n");
  
  if (argc < 4) {
    printf("Missing parameters!\n");
    printf("Usage:\n");
    printf(
      "  %s [type] [num1] [num2]\n", 
      argv[0]
    );

    return 1;
  }

  char *type = argv[1];
  int num1 = atoi(argv[2]);
  int num2 = atoi(argv[3]);

  if (strcmp(type, "add") == 0) {
    printf("Result: %i\n", num1 + num2);
  } else if (strcmp(type, "minus") == 0) {
    printf("Result: %i\n", num1 - num2);
  } else if (strcmp(type, "times") == 0) {
    printf("Result: %i\n", num1 * num2);
  } else if (strcmp(type, "divide") == 0) {
    if (num2 == 0) {
      printf("Error: Cant divide by 0.\n");
    } else {
      printf("Result: %i\n", num1 / num2);
    }
  } else {
    printf("Type %s does not exist!\n", type);
  }

  return 0;
}