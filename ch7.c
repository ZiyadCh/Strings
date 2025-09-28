#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
  char n[] = "miniscule" ;
  int i =0;
  while (n[i] != '\0') {
    n[i] = toupper(n[i]);
    i++;
  }
  printf("%s",n);

  return 0;
}
