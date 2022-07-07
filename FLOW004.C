#include<stdio.h>
int main(void) {
  int t,i,num,first,last,sum;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d", &num);
    last = num %10;
    while(num >=10)
    {
      num = num/10;
    }
    first = num;
    sum = first + last;
    printf("%d\n",sum );
  }
  return 0;
}
