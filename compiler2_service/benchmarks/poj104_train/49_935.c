#define NUM_ITER 1119660

#include <header.h>

void f(char *p1,char *p2)
{
     char *p=p1,*q=p2;
     for(;p1<p2;p1++,p2--)
     if(*p1!=*p2) break;
     if(p1>=p2) {for(;p<=q;p++) my_printf("%c",*p);my_printf("\n");}
}
int main_bench()
{
  char a[500];
  int i,j;
  char *p,*q;
  my_scanf("%s",a);
  for(i=1;i<=strlen(a)-1;i++)
  for(j=0;j<strlen(a)-i;j++)
  {p=a+j;q=a+i+j;f(p,q);}
  return 0;
}
