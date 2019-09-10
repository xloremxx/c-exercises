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
