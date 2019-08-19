//#include <stdio.h>
#include <wchar.h>

void modify(char **s)
{
  const char *new_name = "Australia";
  *s = new_name;
}

int main()
{
  const char *name = "New Holland";
  modify(&name);
  //printf("My name is %s\n", name);
    Wprintf(L"My name is %s\n", name);
  return 0;
}