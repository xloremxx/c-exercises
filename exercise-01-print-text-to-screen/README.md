
Write a program that prints 'Hello World' to the screen.

```c
#include <stdio.h>

int main(int argc, char *argv[])
{

  printf("TEXT TO BE PRINTED\n");

  return 0;
}
```

```
cc -o main.o -c main.c
cc -o app main.o
TEXT TO BE PRINTED
```
