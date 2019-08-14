#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN  50

void modify(char *mdf){
  char *new_name = "Australia";
  strcpy(mdf,new_name);
}

int main(){
  char name[MAX_NAME_LEN] = "New Holland";
  modify(name);
  printf("%s\n", name);
  return 0;
}