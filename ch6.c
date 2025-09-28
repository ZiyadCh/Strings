#include <stdio.h>

int main()
{
  char n[10];
  char m;
  int i=0,x = 0;
  printf("entrer un mot:\n");
  scanf("%s",n);
  printf("entrer une caractere:\n");
  scanf(" %c",&m);
  while (n[i] != '\0') {
    if (n[i] == m) {
      x++;
    }
    i++;
  }
  printf("il ya %d de charactere",x);

  return 0;
}
