Write a program that asks the user for a number n and prints the sum of the numbers 1 to n.

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
  setbuf(stdout, NULL);

  int n;

  int i = 0;

  int sum = 0;

  printf("N: ");
  scanf("%d", &n);

  for (i=1; i<=n; i++) {
    sum += i;
  }

  printf("Sum: %d.\n", sum);

  return 0;
}
```

```
cc    -c -o main.o main.c
cc -o app main.o
N: 5
Sum: 15.
```
