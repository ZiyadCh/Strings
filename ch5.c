#include <stdio.h>
#include <string.h>

int main()
{
  char n[] = "hello";
  char inv[strlen(n)];

  for (int i =0; i<strlen(n);i++) {
    inv[i] = n[strlen(n) - i - 1];
  }
  printf("%s",inv);

  return 0;
}
