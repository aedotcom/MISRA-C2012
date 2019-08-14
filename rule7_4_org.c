#include <stdio.h>

void modify(char **s)
{
   char new_name[10] = "Australia";
   s = new_name;         /* How do I correct this? */
}

int main()
{
   char *name = "New Holland";
   modify(name);
   printf("%s\n",name);
}