#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

  setbuf(stdout, NULL);

  char name[32];

  printf("Name: ");
  fgets(name, 32, stdin);

  name[strlen(name)-1] = '\0';

  printf("Hi %s.\n", name);

  return 0;
}
