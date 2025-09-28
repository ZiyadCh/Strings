#include <stdio.h>

int main()
{
  int i =0;
  char n[] = "hello world i am u";
  while (n[i] != '\0') {
    if (n[i] == ' ') {
      n[i] = n[i+1];
    }
    i++;
  }
  printf("%s",n);

  return 0;
}
