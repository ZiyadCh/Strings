#include <stdio.h>

int main()
{
  int i =0;
  int j=0;
  char n[] = "hello world i am u";
  while (n[i] != '\0') {
    if (n[i] != ' ') {
      n[j] = n[i];
      j++;
    }
    i++;
  }

  n[j] = '\0';
  printf("%s",n);

  return 0;
}
