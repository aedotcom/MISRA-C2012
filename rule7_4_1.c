#include <stdio.h>

void modify(char **s)
{
  const char *new_name = "Australia";
  *s = new_name;
}

int main()
{
  const char *name = "New Holland";
  modify(&name);
  printf("%s\n", name);
  return 0;
}