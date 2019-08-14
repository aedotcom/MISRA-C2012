#include <stdio.h>

void modify(char **s)
{
  char *new_name = "Australia";
  *s = new_name;
}

int main()
{
  char *name = "New Holland";
  modify(&name);
  printf("%s\n", name);
  return 0;
}