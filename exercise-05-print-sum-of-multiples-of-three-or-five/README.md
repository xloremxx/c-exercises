Ask user for a number n and print the sum of 1 to n and consider
only multiples of three or five.

e.g. 3, 5, 6, 9, 10, 12, 15 for n = 17.

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

  printf("Numbers: ");
  for (i=1; i<=n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      printf("%d ", i);
      sum += i;
    }
  }

  putchar('\n');

  printf("Sum: %d.\n", sum);

  return 0;
}
```

```
cc    -c -o main.o main.c
cc -o app main.o
N: 17
Numbers: 3 5 6 9 10 12 15
Sum: 60.
```
