#include <stdio.h>
#include <string.h>

int main(void)
{

  char n[100] = "Hello";
  char m[] = "world";
  strcat(n,m);
  printf("%s",n);

  return 0;
}

