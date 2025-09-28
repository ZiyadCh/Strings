#include <stdio.h>
#include <string.h>

int main()
{

  int i =0;
  char s[] = "Hello";

  while (s[i] != '\0') {
    i++;
  }
  printf("la chaine a %d charactere.",i);
  

  return 0;
}
