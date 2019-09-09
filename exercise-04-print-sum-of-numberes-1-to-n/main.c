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
