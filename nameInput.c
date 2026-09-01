#include <stdio.h>

int main() {

  char name[100];

  printf("please enter your name!\n");

  fgets(name, sizeof(name), stdin);

  printf("\n How are you %s\n", name);

  return 0;
}

