#include <stdio.h>
int main(void) {
  int t,i,coins,people,cfd,max;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d",&coins);
    scanf("%d",&people);
    max = coins /people;
    cfd = coins % max;
    printf("%d\n",cfd);
  }
  return 0;
}
