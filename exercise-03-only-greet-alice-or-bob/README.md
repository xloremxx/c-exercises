Greet only Alice or Bob with their names.

```c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

  setbuf(stdout, NULL);

  char name[32];

  printf("Name: ");
  fgets(name, 32, stdin);

  name[strlen(name)-1] = '\0';

  if (strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0) {
    printf("Hi %s, nice to see you again!\n", name);
  } else {
    printf("Go away stranger!\n");
  }

  return 0;
}
```

```
cc -o main.o -c main.c
cc -o app main.o
Name: Alice
Hi Alice, nice to see you again!

Press ENTER or type command to continue
cc -o main.o -c main.c
cc -o app main.o
Name: Tom
Go away stranger!
```
