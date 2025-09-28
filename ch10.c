#include <stdio.h>
#include <string.h>

int main()
{
  char n[20],m[10];
  fgets(n,sizeof(n),stdin);
  fgets(m,sizeof(m),stdin);

  n[strlen(n) - 1] = '\0';
  m[strlen(m) - 1] = '\0';

  if (strstr(n,m)) {
    printf("yes");
  }

  return 0;
}
